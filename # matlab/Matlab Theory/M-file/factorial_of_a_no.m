%find factorial of a number inputted by user
choice="Y";
while(choice~="N")
    n= input("Enter a number:");
    fact_n=1
    X=zeros(1,n);
    for i=1:n
        fact_n=fact_n*i;
        X(i)=fact_n
    end
    disp("Factorial is")
    disp(fact_n)
   c=input("do you want to find factorial for another no? (Y/N)","s");
   choice=upper(c)
end


