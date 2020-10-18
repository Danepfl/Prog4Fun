function [zero, niter, incr_v]=newton(f, df, x0, tol, nmax)
%NEWTON Find function zeros.
%   ZERO=NEWTON(FUN,DFUN,X0,TOL,NMAX) tries to find the zero ZERO of the 
%   continuous and differentiable function FUN nearest to X0 using the Newton 
%   method. FUN and its derivative DFUN are @-functions or .m functions, 
%   accept real scalar input x and return a real scalar value. 
%   If the search fails an errore message is displayed.
%
%   [ZERO,NITER]= NEWTON(FUN,...) returns the number of iterations performed.
%
%   [ZERO,NITER,INCR_V]= NEWTON(FUN,...) returns a vector INCR_V with the
%   increments, i.e., the differences between successive approximations
%
%   Update Davide Pradovera, 13-03-2018

xold = x0;
incr  = tol+1;
niter = 0;

try
    incr_v = NaN(1, nmax); % preallocating memory for incr_v, which stores how much we move from one guess to the next one
catch
    error('Value of NMAX too large: increment vector does not fit in memory.');
end

while incr > tol && niter < nmax
    
    niter = niter + 1;
    xnew = xold - f(xold) / df(xold);
    incr = abs(xnew-xold);
    xold = xnew;
    
    incr_v(niter) = incr;
end

incr_v = incr_v(1:niter); % strip NaNs from increment vector

if niter >= nmax && incr > tol
    fprintf(['Newton stopped without converging to the desired tolerance '...
             'because the maximum number of iterations was reached.\n']);
end

zero=xnew;

return;
