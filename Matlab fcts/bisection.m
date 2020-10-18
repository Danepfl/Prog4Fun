function [zero, res, niter, inc, err] = bisection(fun, a, b, tol, nmax)

%BISECTION Find function zeros.
%   ZERO=BISECTION(FUN,A,B,TOL,NMAX) tries to find a zero ZERO of the continuous 
%   function FUN in the interval [A,B] using the bisection method. FUN is defined as a @-function (or a .m function), 
%   accepts real scalar input x and returns a real scalar value. If the search fails 
%   an error message is displayed. 
%
%   [ZERO,RES,NITER]= BISECTION(FUN,...) returns the value of the residual in ZERO
%   and the iteration number at which ZERO was computed.
%
%   [ZERO,RES,NITER,INC]= BISECTION(FUN,...) returns a vector INC with the absolute value of the
%   differences between successive approximations (increments).
%
%   Lorenzo Tamellini, 20-09-2013 (update 25-09-2015, DG) (update Davide Pradovera, 13-03-2018)

fa = fun(a);
fb = fun(b);

% check that we can apply bisection, and that the a,b are not the zero we
% are looking for
if fa*fb>0
    error('The sign of FUN at the extrema of the interval must be different.');
elseif fa == 0
    zero = a; res = 0; niter = 0;
    return
elseif fb == 0
    zero = b; res = 0; niter = 0;
    return
end 

% initialize loop variables
niter = 0; 
I = (b - a)/2; % this is the interval semilenght, i.e. the error estimate
m = (a + b)/2; % this is the guess for the zero

try
    inc = NaN(1, nmax); % preallocating memory for inc, which stores how much we move from one guess to the next one
catch
    error('Value of NMAX too large: increment vector does not fit in memory.');
end


while I > tol && niter < nmax
    niter = niter + 1;
    m_old = m;   % this will store the old guess (needed to compute increments)
    fm = fun(m);
    
    if fa*fm < 0 % the zero is between a and m => swap b with m
        b = m;
        fb = fm;
        I = (b-a)/2;
        m = (a+b)/2;

    elseif fm*fb < 0 % the zero is between m and b => swap a with m
        a = m;
        fa = fm;
        I = (b-a)/2;
        m = (a+b)/2;

    else % fm==0 => no need to update m
        I = 0;
        
    end
    
    % compute the increment, i.e. how much we moved from the previous guess
    % m_old
    inc(niter) = abs( m - m_old );
end

if niter >= nmax  && I > tol
    fprintf(['Bisection stopped without converging to the desired tolerance ',...
             'because the maximum number of iterations was reached.\n']);
end

zero = m;
res = abs(fun(m));
inc = inc(1:niter); % strip NaNs from increment vector
err = I;

return;
