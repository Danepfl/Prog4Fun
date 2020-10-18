clc; clear all; close all;
dbstop if error
[dim, Kem, Cage, Cage_size]=Kemaru_defined;

% Function possible number fill
Kem = Kem_fill(dim, Kem, Cage, Cage_size); % First fill

max_p=max(Cage_size);
cage_black=zeros(length(Cage_size),max_p);
Kem_p=zeros(size(Kem));

while ~isequal(Kem,Kem_p)
    Kem_p=Kem;
    Kem=Kem_trim(dim, Kem, Cage, cage_black, Cage_size);
    Kem=Kem_refill(dim, Kem, Cage, cage_black, Cage_size);
end

[mistake, finished] = Check_status_Kem(dim, Kem, Cage, Cage_size);
if mistake == 1
    Msg="There is a mistake in the solution of the Kemaru."
elseif finished==1
    Msg="Congratulations! The Kemaru has been well solved."
else
    Msg="Correct for now but not finished yet, keep going!"
    %% Add Brute force scenario
end

solution=Kem(:,:,1)




% Rules:
% Tout les chiffres apparaissent 1 fois par case selon case
% Si chiffre en position x,y alors interdiction du même chiffre en
% positions:
% x-1,y-1; x-1,y; x-1,y+1; x,y-1; x,y+1; x+1,y-1; x+1,y; x+1,y+1;

% To do
% - Trim neighbors w/ same number ~ Done
% - Trim cage w/ same number ~ Done
% - Look if one possibility per cage/spot ~ Done
% - Exclude common neighbors from every possibility in cage
% If yes, then Trim again ~ Done
% If nothing works, brute force