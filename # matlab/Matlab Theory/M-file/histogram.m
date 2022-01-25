marks=round(rand(1,50),2)*50;
hist(marks,7)
title('Marks Distribution')
xlabel('marks range')
ylabel('no of student')
hold on
[n,X] = hist(marks,7)
plot(X,n)
hold off