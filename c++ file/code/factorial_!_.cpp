#include<iostream>
//#include<cmath>
using namespace std;

int 
fac(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++){
        factorial*= i;
    }
    return factorial;
}
int main(){
     int n; 
     cin>>n;
     int fact = fac(n);

     cout<<fact;
 
return 0;
}