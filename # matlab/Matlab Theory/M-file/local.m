% write a code to find electricity bill
% conditions :-
% (a) for 100 units  --  2.5/unit
% (b) for next 200   --  3/unit
% (c) beyond 300     --  4/unit
% (d) minimum charged Rs 200.
% (e) for bil>Rs 500 there shoul be additional charge of 15 percent of that
%     bill.

unit=input("Enter the number of units used : ");
if(unit<=80)
    disp("The total amount you have to pay is Rs " + 200)
    % test for 68 units it give Rs 200 (correct)
elseif(unit<=100)
    bill=unit*2.5;
    disp("The total amount you have to pay is Rs " + bill)
    % test for 96 units it give Rs 240 (correct)
elseif(unit<=183)
    bill=100*2.5 + (unit-100)*3;
    disp("The total amount you have to pay is Rs " + bill)
    % test for 150 units it give Rs 400 (correct)
elseif(unit<=300)
    bill = 100*2.5 + (unit-100)*3;
    extra = bill + ((bill*15)/100);
    disp("The total amount you have to pay is Rs " + extra)
    % test for 184 units it give Rs 577.3 (correct)
elseif(unit>300)
    bill = unit*4;
    nbill = round(bill);
    extra = nbill + ((nbill*15)/100);
    disp("The total amount you have to pay is Rs " + extra)
    % test for 400 units it give Rs 1804 (correct)
else
    disp("You don't have electricity so you don't have to pay bill.")
end

    