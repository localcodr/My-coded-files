// Write a program to write ' hello world'.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     cout<<"Hello, World!"<<endl;
 
return 0;
}


//Write a program to print number entered by  user.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number : ";
     cin>>n;

     cout<<"The number entered by user is : "<<n;
 
return 0;
}


//Write a program to add tw integer enterd by user.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int num1, num2;
     cin>>num1>>num2;
     int sum = num1+num2;
     cout<<"The sum is : "<<sum<<endl;

 
return 0;
}


//Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor anddividend should be integers.)

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int num1, num2;
     cout<<"Enter the divisor : ";
     cin>>num1;
     cout<<"Enter the dividend : ";
     cin>>num2;

     int reminder, quotient;

     reminder = num1%num2;
     quotient = num1/num2;

     cout<<"The reminder is : "<<reminder<<endl;
     cout<<"The quotient is : "<<quotient<<endl;
 
return 0;
}


//Write a Program to Find Size of int, float, double and charin your computer

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     cout<<"The size of int is : "<<sizeof(int)<<endl;
     cout<<"The size of char is : "<<sizeof(char)<<endl;
     cout<<"The size of float is : "<<sizeof(float)<<endl;
     cout<<"The size of double is : "<<sizeof(double)<<endl;
 
return 0;
}


//Write a Program to Swap Two Numbers entered by user.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int s1, s2;
     cout<<"Enter the two number : ";
     cin>>s1>>s2;

     cout<<"The numbers before swapping are : "<<s1<<", "<<s2<<endl;

     int local = s1;
     s1 = s2;
     s2 = local;
     cout<<" The numbers after swaping are : "<<s1<<", "<<s2;
 
return 0;
}


//Write a Program to Find ASCII Value of a Character

#include<iostream>
//#include<cmath>
using namespace std;
int main(){

    char s2;
    cin>>s2;

     cout<<"The ASCII value of the character is : "<<int(s2)<<endl;
 
return 0;
}


//Write a Program to Multiply two decimal Numbersentered by User

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     float num1, num2;
     cout<<"Enter the two numbers : ";
     cin>>num1>>num2;

     float mult = num1*num2;
     cout<<"The result is : "<<mult;

 
return 0;
}


//Write a Program to Check Whether Number is Even orOdd

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cout<<"Enter the  number : ";
     cin>>n;
     if(n%2==0){
         cout<<"Even";
     } else cout<<"Odd";
 
return 0;
}


//Write a Program to Check Whether a Character isVowel or Consonant.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     char s;
     cout<<"Enter the character : ";
     cin>>s;

     if(s=='A' || s=='a' || s=='E' || s=='I' || s=='O' || s=='U' || s=='i' || s=='o' || s=='u'){
         cout<<"Vowel";

     } else cout<<"Consonant";

 
return 0;
}


// Write a Program to Find Largest Number Among ThreeNumbers entered by users

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int a, b, c;
     cout<<"Enter the numbers : ";
     cin>>a>>b>>c;

     if(a>b){
         if(a>c){
             cout<<"The Greatest number is : "<<a<<endl;
         } else cout<<"The Greatest number is : "<<c<<endl;
     }else{
         if(b>c){
             cout<<"The Greatest number is : "<<b<<endl;
         } else cout<<"The Greatest number is : "<<c<<endl;
     }
 
return 0;
}


//Write a Program which accepts coefficients of aquadratic equation from the user and displays the roots(both real and complex roots depending upon thediscriminant).

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a, b, c, D, x1, x2, realpart, imagpart;
    cout<<"Enter the cofficient : ";

    cin>>a>>b>>c;
    D = (b*b)-(4*a*c);
    if(D>0){

        x1 = (-b + (sqrt(D)))/(2*a);
        x2 = (-b - (sqrt(D)))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"One root is : "<<x1<<endl;
        cout<<"Other root is : "<<x2<<endl;
        } else{
            if(D==0){
                x1= -b/(2*a);
                cout<<"Roots are real and equal"<<endl;
                cout<<"One root is : "<<x1<<endl;
                cout<<"Other root is : "<<x1<<endl;
            } else {
                cout<<"Roots are imagnary"<<endl;
                realpart = -b/(2*a);
                imagpart = sqrt(D)/(2*a);
                cout<<"One root is : "<<realpart<<"+"<<imagpart<<endl;
                cout<<"Other root is : "<<realpart<<"-"<<imagpart<<endl;
        
            }
        }
    return 0;
}


//Write a Program to Check whether a year entered byuser is Leap Year or not.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int year;
     cout<<"Enter the Year";
     cin>>year;

     if(year%4==0){
         cout<<"LEAP YEAR";

     }else cout<<"Not-LEAP YEAR";
 
return 0;
}


//Write a Program to Calculate Sum of first N NaturalNumbers (here value of N is Entered by user)

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     int sum = 0;
     for(int i=0; i<=n; i++){
          sum =sum+ i;
     }
     cout<<sum;
 
return 0;
}


//Write a Program to Find Factorial of a given number N(N is entered by user)

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     int fact =1;

     for(int i=1; i<=n; i++){
         fact *=i;
     }
 cout<<fact;
return 0;
}


//Write a Program to Generate Multiplication Table of anumber (entered by the user) using a for loop.

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     int mult =1;
     for(int i=1; 1<=10; i++){
        
         cout<<n<<"*"<<i<<"="<<n*i<<endl;
     }
 
return 0;
}


//Write a Program to Display Fibonacci Series upto nthterm (n is entered by user)

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     int t1=0;
     int t2=1;
     int nextTerm =0;

     for(int i=1; i<=n; i++){
         cout<<t1<<endl;
         nextTerm = t1+t2;
         t1 =t2;
         t2 = nextTerm;

     }
 cout<<nextTerm<<endl;
return 0;
}


//Write a Program to Display Fibonacci Series uptocertain number n (n is entered by user)
//Example: n=100
// Output:
// Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;
     int t1=0;
     int t2= 1;
     int nextterm =0;
    //  cout<<t1<<endl;
    //  cout<<t2<<endl;
while(nextterm<=n){
    cout<<nextterm<<endl;
    t1= t2;
    t2 = nextterm;
    nextterm = t1+t2;
}
 
return 0;
}


//Write a Program to Find GCD or HCF of two numbersentered by user

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n1, n2, hcf;
     cin>>n1>>n2;

     if(n2>n1){
         int temp = n2;
         n2 = n1;
         n1 = temp;
     }
     for(int i=1; i<=n2; i++){
         if(n1%i==0 && n2%i==0){
             hcf =i;
         }
     }
  cout<<"HCF is : "<<hcf;
return 0;
}


//Write a Program to Find LCM of two numbers enteredby user

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n1, n2, max;
     cin>>n1>>n2;

     max = (n1, n2) ? n1:n2;
     do{
         if(max%n1==0 && max%n2==0){      //The LCM of two numbers is given by:
                                            //            LCM = (n1 * n2) / HCF
                                        // So we can calculate LCM by calculating HCF (above question)
             cout<<"LCM : "<<max;
             break;
         }
         else
         ++max;
     } while(true);
 
return 0;
}


//Write a Program to Reverse a given Number N by user

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n, reversed =0, num;
     cin>>n;

     while(n>0){
         num = n%10;
         reversed = reversed*10 + num;
         n/=10;
     }
     cout<<reversed;
 
return 0;
}


//Write a Program to display sum of all digits of a givenNumber N by user

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n, reversed =0, num;
     cin>>n;

     while(n>0){
         num = n%10;
         reversed = reversed + num;
         n/=10;
     }
     cout<<reversed;
 
return 0;
}


// Write a Program to Calculate Power of a Number
// using inbuilt pow() function by taking two inputs from
// users as Base and exponent respectively

#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int base, exponent, result ;
     cout<<"Enter the Base : ";
     cin>>base;
     cout<<"Enter the exponent : ";
     cin>>exponent;

     result = pow(base, exponent);

     cout<<result;


 
return 0;
}


//Write a Program to Calculate Power of a Numberwithout using inbuilt pow() function by taking two
// inputs from users as Base and exponent respectively

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int base, exponent, result=1 ;
     cout<<"Enter the Base : ";
     cin>>base;
     cout<<"Enter the exponent : ";
     cin>>exponent;

    while(exponent>0){
        result*=base;
        --exponent;
    }
    cout<<result;
 
return 0;
}


//Write a Program to Check Whether a Number Nentered by user is Palindrome or Not

#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n, mohan;
     cout<<"Enter the number : ";
     cin>>n;

     int reverse =0;

     while(n>0){
         mohan = n%10;
         reverse = reverse*10 + mohan;
         n/=10;

     }
     cout<<"The reversed number is : "<<reverse<<endl;

     if(n==reverse){
         cout<<"The number is Palindrome. ";
     } else cout<<"The number is not-Palindrome.";

 
return 0;
}
