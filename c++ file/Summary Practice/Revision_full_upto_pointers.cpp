// To Print hello world
// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Hello, World!"<<endl;
//     return 0;
// }

// // Variable Scope in practical 
// #include<iostream>
// //#include<cmath>
// int a = 7879;
// using namespace std;
// int main(){
//     int a= 8;
//     cout<<::a; 
    
//     cout<<a<<endl;

//     return 0;
// }

// // Adding two numbers
// #include<iostream>
// //#include<cmath>
// using namespace std;
// int main(){
//      int num1,num2;
//      cin>>num1>>num2;
//      int sum;
//      cout<<num1+num2;
     

//     return 0;
// }


// // making constant variable
// #include<iostream>
// //#include<cmath>
// using namespace std;
// int main(){
//      const int a=67;
//      cout<<a<<endl;
//     // a = 88;
//      cout<<a<<endl;

//     return 0;
// }


// // switch case statement
// #include<iostream>
// //#include<cmath>
// using namespace std;
// int main(){
//      int num;
//      cout<<"Tell me your age:"<<endl;
//      cin>>num;

//      switch(num)
// {
//      case 1:
//      cout<<"one"<<endl;
//     break;

//      case 2:
//      cout<<"TWO"<<endl;
//      break;

//      case 3:
//      cout<<"three"<<endl;
//      break;

//      case 4:
//      cout<<"four"<<endl;
//      break;

//      case 5:
//      cout<<"five"<<endl;
//      break;

//      case 6:
//      cout<<"six"<<endl;
//      break;

//      case 7:
//      cout<<"seven"<<endl;
//      break;

//      case 8:
//      cout<<"eight"<<endl;
//      break;

//      default:
//      cout<<"greater than or equal to 9"<<endl;
//      break;
// }

//     return 0;
// }


// //  To make while loop
// //  Syntax of the for loop

// for(int i ; i<=n ; i++){
// //  cod eof the body
//    cout<<i<<endl;
// }
// 
// Printing the table 
#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int n;
     cout<<"The number you want to enter is :   ";
     cin>>n;
      for(int i=1; i<=10; i++ ){
          //  cout<<i<<endl;
          // cout<<"The Table of the number "<<n<<"is"<<endl;
            cout<<n<<"*"<<i<<"="<<n*i<<endl;

      }

    return 0;
}




