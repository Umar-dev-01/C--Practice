/*1️⃣ Find the Sum of Two Numbers
Write a function named addNumbers that takes two integers as arguments and returns their sum.
📌 Example Input: addNumbers(5, 3)
📌 Expected Output: 8

#include<iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b; 
}
int main() {
    int a = 3, b = 4;
    cout << addNumbers (a , b); 
}
Write a function named multiplyNumbers that takes two integers as arguments and returns their product.
#include<iostream>
using namespace std;

int multiplyNumbers(int a, int b){
    return a*b;
}
int main(){
    int result=multiplyNumbers(2,8);
    cout<<"Multiplaiy "<<result;
}
Write a function named divideNumbers that takes two integers as arguments and returns their quotient.
#include<iostream>
using namespace std;
int divideNumbers(int a,int b){

    return a/b;
}
int main(){
    cout<<divideNumbers(2,3);
}

2️⃣ Check if a Number is Even or Odd
Write a function named isEven that takes an integer as an argument and returns true 
if the number is even, otherwise returns false.
📌 Example Input: isEven(4)
📌 Expected Output: true
📌 Example Input: isEven(7)
📌 Expected Output: false
#include<iostream>
using namespace std;

int isEven(int num){
    return (num%2==0);
}
int main(){
    int userNumber;
    cout<<"enter your number ";
cin>>userNumber;
if(isEven(userNumber)){
    cout<<"even";
}else{
    cout<<"number is odd";
}
}
Real-Life Example: Check if a Vehicle Has an Even or Odd Number Plate
Many cities implement odd-even vehicle rules to control traffic. A vehicle is allowed on the 
road based on whether its number plate ends in an even or odd digit.

Here’s a C++ program that takes a vehicle number and checks if it's allowed on even days 
(if even) or odd days (if odd).

#include <iostream>
using namespace std;

int isEven(int vehicleNumber){
    return (vehicleNumber%2==0);
}
int main(){
    int vehicleNumber;
    cout<<"Enter the last digit of your vehicle number ";
    cin>>vehicleNumber;
    if (isEven(vehicleNumber)){
        cout<<"You can drive on even days";
    }else{
        cout<<"You can drive on odd days";
    }}


    3️⃣ Print a Greeting Message
Write a function named greetUser that takes a string (name) as an argument and prints "Hello, <name>!".
📌 Example Input: greetUser("Alice")
📌 Expected Output: Hello, Alice!
Let me know if you need more! 🚀

                             //with return
#include <iostream>
using namespace std;

string greetUser(string name){
    return "Hello "+name+"!";
}
int main(){
    string result=greetUser("sani");
    cout<<result;/
}*/
                              //with void

#include<iostream>
using namespace std;

void greetUser(string name){
    cout<<"Hello "<<name<<" !";
}
int main(){
    greetUser("nino");
}