x = 1:10;
y=randn(size(x));
z = x.^2;
subplot(2,2,1)
plot(x,y);
subplot(2,2,2)
plot(x,z);
subplot(2,2,3)
plot(y,z);