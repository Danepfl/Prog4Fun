function x = GaussLegendre(n, x_a, x_b)
% GAUSSLEGENDRE Gauss-Legendre quadrature points.
%
% X = GAUSSLEGENDRE(N, A, B) returns the N-point Gauss-Legendre quadrature
% nodes for the interval [A, B].

if (n < 1)
    error(' n must be >= 1 '); 
end

if n==1
    x=(x_a+x_b)/2;
else
    % calculates the values of the recursive relation
    [a,b]=coeflege(n);
    
    % builds the matrix
    JacM=diag(a)+diag(sqrt(b(2:n)),1)+diag(sqrt(b(2:n)),-1);
    
    % calculates points and weights from eigenvalues / eigenvectors of JacM
    x=eig(JacM);
    x=sort(x);
    
    % modifies points according to the distribution and its interval x_a, x_b
    x = (x_b-x_a)/2*x + (x_a+x_b)/2;
end

%----------------------------------------------------------------------
function [a, b] = coeflege(n)
a=zeros(1,n);
b=zeros(1,n);

b(1)=2;

k=2:n;
b(k)=1./(4-1./(k-1).^2); 
