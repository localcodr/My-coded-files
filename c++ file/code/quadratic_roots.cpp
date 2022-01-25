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