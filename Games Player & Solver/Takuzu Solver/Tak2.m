function [Tak, change] = Tak2 (Tak, dim, change)
changel=1;
while changel == 1
    changel=0;
    for m=1:2
        [Row, Col, ~, anbr] = TakRowCol (Tak, dim, m);
        for i=1:dim
            if Row.Nbr(i) == dim/2
                for j=1:dim % Rule 1, row
                    if Tak(i,j) == 0
                        Tak(i,j)=anbr; changel=1;
                    end
                end
            end
            if Col.Nbr(i) == dim/2
                for j=1:dim % Rule 1, column
                    if Tak(j,i) == 0
                        Tak(j,i)=anbr; changel=1;
                    end
                end
            end
        end
        change=max(changel, change);
    end
end
end