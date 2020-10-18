clc; clear all; close all;
dbstop if error;
% Program example: Identifier batch trop de cellules (+ de 1000)
% Input: Cellnbr, Cellnames
% Output: CancerCellnames
Cellnbr=[300, 1200, 800, 1000, 1002, 8900, 100, 456]; % Batch 1-8, nombre de cellules
Cellnames=["BatchA", "BatchB", "BatchC", "BatchD", "BatchE", "BatchF", "BatchG", "BatchH"];

% First way

Isbigger=[]; % Empty boolean vector telling me if it is true or not
for i=1:length(A) % Defines a for loop of the size of the batches
	if Cellnbr(i) > 1000 % Executes if true, goes to else/goes onwards if false
		isitbigger=1;
	else % Executes if false
		isitbigger=0;
	end
	Isbigger=[Isbigger isitbigger]; % Add element at end of vector Isbigger
end
CancerCellnames=[];
for i=1:length(A)
	if Isbigger(i) == 1
		Name=Cellnames(i)
		CancerCellnames=[CancerCellnames Name];
	end
end

% Second way

CancerCellnames=[];
for i=1:length(A) % Defines a for loop of the size of the batches
	if Cellnbr(i) > 1000 % Executes if true, goes to else/goes onwards if false
		CancerCellnames=[CancerCellnames Cellnames(i)];
	end
end

% Third way

CancerCellnames=Cellnames(find(Cellnbr>1000));


