clc; clear all; close all;
% Melt function
% Solstice Hiver: 21 d?cembre (Inclinaison ~= 68.4?)
% Equinoxe P/A: 21 mars/septembre (Inclinaison ~=45?)
% Solstice Ete: 21 juin (Inclinaison ~= 21.6?)
% Tilt repr?sent? par un sinus tel que theta=45+23.4*sin(2*pi*t/365);
% Constante d'irradiation incidente, c = 1360 W/m^2

% For 1st half
X=1:180; % Days, from the 1st of November
c_n=3*1360/680; %W/m^2
day=mod(X+225,365); % Days, from the 21st of March
Angle_tilt=45+23.4*sin(2*pi*day/365);
melt=c_n*(Angle_tilt/45).*sind(Angle_tilt).^2;
plot(X,45./Angle_tilt)
figure
%plot(X,Irr)
%figure
plot(X,melt,'x')

function [melt] = Day2Melt (day) % Input: day/Days, from the 1st of November
c_n=3*1360/680; %W/m^2
day=mod(day+225,365); % Days, from the 21st of March
Angle_tilt=45+23.4*sin(2*pi*day/365);
melt=c_n*sind(Angle_tilt).^2*45/Angle_tilt;
end


% Tilt_day=[];
% for i=1:length(Y)
%     Y(i)=mod(Y(i),365);
%     if  Y(i)<=183 
%         Tilt=21.6+46.8*(Y(i)/183);
%     else
%         Y(i)=Y(i)-183;
%         Tilt=68.4-46.8*(Y(i)/182);
%     end
% Tilt_day=[Tilt_day Tilt];  
% end
% Irradiation = c*cos(theta)
