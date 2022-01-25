% Check marks vs grade of student.
marks=input("Enter the marks : ");
if(marks>=85)
    disp("Grade A");
elseif(marks>=70)
    disp("Grade B")
elseif(marks>=55)
    disp("Grade C")
elseif(marks>=40)
    disp("Grade D")
else
    disp("Grade F")
    disp("You have to take course again.")
end