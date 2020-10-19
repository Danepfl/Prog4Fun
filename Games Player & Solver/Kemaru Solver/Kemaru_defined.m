function [dim, Kem, Cage, Cage_size] = Kemaru_defined

%% Kemaru N°1 (Telestar, Octobre 2020, Grille N°1/Force 3)

% dim=[9 9]; % Lignes/Colonnes
% Cage=zeros(dim(1),dim(2));
% Kem=zeros(dim(1),dim(2));
%
% Cage=[  1 1 1 1 1 2 2 2 2;
%         3 3 4 4 4 4 5 6 2;
%         3 3 4 7 7 5 5 6 6;
%         8 3 7 7 7 5 5 9 9;
%         8 8 10 10 11 11 9 9 9;
%         12 10 10 10 11 11 11 13 13;
%         12 12 14 15 15 15 15 13 13;
%         16 12 14 14 17 18 18 18 18;
%         16 16 14 14 17 17 17 17 18; 
%         ];
% Kem(1,1)=2;
% Kem(1,8)=5;
% Kem(2,5)=4;
% Kem(2,7)=3;
% Kem(5,1)=3;
% Kem(6,7)=1;
% Kem(7,3)=1;
% Kem(9,3)=5;
% Kem(9,6)=4;

%% Kemaru N°2 (Telestar, Octobre 2020, Grille N°2/Force 3)

% dim=[9,9]; % Lignes/Colonnes
% Cage=zeros(dim(1),dim(2));
% Kem=zeros(dim(1),dim(2));
%
% Cage=[  1 1 2 2 3 3 3 4 4;
%         1 2 2 2 5 3 3 6 6;
%         7 7 7 7 5 5 5 5 6;
%         8 8 8 7 9 9 9 9 6;
%         8 10 11 11 11 12 12 9 6;
%         10 10 13 11 11 12 12 14 15;
%         10 10 13 16 14 14 14 14 15;
%         17 18 18 16 16 19 19 19 15;
%         17 18 18 16 16 19 19 15 15;
%         ];
%     
% Kem(1,3)=4;
% Kem(1,5)=3;
% Kem(1,7)=2;
% Kem(3,4)=4;
% Kem(3,9)=1;
% Kem(5,5)=2;
% Kem(6,2)=3;
% Kem(9,4)=3;
% Kem(9,9)=4;

%% Kemaru N°3 (EPFL Magazine, N°35, June 2020, Hard 1)

% dim=[4 5]; % Lignes/Colonnes
% Cage=zeros(dim(1),dim(2));
% Kem=zeros(dim(1),dim(2));
% 
% Cage=[  1 2 2 2 2;
%         1 3 3 3 3;
%         1 3 4 4 5;
%         1 1 4 4 5;
%         ];
% Kem(1,5)=1;
% Kem(2,2)=1;
% Kem(3,1)=3;

%% Kemaru N°4 (EPFL Magazine, N°35, June 2020, Hard 2)

% dim=[6 11]; % Lignes/Colonnes
% Cage=zeros(dim(1),dim(2));
% Kem=zeros(dim(1),dim(2));
% 
% Cage=[  1 1 2 2 3 3 3 4 4 5 5;
%         1 1 2 2 6 6 6 4 4 5 5;
%         7 7 8 8 8 6 6 9 9 10 10;
%         7 7 8 11 11 12 12 9 9 10 10;
%         7 11 11 11 13 12 12 12 14 14 10;
%         15 15 15 15 13 13 14 14 14 16 16;
%         ];
% Kem(1,1)=4;
% Kem(1,11)=3;
% Kem(3,1)=4;
% Kem(3,4)=4;
% Kem(3,10)=3;
% Kem(4,10)=4;
% Kem(5,9)=1;
% Kem(6,7)=4;

%% Kemaru N°5 (EPFL Magazine, N°35, June 2020, Hard 3)

% dim=[6 11]; % Lignes/Colonnes
% Cage=zeros(dim(1),dim(2));
% Kem=zeros(dim(1),dim(2));
% 
% Cage=[  1 1 2 2 2 3 3 3 3 3 4;
%         1 1 2 2 5 5 6 6 7 4 4;
%         8 8 9 9 5 5 6 7 7 10 11;
%         8 8 9 9 12 6 6 7 10 10 11;
%         13 12 12 12 12 14 14 7 15 15 11;
%         13 13 13 13 14 14 14 15 15 11 11;
%         ];
% Kem(1,6)=2;
% Kem(1,9)=4;
% Kem(2,1)=1;
% Kem(2,9)=3;
% Kem(4,7)=5;
% Kem(5,11)=5;
% Kem(6,2)=5;
% Kem(6,6)=5;

%% Kemaru N°6 (Suguru App, Expert Lvl 998)

dim=[9 9]; % Lignes/Colonnes
Cage=zeros(dim(1),dim(2));
Kem=zeros(dim(1),dim(2));

Cage=[  1 1 2 3 3 3 4 4 5;
        2 2 2 3 3 3 6 4 4;
        7 8 2 9 9 6 6 4 4;
        7 8 8 9 9 9 6 10 10;
        7 8 8 8 11 9 6 10 10;
        12 12 13 13 11 14 14 14 15;
        13 13 13 16 11 11 14 14 17;
        13 18 16 16 11 11 14 19 17;
        18 18 18 16 16 16 19 19 19;
        ];
Kem(1,3)=1;
Kem(1,5)=2;
Kem(2,1)=4;
Kem(2,7)=5;
Kem(2,9)=6;
Kem(4,1)=1;
Kem(6,8)=3;
Kem(7,2)=3;
Kem(7,5)=3;
Kem(8,1)=6;
Kem(9,2)=3;
Kem(9,6)=6;
Kem(9,9)=3;

%% General stuff

% Determining # of cages and relative size
last_cage=max(max(Cage));
Cage_size=zeros(last_cage,1);
for i=1:dim(1)
    for j=1:dim(2)
        cage_nbr=Cage(i,j);
        Cage_size(cage_nbr)=Cage_size(cage_nbr)+1;
    end
end

end