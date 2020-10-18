% Takuzu
% 0 if empty, 1 if zero in game and 2 if one in game
clc; clear all; close all;
dbstop if error
tic
% Tak=[0 1 1 0 0 2 2 0 0 1;
%      0 0 1 0 0 0 0 0 0 0;
%      0 0 0 0 0 0 0 0 0 0;
%      0 0 0 0 0 0 2 0 2 0;
%      0 1 0 0 0 0 0 0 0 0;
%      0 1 0 0 0 2 0 0 0 2;
%      0 0 0 1 1 0 1 0 1 0;
%      0 0 0 2 0 0 0 0 0 0;
%      0 0 0 0 0 0 2 0 0 0;
%      0 0 2 0 0 2 2 0 0 0;];
% Tak=[0 0 0 2 2 0 0 0 2 0; % 2nd Tak
%      1 0 0 0 0 0 2 0 1 0;
%      0 0 0 2 0 0 0 0 0 0;
%      2 0 1 0 0 0 2 0 1 2;
%      0 0 0 0 0 1 0 0 2 0;
%      2 0 0 0 0 0 0 0 0 0;
%      0 1 0 0 0 0 0 2 1 0;
%      0 0 0 0 0 2 0 0 0 0;
%      0 0 0 0 0 2 0 1 0 0;
%      0 0 1 0 1 0 0 0 2 0;];
Tak=[0 0 0 1 0 0 0 0 0 0 0 0; % 3rd Tak
     0 0 0 1 0 0 0 0 2 0 0 0;
     0 0 0 0 0 0 0 0 2 0 2 2;
     0 1 1 0 2 0 0 1 0 0 1 0;
     0 0 0 0 0 0 0 0 0 0 0 0;
     0 0 2 0 0 0 2 0 0 0 0 1;
     0 0 2 0 2 0 0 0 0 0 0 0;
     0 0 0 0 2 0 0 0 0 0 2 2;
     0 2 0 2 0 0 0 2 2 0 0 0;
     0 2 0 0 0 0 0 0 0 0 0 0;
     0 0 0 0 0 1 2 0 0 1 0 1;
     0 0 1 0 0 0 0 0 1 0 0 0;];
% Rule 1: sum(lig/col)=5*2+5*1
% Rule 2: if lig/col(i:i+1) = 1/2 => Borders = 2/1
% Rule 3: if lig/col(i-1,i+1) = 1/2 => lig/col(i)= 2/1
% Rule 4: Each row and each column must be unique
dim=length(Tak(:,1)); % Dimensions optimized up to 26x26
Row=[];Col=[];
change=1;
while change == 1
    change=0;
    N_need=1+floor((dim-4)/6);
    [Tak, change] = Tak1 (Tak, dim, change); % Rule 2&3
    [Tak, change] = Tak3 (Tak, dim, change);
    [Tak, change] = Tak1 (Tak, dim, change); % Rule 2&3
    if N_need >= 2
        [Tak, change] = Tak4 (Tak, dim, change);
        [Tak, change] = Tak1 (Tak, dim, change); % Rule 2&3
        if N_need >= 3
            [Tak, change] = Tak5 (Tak, dim, change);
            [Tak, change] = Tak1 (Tak, dim, change); % Rule 2&3
            if N_need >= 4
                [Tak, change] = Tak6 (Tak, dim, change);
                [Tak, change] = Tak1 (Tak, dim, change); % Rule 2&3
            end
        end
    end
    [Tak, change] = Tak2 (Tak, dim, change); % Rule 1
end
[Row, Col, ~, ~] = TakRowCol (Tak, dim, 1);
[Tak] = TakLine (Tak, dim, Row);
for n=1:length(Tak(1,1,:))
[Empty, cheat, cheatloc] = TakState (Tak(:,:,n), dim, Row, Col);
if cheat ~= 0
    error('Not ok', n)
end
end
Tak=Tak-1;
if n>1
disp(['Le Takazu a ', num2str(n), ' solutions possibles']);
end
toc