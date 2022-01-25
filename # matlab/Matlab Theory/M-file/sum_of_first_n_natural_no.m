% sum of first n terms

no_terms= input("Enter a number to find sum of natural numbers starting from 1to n:")
sum=0;
for i=1:1:no_terms
    sum=sum+i;
    X(i)=sum;
end
disp (sum)
disp(X)
