/*Write a program to print numbers from 1 to n using a for loop
#include<iostream>
using namespace std;
int main(){
int a;
cout<<"entrer the number"<<endl;
cin>>a;
for (int i=1; i<=a; i++)
cout<<i<<endl;
}

Write a program to find the sum of the first n natural numbers using a for loop.
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter your num "<<endl;
cin>>n;
int sum;
for(int i=1; i<=n; i++){
    sum+=i;
}
cout<<sum;
}


Write a program to print the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main(){
    int a, mult;
    cout<<" enter your num"<<endl;
    cin>>a;
    for(int i=1; i<=10; i++){
        
       
cout<<a*i<<endl;
    }

}
Write a program to print all even numbers from 1 to n using a for loop.
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter yoiur num"<<endl;
    cin>>a;
    for (int i=2; i<=a; i+=2){
    cout<<i<<" ";
    }
}
Write a program to print all odd numbers from 1 to n using a for loop.
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter yoiur num"<<endl;
    cin>>a;
    for(int i=1; i<=a; i+=2){
        cout<<i<<" ";
    }
}
Write a program to print numbers from n to 1 in reverse order using a for loop.
#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter yoiur num"<<endl;
    cin>>a;
    for (int i=1; i<=a; a--)
    {
      cout<<a<<" ";
    }
}

Write a program to calculate the factorial of a given number using a for loop.
#include<iostream>
using namespace std;
int main (){
    int a, factorial=1;
    cout<<"enter yoiur num"<<endl;
    cin>>a;
for (int i = 1; i <=a; i++)
{
    factorial*=i;
}
cout<<factorial;
}

Write a program to find the sum of all even numbers from 1 to n using a for loop.
#include<iostream>
using namespace std;
int main (){
int a, sum=0;
    cout<<"enter your num"<<endl;
    cin>>a;
for(int i=2; i<=a; i+=2){
    sum+=i;
}
cout<<sum;
}
Write a program to print the multiplication table of a given number in reverse order using 
a for loop.
#include<iostream>
using namespace std;
int main (){
int x;
cout<<"enter the number"<<endl;
cin>>x;
for (int i=10; i>=1; i--){
cout<<x*i<<endl;
} 
}

Write a program to calculate the sum of first n natural numbers using a for loop.
#include<iostream>
using namespace std;
int main (){
int  a,sum;
cout<<"enter the number"<<endl;
cin>>a;
for (int i = 1; i<=a; i++)
{
   sum+=i;
}
       cout<<sum;
}
 Write a program to print all numbers from 1 to n using a for loop.
 #include<iostream>
 using namespace std;
 int main (){
 int  a,sum;
 cout<<"enter the number"<<endl;
 cin>>a;
 for (int i = 1; i<=a; i++){
    cout<<i<<" ";
 }
 }
A program that prints multiplication tables from 1 to 3.
 #include <iostream>
 using namespace std;
 
 int main() {
    for(int i=1; i<=3; i++){
        for(int j=1; j<=5; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }}
A program that takes a number as input and prints a square of stars with that size.
    #include <iostream>
    using namespace std;
    
    int main() {
     for (int i = 1; i <= 4; i++)
     {
        for (int j = 1; j <=4; j++)
        {
           cout<<" *";
        }
        cout<<endl;
     }}
A program that prints a right-angled triangle using stars.
     #include <iostream>
     using namespace std;
     
     int main() {
        for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++ ){
            cout<<"* ";
        }
        cout<<endl;
      }}
      
Print numbers from 1 to 100.          
#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=100; i++){
        cout<<i<<" ";
    }
}  
2️⃣ Print even numbers between 1 and 50. 
#include <iostream>
using namespace std;

int main() {
    for(int i=2; i<=50; i+=2){

        cout<<i<<" ";
    }
}
3️⃣ Calculate the sum of the first n natural numbers (input from user).
#include <iostream>
using namespace std;

int main(){
    int m, sum;
    cout<<"enter the number";
    cin>>m;
    for(int i=1; i<=m; i++){
        sum+=i;
    }
    cout<<sum;
}
4️⃣ Reverse count from n to 1 (user-defined n).
#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the number";
    cin>>m;
    for(int i=1; i<=m; m--){
cout<<m<<endl;
    }}
    5️⃣ Print the factorial of a given number.
 #include <iostream>
using namespace std;
    
int main(){
int m, fact=1;
 cout<<"enter the number";
 cin>>m;
for(int i=1; i<=m; m--){
    fact*=m;
}
cout<<fact;
}
6️⃣ Print a square pattern of stars (n x n).
#include <iostream>
using namespace std;
    
int main(){
    for (int i = 1; i <=4; i++)
    {
        for(int j=1; j<=4; j++){
            cout<<"* ";
        }
       cout<<endl;
    }
    
}
7️⃣ Print a right-angled triangle pattern./
#include <iostream>
using namespace std;
    
int main(){
    for (int i = 1; i <=5; i++)
    {
  for (int j = 1; j<=i; j++)
  {
  cout<<"* ";
  }
  cout<<endl;
    }   
}
8️⃣ Print an inverted right-angled triangle.
#include <iostream>
using namespace std;
    
int main(){
for(int i=5; i>=1; i--){
    for(int j=1; j<=i  ; j++){
        cout<<"* ";
    }cout<<endl;
}} 

9️⃣ Print a pyramid pattern of stars.*/
#include <iostream>
using namespace std;
    
int main(){

