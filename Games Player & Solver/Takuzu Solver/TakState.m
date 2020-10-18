function [Empty, cheat, cheatloc] = TakState (A, dim, Row, Col)
Empty.row=dim-Row.Nbr1-Row.Nbr2;
Empty.col=dim-Col.Nbr1-Col.Nbr2;
Empty.all=sum(Empty.row);
if Empty.all ~= sum(Empty.col)
    error('Problem with TakRowCol')
    cheat=cheat+1;
    cheatloc(cheat).err='Col emptier/heavier than Row';
end
cheat=0; done=0; dcheck=1; cheatloc(1).err='No error';
for i=1:2
    if i==1
        r=Row.Nbr1;
        c=Col.Nbr1;
    else
        r=Row.Nbr2;
        c=Col.Nbr2;
    end
    if sum(find(r > dim/2)) ~= 0
        cheat=cheat+1;
        cheatloc(cheat).row=find(r > dim/2);
        cheatloc(cheat).err='Element in Row appears too much';
    end
    if sum(find(c > dim/2)) ~= 0
        cheat=cheat+1;
        cheatloc(cheat).col=find(c > dim/2);
        cheatloc(cheat).err='Element in Col greater than dim/2';
    end
end

for i=1:dim
        for j=1:dim
            if A(i,j) ~= 0 && A(i,j) ~= 1 && A(i,j) ~= 2
                cheat=cheat+1;
                cheatloc(cheat).value=A(i,j);
                cheatloc(cheat).row=i;
                cheatloc(cheat).col=j;
                cheatloc(cheat).err='An illegal value is in the Takuzu';
            end
            if A(i,j) == 0
            dcheck=0;
            end
        end
end
if dcheck == 1
done=1;
end
s=(dim/2)*3;
for i=1:dim
    if sum(A(i,:))~=s && done==1
        cheat=cheat+1;
        cheatloc(cheat).row=i;
        cheatloc(cheat).err='RowSum not correct';
    end
    if sum(A(:,i))~=s && done==1
        cheat=cheat+1;
        cheatloc(cheat).col=i;
        cheatloc(cheat).err='ColSum not correct';
    end
    for j=2:dim-1
        if (A(i,j-1) == 1 && A(i,j) == 1 && A(i,j+1) == 1) || (A(i,j-1) == 2 && A(i,j) == 2 && A(i,j+1) == 2)
            cheat=cheat+1;
            cheatloc(cheat).row=i;
            cheatloc(cheat).col=j;
            cheatloc(cheat).err='Three times the same number in row';
        end
        if (A(j-1,i) == 1 && A(j,i) == 1 && A(j+1,i) == 1) || (A(j-1,i) == 2 && A(j,i) == 2 && A(j+1,i) == 2)
            cheat=cheat+1;
            cheatloc(cheat).row=j;
            cheatloc(cheat).col=i;
            cheatloc(cheat).err='Three times the same number in column';
        end
    end
end
for i1=1:dim
    for i2=1:dim
        if isequal(A(i1,:),A(i2,:)) && i1~=i2
            cheat=cheat+1;
            cheatloc(cheat).row=i1;
            cheatloc(cheat).col=i2;
            cheatloc(cheat).err='Two identical rows (2nd indexed in col)';
        end
        if isequal(A(:,i1),A(:,i2)) && i1~=i2
            cheat=cheat+1;
            cheatloc(cheat).row=i2;
            cheatloc(cheat).col=i1;
            cheatloc(cheat).err='Two identical columns (2nd indexed in row)';
        end
    end
end         
end