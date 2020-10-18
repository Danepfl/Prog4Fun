%% FSJM, exo 11
clc; clear all;
X=[];
Y=[];
Z=[];
OUI=[];
for x=0:9
    for y=0:9
        for z=0:9
            a=(100*x+10*y+z)^2;
            b=2*(11000*x+110*y+z);
            if a == b && x ~= y && x ~= z && y ~= z
                OUI=[OUI sqrt(a)];
                X=[X x];
                Y=[Y y];
                Z=[Z z];
            end
        end
    end
end
clear x y z a b

%% FSJM, exo 15
clc; clear all;
X=[]; Y=[]; Aire=[];
for x=0:0.001:10.5
    for y=0:0.001:10.5
        if x+y == 10.5 && x*y-8*x-13.5*y+78 == 0
            X=[X x]; Y=[Y y];
            Aire=[Aire x*y];
        end
    end
end
clear x y z

%% FSJM, exo 16
clc; clear all;
x=1:2020;
while length(x) ~= 1
    x=[x(3:end) x(1)];
end
%% FSJM, exo 17
clc; clear all
X=[];Y=[];S=[];
for x=1:2020
    for y=1:2020
        if x*y == 1
            S=[S (20+x*5)*(20+8.6602*y)];
        end
        if (x+1+(2*x+1)*y) >= 2020
            s=(20+x*5)*(20+8.6602*y);
            if min(S)>=s
                S=[S s];
            end
        end
    end
end
%% FSJM, exo 18
clc; clear all;
M=[0 0 1 0; 0 0 0 0; 0 0 0 0; 0 2 0 0];
N=[0 0 0 0 0 0 0 0];
P1=[];P2=[];
for i1=3:16
    for i2=3:16
        if numel(unique([i1,i2])) ~= 2
            continue;
        end
        for i4=3:16
            if numel(unique([i1,i2,i4])) ~= 3
                continue;
            end
            for i5=3:16
                if numel(unique([i1,i2,i4,i5])) ~= 4
                    continue;
                end
                for i6=3:16
                    if numel(unique([i1,i2,i4,i5,i6])) ~= 5
                        continue;
                    end
                    for i7=3:16
                        if numel(unique([i1,i2,i4,i5,i6,i7])) ~= 6
                            continue;
                        end
                        for i8=3:16
                            if numel(unique([i1,i2,i4,i5,i6,i7,i8])) ~= 7
                                continue;
                            end
                            p1=i1*i2*i4;
                            p2=i5*i6*i7*i8;
                            if 1.04*p1~=p2
                                continue;
                            end
                            for i9=3:16
                                if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9])) ~= 8
                                    continue;
                                end
                                for i10=3:16
                                    if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10])) ~= 9
                                        continue;
                                    end
                                    for i11=3:16
                                        if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10,i11])) ~= 10
                                            continue;
                                        end
                                        for i12=3:16
                                            if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10,i11,i12])) ~= 11
                                                continue;
                                            end
                                            for i13=3:16
                                                if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13])) ~= 12
                                                    continue;
                                                end
                                                for i15=3:16
                                                    if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i15])) ~= 13
                                                        continue;
                                                    end
                                                    for i16=3:16
                                                        if numel(unique([i1,i2,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i15,i16])) == 14
                                                            p3=i9*i10*i11*i12;
                                                            p4=i13*2*i15*i16;
                                                            if 1.04*p3==p4
                                                                N=[N ; i1 i2 1 i4 i5 2 i7 i8];
                                                                P1=[P1 p1]; P2=[P2 p2];
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
                    end
                end
            end
        end
    end
end
clear i1 i2 i4 i5 i6 i7 i8 i9 i10 i11 i12 i13 i15 i16
PP1=[0];
PP2=[0];
for i=1:length(P1)
    check1=1; check2=1;
    for j=1:length(PP1)
        if P1(i) == PP1(j)
            check1=0;
        end
    end
    for j=1:length(PP2)
        if P2(i) == PP2(j)
            check2=0;
        end
    end
    if check1==1
        PP1=[PP1 P1(i)];
    end
    if check2==1
        PP2=[PP2 P2(i)];
    end
end


