-4:0.1:4
% a typical pie chart
x= rand(1,5)*1000;
y=["Entertainment","Food","Transportation","Health","stationary"];
pie(x,y)
figure
z=[0,1,0,0,0];
pie(x,z,y)
