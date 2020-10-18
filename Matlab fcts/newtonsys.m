function [zero, niter, incr_v] = newtonsys(F, J, x0, tol, nmax)
% NEWTONSYS Find the zeros of a system of non-linear equations.
%   [ZERO] = NEWTONSYS(F,J,X0,TOL,NMAX) tries to find the zeros ZERO of the 
%   continuous and differentiable system of functions F nearest to X0 using 
%   the Newton method. J is a function which take X and return the Jacobian matrix.
%   If the search fails an error message is displayed.
%   
%   [ZERO,NITER]= NEWTONSYS(F,...) returns the number of iterations NITER
%   required for computing ZERO.
%
%   [ZERO,NITER,INCR_V] = NEWTONSYS(F,...) returns a vector INCR_V with the
%   increments, i.e., the norm of the differences between successive approximations.
%
%   Update Davide Pradovera, 13-03-2018

xold = x0;
niter = 0; 
incr = tol+1;

try
    incr_v = NaN(1, nmax); % preallocating memory for incr_v, which stores how much we move from one guess to the next one
catch
    error('Value of NMAX too large: increment vector does not fit in memory.');
end

while incr > tol && niter < nmax

    niter = niter + 1;
    xnew = xold - J(xold) \ F(xold);
    incr = norm(xnew-xold);
    xold = xnew;
    
    incr_v(niter) = incr;
end

incr_v = incr_v(1:niter); % strip NaNs from increment vector

if niter >= nmax && incr > tol
    fprintf(['Newton stopped without converging to the desired tolerance '...
             'because the maximum number of iterations was reached\n']);
end

zero=xnew;

return;
