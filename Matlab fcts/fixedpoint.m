function [x_seq, res, niter] = fixedpoint(phi, x0, tol, nmax)

% FIXEDPOINT Fixed point iterations.
%   X_SEQ = FIXEDPOINT( PHI, X0, TOL, NMAX ) tries to find the fixed point of the 
%   continuous and differentiable function PHI using fixed point iterations 
%   starting from X0. PHI accepts real scalar input x and returns a real
%   scalar value. 
%   The search continues while RES^(k) = | X^(k) - PHI( X^(k) ) | > TOL and NITER <= NMAX.
%   If the search fails a message is displayed.
%   
%   X_SEQ is a vector containing the successive values of the fixed point iterations.
%
%   [X_SEQ, RES, NITER] = FIXEDPOINT(PHI,...) returns the value of the residual 
%   RES^(k) = | X^(k) - PHI( X^(k) ) | at each iteration and the number of iterations performed.
%
%   (update Davide Pradovera, 13-03-2018)

niter = 0; 
xt = phi( x0 );

try
    x_seq = NaN(1, nmax + 1); % preallocating memory for x_seq
    res = NaN(1, nmax + 1); % preallocating memory for res
catch
    error('Value of NMAX too large: x_seq and residual vectors do not fit in memory.');
end

x_seq(1) = x0;
res(1) = abs( x0 - xt );

while abs( res( niter + 1 ) ) > tol && niter < nmax
   niter = niter + 1;
   x_seq(niter + 1) = xt;
   x0 = xt;
   xt = phi(xt);
   res(niter + 1) = abs( x0 - xt );
end

if niter >= nmax && abs( res( nmax + 1 ) ) > tol
    fprintf(['Fixedpoint stopped without converging to the desired tolerance ',...
             'because the maximum number of iterations was reached.\n']);
end

x_seq = x_seq(1:niter+1); % strip NaNs
res = res(1:niter+1);     % strip NaNs

return;
