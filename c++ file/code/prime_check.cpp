// // 1st way to check prime  ::::
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//    int n;
//    cout<<"Enter the number : "  ;
//    cin>>n;

//    for(int i = 2; i<n; i++){
//        if(n%i==0){
//            cout<<"Non-Prime"<<endl;
//            break;
//        }else cout<<"Prime"<<endl;
//    }
 
// return 0;
// }


//2nd way to check prime :::::::::::::

#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int n;
     cin>>n;

     bool flag =0;

     for(int i=2; i<n; i++){
         if(n%i==0){
             cout<<"Non-Prime"<<endl;
             flag =1;
             break;

         }
     }
     if(flag==0){
         cout<<"Prime"<<endl;
     }
 
return 0;
}