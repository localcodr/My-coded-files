#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int a = 3;
     int* b=&a;

    //  int** c= &*b<<endl;
     int** c=&b;



    //  cout<<b<<endl;
    //  cout<<*b;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<&a<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;

//   cout<<&a;

    return 0;
}