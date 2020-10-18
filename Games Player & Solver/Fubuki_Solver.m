% 2D Fubuki (try in 3D, 4th dimension?)
clc; clear all; close all;
dbstop if error
tic
dim=3; % dim 3->6
% num2fill = [1 2 4 5 6 8 9]; % Fubuki 1
grid = zeros(dim, dim);
% grid(1,1)=7;grid(3,3)=3;
% Som=[18 10 17; 20 9 16]; % 1 for rows, 2 for columns
% num2fill = [1 2 3 4 5 6 8 9]; % Fubuki 2
% grid(2,2)=7;
% Som=[16 18 11; 22 17 6]; % 1 for rows, 2 for columns
num2fill = [1 2 3 4 6 7 8 9]; % Fubuki 3
grid(2,2)=5;
Som=[11 16 18; 8 13 24]; % 1 for rows, 2 for columns

allsum=sum(grid,'all')+sum(num2fill,'all');
allnum=num2fill; gridpos=find(grid~=0);
for i=1:length(gridpos)
    allnum=[allnum grid(gridpos(i))];
end
allnum=sort(allnum);
Som_tmp=Som;
a=length(num2fill);
% Vec: cell of line x possibility, containing elements
% Vec dimensions: cell of dim x(9^(dim-1)) size containing dim elements
Vec=cell(dim,(9^(dim-1)));
for i=1:dim
    y=0; c=0; d=0;
    Som_tmp(1,i)=Som_tmp(1,i)-sum(grid(i,:));
    Empty(1,i)=length(find(grid(i,:)==0));
    Pos{i}=find(grid(i,:)~=0);
    Som_tmp(2,i)=Som_tmp(2,i)-sum(grid(:,i));
    Empty(2,i)=length(find(grid(:,i)==0));
    q=dim-Empty(1,i);
    for b=1:2
        if Empty(b,i)==1
            for z=1:dim
                if grid(i,z)==0 && b==1
                    grid(i,z)=Som_tmp(b,i);
                end
                if grid(z,i)==0 && b==2
                    grid(z,i)=Som_tmp(b,i);
                    Empty(1,i)
                end
            end
            for k=1:a
                if num2fill(k)==Som_tmp(b,i)
                    num2fill(k)=0;
                end
            end
        end
    end
    if Empty(1,i)==2
        for k=1:a
            for l=1:a
                if num2fill(k)+num2fill(l)==Som_tmp(1,i)
                    if k~=l
                        y=y+1;
                        fill=[num2fill(k) num2fill(l)];
                        for j=1:dim
                            for f=1:q
                                if Pos{i}(f) == j
                                    Vec{i,y}(j)=grid(i,j);
                                    c=1;
                                end
                            end
                            if length(Vec{i,y}) <= j && c == 0
                                d=d+1;
                                Vec{i,y}(j)=fill(d);
                            end
                            c=0;
                        end
                        d=0;
                    end
                end
            end
        end
    end
    if Empty(1,i)==3
        for k=1:a
            for l=1:a
                for m=1:a
                    if num2fill(k)+num2fill(l)+num2fill(m)==Som_tmp(1,i)
                        if k~=l && k~=m && l~=m
                            y=y+1;
                            fill=[num2fill(k) num2fill(l) num2fill(m)];
                            for j=1:dim
                                for f=1:q
                                    if Pos{i}(f) == j
                                        Vec{i,y}(j)=grid(i,j);
                                        c=1;
                                    end
                                end
                                if length(Vec{i,y}) <= j && c == 0
                                    d=d+1;
                                    Vec{i,y}(j)=fill(d);
                                end
                                c=0;
                            end
                            d=0;
                        end
                    end
                end
            end
        end
    end
    if Empty(1,i)==4
        for k=1:a
            for l=1:a
                for m=1:a
                    for n=1:a
                        if num2fill(k)+num2fill(l)+num2fill(m)+num2fill(n)==Som_tmp(1,i)
                            if k~=l && k~=m && k~=n && l~=m && l~=n && m~=n
                                y=y+1;
                                fill=[num2fill(k) num2fill(l) num2fill(m) num2fill(n) zeros(1,dim-4)];
                                for j=1:dim
                                    for f=1:q
                                        if Pos{i}(f) == j
                                            Vec{i,y}(j)=grid(i,j);
                                            c=1;
                                        end
                                    end
                                    if length(Vec{i,y}) <= j && c == 0
                                        d=d+1;
                                        Vec{i,y}(j)=fill(d);
                                    end
                                    c=0;
                                end
                                d=0;
                            end
                        end
                    end
                end
            end
        end
    end
    if Empty(1,i)==5
        for k=1:a
            for l=1:a
                for m=1:a
                    for n=1:a
                        for o=1:a
                            if num2fill(k)+num2fill(l)+num2fill(m)+num2fill(n)+num2fill(o)==Som_tmp(1,i)
                                if k~=l && k~=m && k~=n && k~=o && l~=m && l~=n && l~=o && m~=n && m~=o && n~=o
                                    y=y+1;
                                    fill=[num2fill(k) num2fill(l) num2fill(m) num2fill(n) num2fill(o) zeros(1,dim-5)];
                                    for j=1:dim
                                        for f=1:q
                                            if Pos{i}(f) == j
                                                Vec{i,y}(j)=grid(i,j);
                                                c=1;
                                            end
                                        end
                                        if length(Vec{i,y}) <= j && c == 0
                                            d=d+1;
                                            Vec{i,y}(j)=fill(d);
                                        end
                                        c=0;
                                    end
                                    d=0;
                                end
                            end
                        end
                    end
                end
            end
        end
    end
    if Empty(1,i)==6
        for k=1:a
            for l=1:a
                for m=1:a
                    for n=1:a
                        for o=1:a
                            for p=1:a
                                if num2fill(k)+num2fill(l)+num2fill(m)+num2fill(n)+num2fill(o)+num2fill(p)==Som_tmp(1,i)
                                    if k~=l && k~=m && k~=n && k~=o && k~=p && l~=m && l~=n && l~=o && l~=p && m~=n && m~=o && m~=p && n~=o && n~=p && o~=p
                                        y=y+1;
                                        fill=[num2fill(k) num2fill(l) num2fill(m) num2fill(n) num2fill(o) num2fill(p) zeros(1,dim-6)];
                                        for j=1:dim
                                            for f=1:q
                                                if Pos{i}(f) == j
                                                    Vec{i,y}(j)=grid(i,j);
                                                    c=1;
                                                end
                                            end
                                            if length(Vec{i,y}) <= j && c == 0
                                                d=d+1;
                                                Vec{i,y}(j)=fill(d);
                                            end
                                            c=0;
                                        end
                                        d=0;
                                    end
                                end
                            end
                        end
                    end
                end
            end
        end
    end
end
c=zeros(1,6);l=zeros(1,6);
for i=1:9^(dim-1)
    if isempty(Vec{1,i})==1 && c(1)==0
        l(1)=i-1;c(1)=1;
    end
    if isempty(Vec{2,i})==1 && c(2)==0
        l(2)=i-1;c(2)=1;
    end
    if isempty(Vec{3,i})==1 && c(3)==0
        l(3)=i-1;c(3)=1;
    end
    if dim>3 && isempty(Vec{4,i})==1 && c(4)==0
        l(4)=i-1;c(4)=1;
    end
    if dim>4 && isempty(Vec{5,i})==1 && c(5)==0
        l(5)=i-1;c(5)=1;
    end
    if dim>5 &&isempty(Vec{6,i})==1 && c(6)==0
        l(6)=i-1;c(6)=1;
    end
    if sum(c)==dim
        break;
    end
end
poss=prod(l(1:dim));
M=zeros(dim,dim,poss);
for i=1:dim
    p{i,:}=1:l(i);
end
if dim==3
    Mp=combvec(p{1,:},p{2,:},p{3,:});
elseif dim ==4
    Mp=combvec(p{1,:},p{2,:},p{3,:},p{4,:});
elseif dim == 5
    Mp=combvec(p{1,:},p{2,:},p{3,:},p{4,:},p{5,:});
elseif dim == 6
    Mp=combvec(p{1,:},p{2,:},p{3,:},p{4,:},p{5,:},p{6,:});
end
for i=1:poss
    M(:,:,i)=[Vec{1,Mp(1,i)}; Vec{2,Mp(2,i)};Vec{3,Mp(3,i)}];
end
count=1;M2=zeros(dim,dim,1);
for i=1:poss
    Mvec=[];
    for k=1:dim
        Mvec=[Mvec M(k,:,i)];
    end
    Mvec=sort(Mvec);
    for j=1:dim
        if allsum~=sum(M(:,:,i),'all') || sum(M(:,j,i))~=Som(2,j) || sum(ne(allnum,Mvec))~=0
            M(:,:,i)=zeros(dim,dim);
            break;
        end
    end
    if M(:,:,i)~=zeros(dim,dim)
        M2(:,:,count)=M(:,:,i);
        count=count+1;
    end
end
if M2==zeros(dim,dim)
    error('Ce Fubuki n''a pas de solutions possible!')
elseif length(M2(1,1,:))~=1
    error('Ce Fubuki a plusieurs reponses possibles!')
else
    M2
end
toc 