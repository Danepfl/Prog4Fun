clc; clear all; close all;
dbstop if error

[dim, Kem, Cage, Cage_size]=Kemaru_defined; % Define Kemaru
Kem = Kem_fill(dim, Kem, Cage, Cage_size); % First fill
max_cage=max(Cage_size); % Last cage #
cage_black=zeros(length(Cage_size),max_cage);% Vector containing cage # blacklist
Kem_p=zeros(size(Kem));% Control to check if changes
[Kem, Kem_p] = Kem_clean(dim, Kem, Cage, cage_black, Cage_size, Kem_p); % Refill & Trim fct
[mistake, finished] = Check_status_Kem(dim, Kem, Cage, Cage_size); % Check if mistake & if finished

if mistake == 1
    Msg="There is a mistake in the solution of the Kemaru."
elseif finished==1
    Msg="Congratulations! The Kemaru has been well solved."
    solution=Kem(:,:,1)
else
    t=2; % Number of options
    while finished==0 && t<6 % Stops when finished or when out of options
        change=0; % Records change options
        for i=1:dim(1)
            for j=1:dim(2)
                comb=length(Kem(1,1,1,:));
                for r=1:comb
                    Kem2=Kem(:,:,:,r);
                    opt=find_options(Kem2,i,j);% If n options, outputs n Kem
                    if opt==t
                        change=1;
                        for s=1:t
                            Kem_tmp = find_comb(Kem2,i,j,s);
                            [Kem_tmp, Kem_p] = Kem_clean(dim, Kem_tmp, Cage, cage_black, Cage_size, Kem_p); % Refill & Trim fct
                            [mistake, finished] = Check_status_Kem(dim, Kem_tmp, Cage, Cage_size); % Check if mistake & if finished
                            if mistake == 0
                                Kem(:,:,:,comb+(r-1)*t+s)=Kem_tmp; % Stack new combinations after
                                if finished == 1
                                    Msg="Congratulations! The Kemaru has been well solved."
                                    solution=Kem_tmp(:,:,1)
                                    return
                                end
                            end
                        end
                    end
                end
                u=length(Kem(1,1,1,:));
                if u>comb
                    Kem(:,:,:,1:comb)=[];
                end
            end
        end
        if change==0
            t=t+1;
        end
    end % End while ~finished / ~ more options
end

%% Main functions
function [Kem, Kem_p] = Kem_clean(dim, Kem, Cage, cage_black, Cage_size, Kem_p)
while ~isequal(Kem,Kem_p)
    Kem_p=Kem;
    Kem=Kem_trim(dim, Kem, Cage, cage_black, Cage_size);
    Kem=Kem_refill(dim, Kem, Cage, cage_black, Cage_size);
end
end

function [opt] = find_options(Kem2,i,j)
opt=0;
l=length(Kem2(i,j,:));
for k=2:l
    if Kem2(i,j,k)~=0
        opt=opt+1;
    end
end
end

function [Kem2] = find_comb(Kem2,i,j,s) % Fabricates the Kemaru combination N°s
opt=0;
l=length(Kem2(i,j,:));
for k=2:l
    if Kem2(i,j,k)~=0
        opt=opt+1;
        if opt==s
            Kem2(i,j,1)=Kem2(i,j,k);
            Kem2(i,j,2:end)=0;
        end
    end
end
end


%% Rules:
% Tout les chiffres apparaissent 1 fois par case selon case
% Si chiffre en position x,y alors interdiction du même chiffre en
% positions:
% x-1,y-1; x-1,y; x-1,y+1; x,y-1; x,y+1; x+1,y-1; x+1,y; x+1,y+1;

% To do
% - Trim neighbors w/ same number ~ Done
% - Trim cage w/ same number ~ Done
% - Look if one possibility per cage/spot ~ Done
% - Exclude common neighbors from every possibility in cage ~ Done
% If yes, then Trim again ~ Done
% If nothing works, brute force