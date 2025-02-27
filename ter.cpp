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


Write a C++ program using a while loop to print numbers from 10 to 1.*/
#include<iostream>
using namespace std;
int main(){
int num=1, a=10;
while(a>=num){
    cout<<a<<endl;
    a--;
}
}



