function Kem = Kem_refill (dim, Kem, Cage, cage_black, Cage_size)

% Fills number if one possibility per spot
for i=1:dim(1) % i=line number
    for j=1:dim(2) % j=column number
        for k=2:length(Kem(i,j,:))
            Kem_tmp(k)=Kem(i,j,k)/(k-1);
        end
        if sum(Kem_tmp) == 1 % One per spot
            k=find(Kem_tmp==1);
            Kem(i,j,1)=Kem(i,j,k);
            Kem(i,j,2:end)=0;
            return
        end
    end
end

% Fills number if one possibility per cage
for k=2:length(Kem(1,1,:))
    for l=1:max(max(Cage))% Cage_nbr
        count=0;
        for i=1:dim(1) % i=line number
            for j=1:dim(2) % j=column number
                if Cage(i,j)==l
                    if Kem(i,j,k)~=0
                        i_tmp=i;
                        j_tmp=j;
                        count=count+1;
                    end
                end
            end
        end
        if count == 0
            Error = "Error: Too much filtering";
        elseif count == 1
            Kem(i_tmp,j_tmp,1)=Kem(i_tmp,j_tmp,k);
            Kem(i_tmp,j_tmp,2:end)=0;
            return
        end
    end
end

end