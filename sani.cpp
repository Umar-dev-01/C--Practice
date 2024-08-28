//                                                 "for loop"
#include <iostream>
#include <iomanip>
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
    int i=0;
    for(int i = 0; i < 40; i++)
    {
    if(i==1){
    continue;
    }
    cout<<i<<endl;  
    }                                                                           
return 0;
}