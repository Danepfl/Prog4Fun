function [Row, Col, nbr, anbr] = TakRowCol (Tak, dim, m)
    [Row.N1, Col.N1]=find(Tak == 1);
    [Row.N2, Col.N2]=find(Tak == 2);
    for i=1:dim
        Row.Nbr1(i)=length(find(Row.N1 == i)); Row.Nbr2(i)=length(find(Row.N2 == i));
        Col.Nbr1(i)=length(find(Col.N1 == i)); Col.Nbr2(i)=length(find(Col.N2 == i));
    end
    if m == 1
        nbr=1; anbr=2;
        Row.Nbr=Row.Nbr1; Col.Nbr=Col.Nbr1;
        Row.aNbr=Row.Nbr2; Col.aNbr=Col.Nbr2;
    else
        nbr=2; anbr=1;
        Row.Nbr=Row.Nbr2; Col.Nbr=Col.Nbr2;
        Row.aNbr=Row.Nbr1; Col.aNbr=Col.Nbr1;
    end
end
