% plot graphs of projectile

Vel = input("Enter velocity of projection in m/s: ");
theta_in_deg = input("Enter angle of projection in degrees:");

theta_in_rad=deg2rad(theta_in_deg);

time_of_flight=2*(Vel*sin(theta_in_rad)/9.8);
Horizontal_range=Vel*cos(theta_in_rad)*time_of_flight;
max_height = (Vel*sin(theta_in_rad)*time_of_flight/2) -9.8*(time_of_flight/2)^2/2;

time=0:.1:time_of_flight;
X_cordinates=Vel*cos(theta_in_rad)*time;
Y_cordinates=Vel*sin(theta_in_rad)*time-9.8*(time.^2)/2;
Vetocity_Y=Vel*sin(theta_in_rad)-9.8*time;
instatenious_velocity_magnitude=((Vel*cos(theta_in_rad))^2+Vetocity_Y.^2).^(1/2);
subplot(2,2,1)
plot(X_cordinates,Y_cordinates)
xlabel("X")
ylabel("Y")
title("Trajectory of projectile")
subplot(2,2,2)
plot(time,X_cordinates,"r",time,Y_cordinates,"b")
legend("X cordinates","Y coordinates")
subplot(2,2,3)
plot(time,Vetocity_Y,time,Vel*cos(theta_in_rad)*ones(size(time)))
xlabel("time")
gtext("Vertical component of velocity")
gtext("horizontal componentof velocity")
subplot(2,2,4)
plot(time,instatenious_velocity_magnitude)
title("Instantanious Velocity")
