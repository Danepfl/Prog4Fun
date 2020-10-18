function [Tak, change] = Tak5 (Tak, dim, change)
changel=0;
for m=1:2
    [Row, Col, nbr, anbr] = TakRowCol (Tak, dim, m);
    for i=1:dim % Row
        if Row.Nbr(i) == (dim/2)-3 && Row.aNbr(i) <= (dim/2)-3
            q=dim-Row.Nbr(i)-Row.aNbr(i);
            o=zeros(q,1);
            Taktmp=Tak; l1=0; l2=0; l3=0; p=0;
            for l1=1:q
                check=0; acheck=0;
                for l2=1+p:q
                    if l2 == l1
                        continue;
                    end
                    for l3=1+p:q
                        if l3 == l1 || l3 == l2
                            continue;
                        end
                        k=0;
                        for j=1:dim
                            if Tak(i,j) == 0
                                k=k+1;
                                if k == l1-p || k == l2-p || k == l3-p
                                    Taktmp(i,j)=nbr;
                                else
                                    Taktmp(i,j)=anbr;
                                end
                                o(k)=j;
                            end
                        end
                        acheck=acheck+1;
                        for n=2:dim-1 % Check si faute
                            if (Taktmp(i,n-1) == anbr && Taktmp(i,n) == anbr && Taktmp(i,n+1) == anbr)||(Taktmp(i,n-1) == nbr && Taktmp(i,n) == nbr && Taktmp(i,n+1) == nbr)
                                check=check+1;
                                break;
                            end
                        end
                        Taktmp=Tak;
                    end % l3
                end % l2
                if acheck == check
                    check=0;
                    acheck=0;
                    j=o(l1-p);
                    Tak(i,j)=anbr; changel=1;
                    [Row, Col, ~, ~] = TakRowCol (Tak, dim, m);
                    o=zeros((dim-Row.Nbr(i)-Row.aNbr(i)),1);
                    p=p+1;
                end
            end
        end
    end
    
    
    for j=1:dim % Column
        if Col.Nbr(j) == (dim/2)-3 && Col.aNbr(j) <= (dim/2)-3
            q=dim-Col.Nbr(j)-Col.aNbr(j);
            o=zeros(q,1);
            Taktmp=Tak; l1=0; l2=0; l3=0; p=0;
            for l1=1:q
                check=0; acheck=0;
                for l2=1+p:q
                    if l2 == l1
                        continue;
                    end
                    for l3=1+p:q
                        if l3 == l1 || l3 == l2
                            continue;
                        end
                        k=0;
                        for i=1:dim
                            if Tak(i,j) == 0
                                k=k+1;
                                if k == l1-p || k == l2-p || k == l3-p
                                    Taktmp(i,j)=nbr;
                                else
                                    Taktmp(i,j)=anbr;
                                end
                                o(k)=i;
                            end
                        end
                        acheck=acheck+1;
                        for n=2:dim-1 % Check si faute
                            if (Taktmp(n-1, j) == anbr && Taktmp(n, j) == anbr && Taktmp(n+1, j) == anbr)||(Taktmp(n-1, j) == nbr && Taktmp(n, j) == nbr && Taktmp(n+1, j) == nbr)
                                check=check+1;
                                break;
                            end
                        end
                        Taktmp=Tak;
                    end % l3
                end % l2
                if acheck == check
                    check=0;
                    acheck=0;
                    i=o(l1-p);
                    Tak(i,j)=anbr; changel=1;
                    [~, Col, ~, ~] = TakRowCol (Tak, dim, m);
                    o=zeros((dim-Col.Nbr(j)-Col.aNbr(j)),1);
                    p=p+1;
                end
            end
        end
    end
end
change=max(changel, change);
end