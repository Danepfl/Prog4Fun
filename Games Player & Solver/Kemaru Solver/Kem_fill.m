function Kem = Kem_fill (dim, Kem, Cage, Cage_size)

max_p=max(Cage_size);
Kem(:,:,2:max_p+1)=zeros(dim(1),dim(2),max_p);

for i=1:dim(1) % i=line number
    for j=1:dim(2) % j=column number
        if Kem(i,j,1) == 0 % First fill
            cage_nbr=Cage(i,j);
            cage_size=Cage_size(cage_nbr);
            for k=2:cage_size+1
                Kem(i,j,k)=k-1;% Adds all possibilities
            end
        end
    end
end

end