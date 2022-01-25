#include<iostream>
//#include<cmath>
using namespace std;
int fac(int n){
    int factorial = 1;
    for(int i =2; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
     int n, r;
     cin>>n>>r;

     int nCr = fac(n)/(fac(r)*fac(n-r));
     cout<<"Resul is :"<<nCr;
 
return 0;
}