//                                                      "for loop"
#include <iostream>
//#include <iomanip>
//#include <math.h>
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
/*int i=0;
int marks[] ={41,85,7,41};
for (int i=0; i<4; i++)
{
   cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
}
int* p = marks;
cout<<"the value of *p is "<<p<<endl;
cout<<"the value of *(p+1) is "<<(p+1)<<endl;
cout<<"the value of *(p+2) is "<<(p+2)<<endl;
cout<<"the value of *(p+3) is "<<(p+3)<<endl;*/

//                                                 "structs"
/*struct employee
{
   int eId;
   char favchar;
   float salary;
};
int main (){
struct employee umar;
umar.eId = 1;
umar.favchar= 's';
umar.salary=2500000;
cout<<"the value is "<<umar.eId<<endl;
cout<<"the value is "<<umar.favchar<<endl;
cout<<"the value is "<<umar.salary<<endl;*/

//                                                 "functions"
/*int sum (int a, int b) {
int c =a+b;
return c;
}
int main(){
int num1, num2;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter num 2"<<endl;
cin>>num2;
cout<<"total num of sum "<<sum(num1,num2);
return 0;
}







#include <iostream> 
Using namespace std;  
int main() {    
    double num1=40, num2=30;     
    char operation;  
        cout << "Result: " << num1 + num2 << endl;         
        cout << "Result: " << num1 - num2 << endl;        
         num1++;         cout << "Result: " << num1 * num1 << endl;         
         cout << "Result: " << num1 / num2 << endl;        
          num2--;         
          cout << "Value of num1 and num2 is”<<num1<<” - ”<< num2 << endl;  
}  
                "Output"   
                Result:70
                Result:10
                Result:1230
                Result:1 
                Value of num1 and num2 is 41-29




                • Ahmad=’Y’ 
                • Pool= “24 foot deep” 
                • isLoggedin= true 
                • Salary= 25928.93 
                • milesCovered= 23.9040225209489320942393423948239823 
                • lightYears= 939,429,203,292 
                • Temperature= -27.234 
                                     "result"
  char Ahmad=’Y’ 
string Pool= “24 foot deep” 
  bool isLoggedin= true 
   float Salary= 25928.93  
  double milesCovered= 23.9040225209489320942393423948239823 
  long lightYears= 939,429,203,292 
   float Temperature= -27.234 


 How do you output “Hello World!” on the screen. Also write a comment in the same program as
  “If I don’t get it, I will learn it again and again, unit I don’t get it” 
                                       "code"
 {
 //If I don’t get it, I will learn it again and again, unit I don’t get it
 cout<<"hello world";
  }


#include <iostream> Using namespace std; int main() {    
   int num = 82;    
    if (num % 7 == 0) {         
    cout << num << " is okay." << endl;     
  } else {        
   cout << num << " is not okay." << endl
   }
   }
                                         "out put"
   82 is not okay.







   Q no 2: Write a program where a program allows the user to input a decimal number and the program 
   prints out that number
                                                "code"
{
int a;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"Ans = "<<a;
    }
                                "output
enter the value of a
1.05
Ans = 1*/
cout<<"k hal a";
return 0;
}