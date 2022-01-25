#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a\n");
    // scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d %d", &a, &b);

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    return 0;
}



#include<stdio.h>
int main(){
    int a = 4;
    int b = 3;
    printf("The area of rectangle havin side a & b = %d", a*b);
    return 0;
}




#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the lenght of Rectangle :");
    scanf("%d", &a);
    printf("Enter the breath of Rectangle :");
    scanf("%d", &b);

    printf("The area of rectangle havin side a & b = %d", a*b);
    
}



#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the Radius :");
    scanf("%d", &a);
    printf("Enter the height of cyclinder :");
    scanf("%d", &b);

    printf("The area of circle    = %f", 2*3.14*a*b);    
}







#include<stdio.h>
int main(){

    float celsitemp;
   printf("Enter the temparature in celsius :");
   scanf("%f", &celsitemp);

   printf("The value in farenhiet is : %f", (celsitemp*1.8)+32);
}




#include<stdio.h>
int main(){
    float principal, rate, time;
    printf("Enter the value of principal : ");
    scanf("%f", &principal);
    printf("Enter the value of rate : ");
    scanf("%f", &rate);
    printf("Enter the value of time : ");
    scanf("%f", &time);

    printf("The simple interest is : %f", (principal*rate*time));
return 0;
}






