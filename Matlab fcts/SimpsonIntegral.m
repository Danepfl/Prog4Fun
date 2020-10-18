function I = SimpsonIntegral(f,a,b,n) % Calcule l'integrale via la methode de Simpson
% Cette integrale est calculee entre le temps a et le temps b, avec n intervalles 
... et f la fonction qui doit etre integree
% f peut etre soit une fonction anonyme soit un vecteur de valeurs qui
... doivent etre integres
% Les points entre a et b doivent etre equidistants
if numel(f)>1 % Si c'est un vecteur
    n=numel(f)-1; h=(b-a)/n;
    I= h/3*(f(1)+2*sum(f(3:2:end-2))+4*sum(f(2:2:end))+f(end));
else % Si c'est une fonction anonyme
    h=(b-a)/n; xi=a:h:b;
    I= h/3*(f(xi(1))+2*sum(f(xi(3:2:end-2)))+4*sum(f(xi(2:2:end)))+f(xi(end)));
end