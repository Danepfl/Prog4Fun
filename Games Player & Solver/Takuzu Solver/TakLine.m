function [M] = TakLine (Tak, dim, Row)
emptyrow=dim-Row.Nbr1-Row.Nbr2; PreConfigRow=zeros(20,dim,dim);
for i=1:dim
    if emptyrow(i) == 0
        ConfigRow(1,:,i)=Tak(i,:);
        id(i)=1;
        continue;
    end
    row=Tak(i,:); nbr1fill=(dim/2)-Row.Nbr1(i); nbr2fill=(dim/2)-Row.Nbr2(i);
    j=1;
    vec=[ones(1,nbr1fill), 2*ones(1,nbr2fill)];
    a=perms(vec);
    rowp=unique(a,'rows');
    c=1;
    for k=1:length(rowp(:,1))
        PreConfigRow(k,[1:dim],i)=row;
        pos=1;
        for j=1:dim
            if Tak(i,j) == 0
                PreConfigRow(k,j,i)=rowp(k,pos);
                pos=pos+1;
            end
        end
        [Ok] = TakRowcheck (PreConfigRow(k,:,i), dim);
        if Ok == 1
            ConfigRow(c,:,i)=PreConfigRow(k,:,i);
            c=c+1;
        end
    end
    id(i)=c-1;
end
combposs=1:id(1);
for i=2:dim
    combposs=combvec(combposs,1:id(i));
end
possible_matrix=length(combposs(1,:));
M=zeros(dim,dim,possible_matrix);
n=1;p=0;
while n <= possible_matrix-p
    for i=1:dim
        M(i,:,n)=ConfigRow(combposs(i,n+p),:,i);
    end
    [Ok] = TakFullcheck (M(:,:,n), dim);
    if Ok == 0
        n=n-1; p=p+1;
    end
    n=n+1;
end
if Ok == 0
    M(:,:,n)=zeros(dim,dim);
end
n=n-1;
M=M(:,:,1:n);
end

function [Ok] = TakRowcheck (a, dim)
Ok=1;
for k=1:2
    for i=1:dim
        for j=2:dim-1
            if a(j-1) ~= k && a(j) ~= k && a(j+1) ~= k
                Ok=0;
                return;
            end
        end
    end
end
end

function [Ok] = TakFullcheck (A, dim)
Ok=1;
for k=1:2
    for i=1:dim
        for j=2:dim-1
            if (A(i,j-1) ~= k && A(i,j) ~= k && A(i,j+1) ~= k)
                Ok=0;
                return;
            end
        end
    end
end
for k=1:2
    for j=1:dim
        for i=2:dim-1
            if (A(i-1,j) ~= k && A(i,j) ~= k && A(i+1,j) ~= k)
                Ok=0;
                return;
            end
        end
    end
end
s=(dim/2)*3;
for i=1:dim
    if sum(A(i,:))~=s
        Ok=0;
        return;
    end
    if sum(A(:,i))~=s
        Ok=0;
        return;
    end
end
for i1=1:dim
    for i2=1:dim
        if isequal(A(i1,:),A(i2,:)) && i1~=i2
            Ok=0;
            return;
        end
        if isequal(A(:,i1),A(:,i2)) && i1~=i2
            Ok=0;
            return;
        end
    end
end
end