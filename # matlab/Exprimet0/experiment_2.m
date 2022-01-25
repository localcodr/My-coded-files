% Ploting of ellipse
a=5;b=2*a;
t=0:2*pi/100:2*pi;
x=a*cos(t);
y=b*sin(t);
plot(x,y)
% area of ellipse
area= pi*a*b
% perimeter of ellipse
H=(a-b)^2/(a+b)^2;
s = pi*(a+b)*(1+ 3*H/(10+sqrt(4-3*H)))