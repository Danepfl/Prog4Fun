function Kem = Kem_trim (dim, Kem, Cage, cage_black, Cage_size)

% Removes neighbors
for i=1:dim(1) % i=line number
    for j=1:dim(2) % j=column number
        if Kem(i,j,1)~=0
            nbr=Kem(i,j,1);
            k=nbr+1;
            for a=-1:1
                for b=-1:1
                    if i+a>0 && j+b>0 && i+a<=dim(1) && j+b<=dim(2)
                        Kem(i+a,j+b,k)=0;
                    end
                end
            end
            cage_nbr=Cage(i,j);
            cage_black(cage_nbr,nbr)=1;
        end
    end
end

% Removes any same number in cage
for i=1:dim(1) % i=line number
    for j=1:dim(2) % j=column number
        for k=1:length(cage_black(1,:))
            cage_nbr=Cage(i,j);
            if cage_black(cage_nbr,k)==1
                if Kem(i,j,k+1)~=0
                    % [i, j, k]
                    Kem(i,j,k+1)=0;
                end
            end
        end
    end
end

% Removes common neighbors from every free number-available cage position
for l=1:max(max(Cage)) % For every cage
    for k=1:Cage_size(l) % For every # in cage
        first=1;% True, first position of # in cage
        common=-1;
        for i=1:dim(1) % i=line number
            for j=1:dim(2) % j=column number
                if Cage(i,j)==l && Kem(i,j,k+1)~=0 % If inside the cage and number possible
                    if first==1
                        rec_pos=zeros(9,2);
                        m=0;
                        for a=-1:1
                            for b=-1:1
                                m=m+1;
                                if i+a>0 && j+b>0 && i+a<=dim(1) && j+b<=dim(2) && Kem(i+a,j+b,1)==0
                                    if ~(a==0 && b==0)
                                        rec_pos(m,:)=[i+a, j+b];
                                    end
                                end
                            end
                        end
                        first=0; % False
                    else
                        rec_pos2=zeros(9,2);
                        m=0;
                        for a=-1:1
                            for b=-1:1
                                m=m+1;
                                if i+a>0 && j+b>0 && i+a<=dim(1) && j+b<=dim(2) && Kem(i+a,j+b,1)==0
                                    if ~(a==0 && b==0)
                                        rec_pos2(m,:)=[i+a, j+b];
                                    end
                                end
                            end
                        end
                        common=0; % False => not common # between 2 positions
                        q=0;
                        for n=1:length(rec_pos(:,1))
                            for p=1:length(rec_pos2(:,1))
                                if rec_pos(n,:)==rec_pos2(p,:)
                                    if ~(rec_pos(n,1)==0 && rec_pos(n,2)==0)
                                        q=q+1;
                                        common=1;% True, common position
                                        rec_pos_tmp(q,:)=rec_pos(n,:);
                                    end
                                end
                            end
                        end
                        if common==0
                            break;
                        else
                            rec_pos=rec_pos_tmp;
                            clear rec_pos_tmp
                        end
                    end % If first loop
                end % If inside cage & possible #
            end % For every Column #
            if common==0
                break;
            end
        end % For every Line #
        if common==1
            % Remove common neighbors
            for r=1:length(rec_pos(:,1))
%                 Cage
%                 Kem(:,:,1)
%                 Kem(:,:,k+1)
%                 Kem(rec_pos(r,1),rec_pos(r,2),k+1)
%                 [rec_pos(r,1),rec_pos(r,2),k, l] % For indication
                Kem(rec_pos(r,1),rec_pos(r,2),k+1)=0;
%                 clc
            end
        end
    end % For every # possible in cage
end % For every cage

end