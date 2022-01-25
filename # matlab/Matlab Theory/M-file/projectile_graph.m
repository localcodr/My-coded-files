%write a project to plot projectile garph input will be velocity and angle
%of projection with horizontal.

velocity =input("Enter the velocity : ")
thetad = input("Enter th angle");
theta = thetad*pi/180;
T = 2*velocity*sin(theta)/9.8;
R = velocity*cos(theta)*T;
H = ((velocity*sin(theta))^2)/9.8;
