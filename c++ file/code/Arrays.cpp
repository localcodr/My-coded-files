#include<iostream>
//#include<cmath>
using namespace std;
int main(){
     int mark[4]= {23, 63, 323, 434};
     cout<<mark[0]<<endl;
     cout<<mark[1]<<endl;
     mark[2]= 56428;
     cout<<mark[2]<<endl;
     cout<<mark[3]<<endl;
    //  cout<<mark[4]<<endl;

// Marks can also be printed using for loop

for(int i = 0; i<4; i++)
{
    cout<<mark[i]<<endl;
}





//   Pointer and ARRAYS


    return 0;
}




/*   Syntax   :::::::::
     marks [xyz] =    {a, b,c, d, ...........................}  
     it start from 0.
     like   mark[0]= a.
            mark[1]=b.
     */