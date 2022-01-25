x = linspace(0,2*pi,50);
y = sin(x);
z = cos(x);
plot(x,y,'r-')
hold on;
plot(x,z,'bo')
hold off;