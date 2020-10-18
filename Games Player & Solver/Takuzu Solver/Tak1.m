function [Tak, change] = Tak1 (Tak, dim, change)
changel=1;
while changel == 1
    changel=0;
    for m=1:2
        if m == 1
            nbr=1; anbr=2;
        else
            nbr=2; anbr=1;
        end
        for i=1:dim
            for j=1:dim-1 % Rule 2, column
                if Tak(i,j) == nbr && Tak(i,j+1) == nbr
                    if j~=1 && Tak(i,j-1) == 0
                        Tak(i,j-1)=anbr; changel=1;
                    end
                    if j~=dim-1 && Tak(i,j+2) == 0
                        Tak(i,j+2)=anbr; changel=1;
                    end
                end
            end
            for j=1:dim-2 % Rule 3, column
                if Tak(i,j) == nbr && Tak(i,j+2) == nbr && Tak(i,j+1) == 0
                    Tak(i,j+1)=anbr; changel=1;
                end
            end
        end
        for j=1:dim
            for i=1:dim-1 % Rule 2, row
                if Tak(i,j) == nbr && Tak(i+1,j) == nbr
                    if i~=1 && Tak(i-1,j)==0
                        Tak(i-1,j)=anbr; changel=1;
                    end
                    if i~=dim-1 && Tak(i+2,j)==0
                        Tak(i+2,j)=anbr; changel=1;
                    end
                end
            end
            for i=1:dim-2 % Rule 3, row
                if Tak(i,j) == nbr && Tak(i+2,j) == nbr && Tak(i+1,j) == 0
                    Tak(i+1,j)=anbr; changel=1;
                end
            end
        end
    end
    change=max(changel, change);
end
end
