% write a program to disp sine of an angle (in degrees)
% entered by user using the  following series
% sin(X) = x- x^3/3! +x^5/5!
% prompt the user to enter no of terms to evaluuate.
% disp the percentage errorinvolved between the value estimated and as
% calculated using standard sine function.

theta_in_deg= input ("enter theta in degrees: "),
theta_in_rad= deg2rad(theta_in_deg);
no_terms= input ("Enter no of terms to evaluate(grater than 2):");
sin_of_theta_r=theta_in_rad;
fact_no=1;
for i=1:1:(no_terms-1)
  fact_no=fact_no*(2*i)*((2*i)+1);
    sin_of_theta_r= sin_of_theta_r+((-1)^i)*(theta_in_rad^((2*i)+1))/fact_no;
    X(i)=sin_of_theta_r;
    Fact(i)=fact_no;

end
disp(sin_of_theta_r)
disp(X)

