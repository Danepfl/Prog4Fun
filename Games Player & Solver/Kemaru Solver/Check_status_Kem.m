function [mistake, finished] = Check_status_Kem(dim, Kem, Cage, Cage_size)
mistake=0;
finished=1;
sol=Kem(:,:,1);

% Check if finished
for i=1:dim(1)
    for j=1:dim(2)
        if sol(i,j)==0
            finished=0; % False => Not finished
        end
    end
end

% Check if two same # next to each other
for i=2:dim(1)
    for j=2:dim(2)
        if sol(i,j)~=0
            if sol(i,j)==sol(i-1,j) || sol(i,j)==sol(i-1,j-1) || sol(i,j)==sol(i,j-1)
                mistake=1; % True => Mistake present
            end
        end
    end
end

% Check if two same # in cage
table=zeros(length(Cage_size),max(Cage_size));
for i=1:dim(1)
    for j=1:dim(2)
        cage_nbr=Cage(i,j);
        if sol(i,j)~=0
            if table(cage_nbr,sol(i,j))==1
                mistake=1;
            else
                table(cage_nbr,sol(i,j))=1;
            end
        end
    end
end

end
