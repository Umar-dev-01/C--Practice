//                                                      "for loop"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
   /* for (int i=1; i<=40; i++)
   {
   cout<<i<<endl;  
   }*/   

    //                                                "break & if statment"  
    /*int i=0; 
    for(int i = 0; i < 40; i++)
    {
    if(i==25){
    break;
    }
    cout<<i<<endl;
    }   */

    //                                                    "continue statment"
    /*int i=0;
    for(int i = 0; i < 40; i++)
    {
    if(i==1){
    continue;
    }
    cout<<i<<endl;  
    } */       

   //                                                      "address of operator"
   /*int a= 5;
   int* b = & a;
cout<<"the address of a is" <<&a<<endl;
cout<<"the address of b is" <<b<<endl;*/

//                                                             "value operator"
/*int a= 5;
   int* b = & a;
cout<<"the address of a is" <<&a<<endl;
cout<<"the address of b is" <<b<<endl;
// value operator
cout<<"the value od address b is"<<*b<<endl;*/

//                                                                "array "
//array example
/*int marks[] ={41,85,7,41};

int mathMarks[4];
mathMarks[0]=58;
mathMarks[1]=487;
mathMarks[2]=265;
mathMarks[3]=54;
cout<<"these are math marks"<<endl;

cout<<mathMarks[0]<<endl;
cout<<mathMarks[1]<<endl;
cout<<mathMarks[2]<<endl;
cout<<mathMarks[3]<<endl;*/

//        you can change the value of array
/*marks[2]=445;
cout<<"these are math marks"<<endl;
cout<<mathMarks[0]<<endl;
cout<<mathMarks[1]<<endl;
cout<<mathMarks[2]<<endl;
cout<<mathMarks[3]<<endl;*/
//                                          convert to for loop
/*for (int i=0; i<4; i++)
{
   cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
}*/





                //"how ton convert for loop to while loop & do while loop"







//                                              "pointers and arrays"
int i=0;
int marks[] ={41,85,7,41};
for (int i=0; i<4; i++)
{
   cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
}
int* p = marks;
cout<<"the value of *p is "<<p<<endl;
cout<<"the value of *(p+1) is "<<(p+1)<<endl;
cout<<"the value of *(p+2) is "<<(p+2)<<endl;
cout<<"the value of *(p+3) is "<<(p+3)<<endl;

return 0;
}