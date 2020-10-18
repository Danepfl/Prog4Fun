clc; close all; clear all;
dbstop if error
% Programme de calcul des chutes de neige a Chandolin
% 
% Input:
% Snow.Fall, vecteur contenant les chutes de neige de l'annee 2017-2018
%
% Output:
% Snow.Height: vecteur contenant la quantite de neige pour toute la saison
% Snow.Quality: matrice contenant la qualite de la neige pour chaque jour
% de la saison pour toute la neige tombee
% Snow.Quality_tot: Valeur qui effectue une moyenne ponderee de la qualite
% de la neige chaque jour
% Best.h_day = Maximum of Snow.Height
% Best.q_day = Maximum of Snow.Quality
% Best.h_week = Best week regarding Snow.Height
% Best.q_week = Best week regarding Snow.Quality_tot

% Snow.Height calcule grace a la fonte des neiges, chute de neige et quantite
% de neige au jour precedent.
% Snow.Quality defini a 1 pour la neige qui tombe, puis degradation selon
% profondeur de la neige chaque jour

%% Settings


%% Inputs
Snow.Fall=zeros(149,1); %Snowfall for each day of the season
Snow.Fall(13)=30; Snow.Fall(30)=15; Snow.Fall(38)=15; Snow.Fall(39)=20;
Snow.Fall(41)=50; Snow.Fall(42)=20; Snow.Fall(45)=20; Snow.Fall(48)=20;
Snow.Fall(49)=20; Snow.Fall(58)=10; Snow.Fall(60)=25; Snow.Fall(61)=20;
Snow.Fall(63)=10; Snow.Fall(65)=45; Snow.Fall(70)=60; Snow.Fall(78)=30;
Snow.Fall(79)=20; Snow.Fall(80)=20; Snow.Fall(82)=30; Snow.Fall(83)=30;
Snow.Fall(93)=20; Snow.Fall(104)=5; Snow.Fall(107)=15; Snow.Fall(136)=5;
Snow.Fall(138)=10; Snow.Fall(149)=5;
% Snow.melt=3; % Fontes des neiges en cm/jour, Assume pas de fonte quand chute de neige
ql1=24; % Quality loss, lvl 1, %/day
ql2=8; % Quality loss lvl 2, %/day
h1=5; % Height max lvl 1, cm
h2=20; % Height max lvl 2, cm
hq=50; % Height considered in snow quality

%% Main

i=1; % i=Day of the season from the 1st of November, 1 for the 1st day
h=0; % h=Height of snow the i-th day, 0 for the 1st day
% Snow.Quality=[]; %(quality each cm)
Snow.Height=[0]; % Height of snow for each day of the season, 0 for the 1st day
Snow.Qual_tot=[0]; % Average quality of snow for each day of the season, 0 for the 1st day

% while h~=0 || i<=length(Snow.Fall)
%     % (h==0 || i>length(Snow.Fall)) = 0 | 0 = 0 = False => Arr?t
%     % (h~=0 || i>length(")          = 1 | 0 = 1 = True => Continue
%     % (h==0 || i<length(")          = 0 | 1 = 1 = True => Continue
%     % (h~=0 || i<length(")          = 1 | 1 = 1 = True => Continue
% end
while ~(h==0 && i>length(Snow.Fall)) 
    % (h==0 && i>length(Snow.Fall)) = 1 & 1 = 1 => ~1 = 0 = False => Arr?t
    % (h~=0 && i>length(")          = 0 & 1 = 0 => ~0 = 1 = True => Continue
    % (h==0 && i<length(")          = 1 & 0 = 0 => ~0 = 1 = True => Continue
    % (h~=0 && i<length(")          = 0 & 0 = 0 => ~0 = 1 = True => Continue

    i=i+1; % Increments the day
    
    % Snow quantity
    if i>length(Snow.Fall) % If the fall vector has been gone through, forces Snow.Fall(i)=0;
        fall=0;
    else
        fall=Snow.Fall(i);
    end
    if fall ~= 0
        melt=0;
    else
        melt=Day2Melt (i); % en cm
        melt_mm=round(melt*10);
    end
    new_snow=fall*10-melt_mm;%en mm
    h=Snow.Height(i-1)+new_snow/10; % en cm
    
    % Snow quality (mainly)
    if h < 0 % If more melting than quantity of snow, allows to restrain it from being negative
        h=0;
        Day_qual=[];
    else
        if new_snow >= 0 % Adding new snow / Removing melt snow
            Day_qual=[ones(new_snow,1); Day_qual]; % Bottom snow at the end, New snow at the top with quality of 1
        else
            Day_qual=Day_qual(1-new_snow:end); % Snow removed, no more quality assigned
        end
        for j=1:min(h1*10,length(Day_qual)) % Quality loss for lvl 1, between 0 cm and h1 cm
            Day_qual(j)=(1-ql1/100)*Day_qual(j); % Quality loss by a percentage value
        end
        for j=h1+1:min(h2*10,length(Day_qual)) % Quality loss for lvl 2, between h1+1 cm and h2 cm
            Day_qual(j)=(1-ql2/100)*Day_qual(j); % Quality loss by a percentage value
        end
    end
    
    % Weighted average of snow quantity on a day
    qual_tot=0; % Averaged quality of that day
    if ~isempty(Day_qual)
        pond=0;
        qual_tot=0;
        for j=1:min(length(Day_qual),hq*10) % i goes from 1 up to height of snow or Y
            qual_tot=qual_tot+Day_qual(j)*(j^-0.5); % Quality is diminished by 1/sqrt(distance)
            pond=pond+(j^-0.5); % Helps normalising the quality (in order to have everything between 0 and 1)
        end
        qual_tot=qual_tot/pond;
    end
    
    % Putting daily values in a vector
    Snow.Height=[Snow.Height; h];
    Snow.Quality{i}=Day_qual;
    Snow.Qual_tot=[Snow.Qual_tot; qual_tot];
end

% Defining the best conditions

% For the day
Best.day.h=find(Snow.Height==max(Snow.Height));
Best.day.q=find(Snow.Qual_tot==max(Snow.Qual_tot));
if length(Best.day.q)~=1
    Besthq=[Snow.Height(Best.day.q)];
    Best.day.q=Best.day.q(Besthq==max(Besthq));
end
if length(Best.day.h)~=1
    Besthq=[Snow.Height(Best.day.h)];
    Best.day.h=Best.day.h(Besthq==max(Besthq));
end
Best.day.q_v=Snow.Qual_tot(Best.day.q);
Best.day.h_v=Snow.Height(Best.day.h);

% For the week, from Monday to Sunday (6th november is a Monday)
Snow.week.h=zeros(ceil((length(Snow.Height)-5)/7),1);
Snow.week.q=zeros(ceil((length(Snow.Height)-5)/7),1);
for i=6:length(Snow.Height)
    weekcount=floor((i+1)/7);
    Snow.week.h(weekcount)=Snow.week.h(weekcount)+Snow.Height(i); % Contains the values of height for each week
    Snow.week.q(weekcount)=Snow.week.q(weekcount)+Snow.Qual_tot(i)/7; % Contains the values of quality for each week
end

Best.week.h=find(Snow.week.h==max(Snow.week.h));
Best.week.q=find(Snow.week.q==max(Snow.week.q));
if length(Best.week.q)~=1
    Besthq=[Snow.week.h(Best.week.q)];
    Best.week.q=Best.week.q(Besthq==max(Besthq));
end
if length(Best.week.h)~=1
    Besthq=[Snow.week.h(Best.week.h)];
    Best.week.h=Best.week.h(Besthq==max(Besthq));
end
Best.week.q_v=Snow.week.q(Best.week.q);
Best.week.h_v=Snow.week.h(Best.week.h);

[ddh1, ddh2, mdh1, mdh2, ydh1, ydh2]=Day2Cal(Best.day.h);
[ddq1, ddq2, mdq1, mdq2, ydq1, ydq2]=Day2Cal(Best.day.q);
[dwh11, dwh21, mwh11, mwh21, ywh11, ywh21, dwh12, dwh22, mwh12, mwh22, ywh12, ywh22]=Week2Cal(Best.week.h);
[dwq11, dwq21, mwq11, mwq21, ywq11, ywq21, dwq12, dwq22, mwq12, mwq22, ywq12, ywq22]=Week2Cal(Best.week.q);
% Showing the results in the command window
text1=sprintf('The best day to ski relative to snow height is the %d%d.%d%d.%d%d',ddh1, ddh2, mdh1, mdh2, ydh1, ydh2);
text2=sprintf('The best day to ski relative to snow quality is the %d%d.%d%d.%d%d.',ddq1, ddq2, mdq1, mdq2, ydq1, ydq2);
text3=sprintf('The best week to ski relative to snow height is the week starting from the %d%d.%d%d.%d%d to the %d%d.%d%d.%d%d.',dwh11, dwh21, mwh11, mwh21, ywh11, ywh21, dwh12, dwh22, mwh12, mwh22, ywh12, ywh22);
text4=sprintf('The best week to ski relative to snow quality is the week starting from the %d%d.%d%d.%d%d to the %d%d.%d%d.%d%d.',dwq11, dwq21, mwq11, mwq21, ywq11, ywq21, dwq12, dwq22, mwq12, mwq22, ywq12, ywq22);
disp(text1)
disp(text2)
disp(text3)
disp(text4)

% Showing the results neatly in graphs
Days=1:length(Snow.Height); % Plot of the height for each day
area(Days,Snow.Height,'FaceColor','w','EdgeColor','w') % Area and edge of curve filled w/ white
title('Height of snow at 2''000 m in Chandolin, VS')
xlabel('Days of the season (from the 1st of November 2017)')
ylabel('Height of Snow [cm]')
set(gca,'Color','k') % Plot Background set to black

figure
plot(Days,Snow.Qual_tot,'r') % Plot of the quality for each day
title('Quality of snow at 2''000 m in Chandolin, VS')
xlabel('Days of the season (from the 1st of November 2017)')
ylabel('Quality of Snow, from 0 (worst) to 1 (best)')
ylim([0,1])

figure
Weeks=1:length(Snow.week.h); % Plot of the height for each week
area(Weeks,Snow.week.h,'FaceColor','w','EdgeColor','w') % Area and edge of curve filled w/ white
title('Height of snow at 2''000 m in Chandolin, VS')
xlabel('Weeks of the season (from the 6th of November 2017)')
ylabel('Height of Snow [cm]')
xlim([1,inf])
set(gca,'Color','k') % Plot Background set to black

figure
plot(Weeks,Snow.week.q,'r') % Plot of the quality for each week
title('Quality of snow at 2''000 m in Chandolin, VS')
xlabel('Weeks of the season (from the 6st of November 2017)')
ylabel('Quality of Snow, from 0 (worst) to 1 (best)')
ylim([0,1])
xlim([1,inf])

clearvars -except Snow Best % Clear all except outputs

% Functions

function [melt] = Day2Melt(day) % Input: day/Days, from the 1st of November
c_n=3*1360/680; %W/m^2
day=mod(day+225,365); % Days, from the 21st of March
Angle_tilt=45+23.4*sin(2*pi*day/365);
melt=c_n*((Angle_tilt/45).^3).*sind(Angle_tilt).^2;
end

function [d1, d2, m1, m2, y1, y2]=Day2Cal(day)
y1=1;
if day<=61
    m1=1;
    y2=7;
    if day<=30 % November
        m2=1;
        d1=floor(day/10);
        d2=mod(day,10);
    else % December
        m2=2;
        day=day-30;
        d1=floor(day/10);
        d2=mod(day,10);
    end
else
    day=day-61;
    m1=0;
    y2=8;
    switch true
        case any(day==1:31) % January
            m2=1;
            d1=floor(day/10);
            d2=mod(day,10);
        case any(day==32:59) % February
            m2=2;
            day=day-31;
            d1=floor(day/10);
            d2=mod(day,10);
        case any(day==60:90) % March
            m2=3;
            day=day-59;           
            d1=floor(day/10);
            d2=mod(day,10);
        case any(day==91:120) % April
            m2=4;
            day=day-90;   
            d1=floor(day/10);
            d2=mod(day,10);
        case any(day==121:150) % May
            m2=5;
            day=day-120;
            d1=floor(day/10);
            d2=mod(day,10);
        case any(day==151:180) % June
            m2=6;
            day=day-151;
            d1=floor(day/10);
            d2=mod(day,10);
        otherwise
            d1=0; d2=0;
            m1=0; m2=0;
            y1=0; y2=0;
    end
end
end

function [d11, d21, m11, m21, y11, y21, d12, d22, m12, m22, y12, y22]=Week2Cal(week)
day1=week*7+6;
day2=week*7+12;
[d11, d21, m11, m21, y11, y21]=Day2Cal(day1);
[d12, d22, m12, m22, y12, y22]=Day2Cal(day2);
end