/*Use a while loop to calculate the sum of numbers from 1 to 100./
#include<iostream>
using namespace std;
int main(){
    int a=1, sum;
    while(a<=100){
        sum+=a;
        a++;
    }
    cout<<sum;
}






Write a program that keeps taking user input until they enter a negative number.
#include<iostream>
using namespace std;
int main(){
int num, i;
cout<<"enter the number";
cin>>num;
while(num>0){
    cout<<"wt enteri pao potr g";
    cin>>num;
}
cout<<"na bcha g na";
}





Implement a while loop to print all odd numbers from 1 to 15.
#include<iostream>
using namespace std;
int main(){
    int num=-1;
    while(num<=15){
        num=num+=2;
      cout<<num<<" ";
    }

}



Use a while loop to find the factorial of a given number.
#include<iostream>
using namespace std;
int main(){
int num,  fact=1;
cout<<"enter your num"<<endl;
cin>>num;
while(num>0){
    fact= fact*num;
   num--;
}
cout<<fact;
}



Write a C++ program that asks for a password and keeps asking 
until the correct password is entered.
#include<iostream>
using namespace std;
int main(){
int password= 6969, user_password;
cout<<"enter your password"<<endl;
cin>>user_password;
while(password!=user_password){
    cout<<"try agian chitia 2bara enteri mar aby an"<<endl;
    cin>>user_password;
}
cout<<"Chal potr choti mar";
}



Create a while loop that prints the first 5 multiples of 3..
#include<iostream>
using namespace std;
int main(){
int a=3, i=1;
while (i<=5)
{
  cout<<i*a<<" ";
  i++;
}
}


Write a C++ program using a while loop to print numbers from 10 to 1.
#include<iostream>
using namespace std;
int main(){
int num=1, a=10;
while(a>=num){
    cout<<a<<endl;
    a--;
}
}



#include<iostream>
using namespace std;
int main(){
char stud_replay, stdenQues_entery='y';
cout<<"kl mama ko sath ly k ana wrna class mn nae bethny don ga lao gy ya nae (y/n)"<<endl;
cin>>stud_replay;
while(stud_replay!=stdenQues_entery){
    cout<<"keon nae lao gy mn ny bola mama ko ly k ana hy. lao gy ya nae (y/n)"<<endl;
    cin>>stud_replay;
}
cout<<"Good beta g abi class mn beth skty ho";
}





Counting to N: Take a number N as input and print numbers from 1 to N using a while loop
#include<iostream>
using namespace std;
int main(){
    int N, a=1;
    cout<<"enter your number"<<endl;;
    cin>>N;
    while(N>=a){
        cout<<a<<" ";
        a++;
    }}



    Even Numbers Printer: Print all even numbers between 1 and 50 using a while loop./
    #include<iostream>
    using namespace std;
    int main(){
int num=2;
while(num<=50){
    cout<<num<<" ";
    num+=2;
}
    }



Sum of First N Natural Numbers: Take N as input and find the sum of the first
 N natural numbers using a while loop. 
    #include<iostream>
    using namespace std;
    int main(){
int i, sum;
cout<<"enter your number"<<endl;
cin>>i;
while (i!=0)
{
   sum=sum+=i;
   i--;
}
cout<<sum<<endl;
    }



Multiplication Table: Take a number as input and print its multiplication table
 up to 10 using a while loop. 
 #include<iostream>
 using namespace std;
 int main(){
    int a, i=1;
    cout<<"enter the number who u want print  multiplication table"<<endl;
    cin>>a;
while (i<=10)
{
    cout<<a*i<<endl;
    i++;
}}



Reverse Countdown: Take a positive number as input and print a countdown from that
 number to 0 using a while loop.*/
 #include<iostream>
 using namespace std;
 int main(){
    int num;
    cout<<"enter uor number"<<endl;
    cin>>num;
    while(num>0){
        cout<<num<<endl;
        num--;
    }
 }
























