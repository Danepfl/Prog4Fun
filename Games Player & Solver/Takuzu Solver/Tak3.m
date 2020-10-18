function [Tak, change] = Tak3 (Tak, dim, change)
changel=0;
for m=1:2
    [Row, Col, nbr, anbr] = TakRowCol (Tak, dim, m);
    for i=1:dim % Row
        if Row.Nbr(i) == (dim/2)-1 && Row.aNbr(i) <= (dim/2)-1
            q=dim-Row.Nbr(i)-Row.aNbr(i);
            o=zeros(q,1);
            Taktmp=Tak; l=0; p=0;
            for l=1:q
                k=0;
                for j=1:dim
                    if Tak(i,j) == 0
                        k=k+1;
                        if k == l-p
                            Taktmp(i,j)=nbr;
                        else
                            Taktmp(i,j)=anbr;
                        end
                        o(k)=j;
                    end
                end
                for n=2:dim-1 % Check si faute
                    if Taktmp(i,n-1) == anbr && Taktmp(i,n) == anbr && Taktmp(i,n+1) == anbr
                        j=o(l-p);
                        Tak(i,j)=anbr; changel=1;
                        [Row, Col, nbr, anbr] = TakRowCol (Tak, dim, m);
                        o=zeros((dim-Row.Nbr(i)-Row.aNbr(i)),1);
                        p=p+1;
                        break;
                    end
                end
                Taktmp=Tak;
            end
        end
    end
    for j=1:dim % Col
        if Col.Nbr(j) == (dim/2)-1 && Col.aNbr(j) <= (dim/2)-1
            q=dim-Col.Nbr(j)-Col.aNbr(j);
            o=zeros(q,1);
            Taktmp=Tak; l=0; p=0;
            for l=1:q
                k=0;
                for i=1:dim
                    if Tak(i,j) == 0
                        k=k+1;
                        if k == l-p
                            Taktmp(i,j)=nbr;
                        else
                            Taktmp(i,j)=anbr;
                        end
                        o(k)=i;
                    end
                end
                for n=2:dim-1 % Check si faute
                    if Taktmp(n-1, j) == anbr && Taktmp(n, j) == anbr && Taktmp(n+1, j) == anbr
                        i=o(l-p);
                        Tak(i,j)=anbr; changel=1;
                        [~, Col, nbr, anbr] = TakRowCol (Tak, dim, m);
                        o=zeros((dim-Col.Nbr(j)-Col.aNbr(j)),1);
                        p=p+1;
                        break;
                    end
                end
                Taktmp=Tak;
            end
        end
    end
end
change=max(changel, change);
end