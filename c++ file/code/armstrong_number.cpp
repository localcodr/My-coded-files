/* Armstrong number is a number in which the sum of cube of indivisual number is 
equal to the original number 
e.g. 153 is an armstrong number 
    1^3 = 3
    5^3 = 125
    3^3 = 27
    3 + 125 + 27 = 153
    */


   #include<iostream>
   #include<cmath>
   using namespace std;
   int main(){
        int n;
        cout<<"Enter the number : ";
        cin>>n;

        int sum = 0;

        int original = n;

        while(n>0){
int lastdigit= n%10;
// sum+=(lastdigit*lastdigit*lastdigit);
//sum += pow(lastdigit,3);    // This pow is a float function so it will give an error as it will submit 
                           // 152.99999 instead of 153. So use [    round(pow(lastdigit,3))  ]

sum += round(pow(lastdigit,3));
n=n/10;
        }
    
    if(sum==original){
        cout<<"Armstrong number"<<endl;

    } else {
        cout<<"Not  a Armstrong number"<<endl;
    }
   return 0;
   }                    