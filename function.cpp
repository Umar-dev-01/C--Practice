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
}
                              //with void

#include<iostream>
using namespace std;

void greetUser(string name){
    cout<<"Hello "<<name<<" !";
}
int main(){
    greetUser("nino");
}

1️⃣ Find the Maximum of Two Numbers
Write a function named findMax that takes two integers as arguments and returns the larger number.
📌 Example Input: findMax(10, 20)
📌 Expected Output: 20/
#include<iostream>
using namespace std;

int findMax(int a, int b){
    if(a<b)
    return b;
    else 
    return a;
}
int main(){
cout<<findMax(1,31);
}
Here is a similar question for you to practice:  

**1️⃣ Find the Minimum of Two Numbers**  
Write a function named **findMin** that takes two integers as arguments and returns the smaller number.  
📌 **Example Input:** `findMin(15, 25)`  
📌 **Expected Output:** `15`
#include<iostream>
using namespace std;

int findMin(int a,int b, int c){
    if(a<b  && a<c)
    return a;
    else if (b<c)
    return b;
    else 
    return c;
}
int main(){
    cout<<findMin(111,54,41)<<endl;
}

1️⃣ Find the Average of Three Numbers
Write a function named findAverage that takes three integers as arguments and returns their average.

📌 Example Input: findAverage(10, 20, 30)
📌 Expected Output: 20
#include<iostream>
using namespace std;

int findAverage(int a, int b, int c){
    return (a+b+c)/3;
}
int main(){
   int result=findAverage(10, 20, 30);
   cout<<"Averge is "<<result;
}

*1️⃣ Find the Sum of Three Numbers
/Write a function named findSum that takes three integers as arguments and returns their sum.

📌 Example Input: findSum(5, 10, 15)
📌 Expected Output: 30
#include<iostream>
using namespace std;

int findSum(int a, int b, int c){
    return a+b+c;
}
int main(){
    cout<<"sum is "<<findSum(5,1,0);
}

Find the Product of Three Numbers
Write a function named findProduct that takes three integers as arguments and returns their product.

📌 Example Input: findProduct(2, 3, 4)
📌 Expected Output: 24/
#include<iostream>
using namespace std;

int findProduct(int a,int b, int c){
    return (a*b*c);
}
int main(){
    //cout<<findProduct(4,1,6);
  // cout<<findProduct(4,0,6);
    cout<<findProduct(4,2,6);
}

Calculate the Square of a Number
Write a function named square that takes an integer as an argument and returns its square.
📌 Example Input: square(5)
📌 Expected Output: 25
#include<iostream>
using namespace std;

int square(int a){
    return a*a;
}
int main(){
    int x;
    cout<<"enter your num ";
    cin>>x;
    cout<<square(x);
}

Check If a Number is Positive, Negative, or Zero
Write a function named checkNumber that takes an integer as an argument and prints whether 
the number is "Positive", "Negative", or "Zero".
📌 Example Input: checkNumber(-3)
📌 Expected Output: Negative
#include<iostream>
using namespace std;

void checkNumber(int a){
    if(a>0){
    cout<<"Positive number";
}
else if (a<0){
    cout<<"Negitive number";
}
else{
    cout<<"Number is zero";
}

}
int main(){
    int x;
    cout<<"enter your number ";
    cin>>x;
    checkNumber(x);
   
}


Check If a Number is Even or Odd
Write a function named checkEvenOdd that takes an integer as an argument and prints whether the number is
 "Even" or "Odd".

📌 Example Input: checkEvenOdd(7)
📌 Expected Output: "Odd"
#include<iostream>
using namespace std;

void checkEvenOdd(int a){
if (a>=0){
    cout<<"this number is postive ";
}else{
    cout<<"this number is negitive ";
}
}
int main (){
    int x;
    cout<<"enter your number ";
    cin>>x;
    checkEvenOdd(x);
}

Check If a Year is a Leap Year or Not
Write a function named isLeapYear that takes an integer (year) as an argument 
and prints whether the year is "Leap Year" or "Not a Leap Year".

📌 Example Input: isLeapYear(2024)
📌 Expected Output: "Leap Year"

#include<iostream>
using namespace std;

void isLeapYear(int a) {
    if(a%4==0){
        cout<<"Leap year";
    }else{
        cout<<"Not a Leap Year";
    }
}
int main(){
    int x;
    cout<<"Enter your year.";
    cout<<"Must bi in 4 chracters ";
    cin>>x;
    isLeapYear(x);
}

Convert Celsius to Fahrenheit
Write a function named celsiusToFahrenheit that takes a temperature in Celsius as an argument 
and returns the equivalent temperature in Fahrenheit.
📌 Formula: F = (C * 9/5) + 32
📌 Example Input: celsiusToFahrenheit(0)
📌 Expected Output: 32*/
/*#include<iostream>
using namespace std;

double celsiusToFahrenheit(double  Celsius ){
    return ( Celsius * 9/5) + 32;
}
int main(){
    int a;
    cout<<"enter your temperature in  Celsius ";
    cin>>a;
    cout<<celsiusToFahrenheit(a);
}
Convert Fahrenheit to Celsius
Write a function named fahrenheitToCelsius that takes a temperature in Fahrenheit
 as an argument and returns the equivalent temperature in Celsius.

📌 Formula:
C=(F−32)× 5/9
​
📌 Example Input: fahrenheitToCelsius(32)
📌 Expected Output: 0
#include<iostream>
using namespace std;
double fahrenheitToCelsius(double Fahrenheit){
    return (Fahrenheit-32)* 5/9;
}
int main (){
    int a;
    cout<<"enter your temperture in Fahrenheit ";
    cin>>a;
    cout<<fahrenheitToCelsius(a);
}

1️⃣ Convert Kilometers to Miles
Write a function named kmToMiles that takes a distance in kilometers as
an argument and returns the equivalent distance in miles.

📌 Formula:

Miles=Kilometers×0.621371
Miles=Kilometers×0.621371
📌 Example Input: kmToMiles(10)
📌 Expected Output: 6.21371

#include<iostream>
using namespace std;

double kmToMiles(double kilometers){
    return kilometers*0.621371;
}
int main(){
    double a;
    cout<<"enter your distance ";
    cin>>a;
    cout<<kmToMiles(a);
}
Convert Meters to Centimeters
Write a function named metersToCentimeters that takes a length in meters
 as an argument and returns the equivalent length in centimeters.

📌 Formula:
Centimeters=Meters×100
📌 Example Input: metersToCentimeters(5)
📌 Expected Output: 500

#include<iostream>
using namespace std;
double metersToCentimeters(double meters){
    return meters*100;
}
int main(){
    double a;
    cout<<"enter your length in meters ";
    cin>>a;
    cout<<metersToCentimeters(a)<<" cm";
}

5️⃣ Find the Factorial of a Number
Write a function named factorial that takes an integer as an argument and returns its factorial.
📌 Example Input: factorial(5)
📌 Expected Output: 120
📌 Explanation: 5! = 5 × 4 × 3 × 2 × 1 = 120
#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    while(a>0){
        fact*=a;
        a--;
    }
    return fact;
}
int main(){
    int x;
    cout<<"enter your numnber ";
    cin>>x;
    if(x<0){
        cout<<"numer is negitive and not find the negitive factorial ";
    }else{
        cout<<"factorial is "<<factorial(x);
    }
}


Find the Sum of Natural Numbers
Write a function named sumNaturalNumbers that takes an integer n as an argument
 and returns the sum of the first n natural numbers.

📌 Formula:
Sum=1+2+3+⋯+𝑛
or
Sum=𝑛×(𝑛+1)2S
📌 Example Input: sumNaturalNumbers(5)
📌 Expected Output: 15
📌 Explanation:5+4+3+2+1=15

#include<iostream>
using namespace std;

int sumNaturalNumbers(int n){
   return n*(n+1) /2;
}
int main(){
    int a;
    cout<<"enter your value ";
    cin>>a;
    cout<<sumNaturalNumbers(a);
}

Find the Product of Natural Numbers
Write a function named productNaturalNumbers that takes an integer n as an argument
 and returns the product (factorial) of the first n natural numbers.

📌 Formula:
Product=1×2×3×⋯×n
or
Product=𝑛!
🔹 Example:
Input: n = 5
Output: 120 (since 1×2×3×4×5=120
#include<iostream>
using namespace std;
int productNaturalNumbers(int n){
    int product=1;
    for(int i=1; i<=n; i++){
        product*=i;
    }
    return product;
}
int main(){
    int a;
    cout<<"enter your numvber ";
    cin>>a;
    cout<<productNaturalNumbers(a)<<endl;
}

1. Function to find the maximum of two numbers.
#include<iostream>
using namespace std;

int maximum(int o, int p){
    return o+p;
}
int main(){
    int a,b;
    cout<<"Enter your first value ";
    cin>>a;
    cout<<"Enter your second value ";
    cin>>b;
    cout<<"Your maximum of two numbers is "<<maximum(a,b)<<endl;
    }

  2. Function to check if a number is even or odd.
#include<iostream>
using namespace std;

void number(int o){
   if (o%2==0)
   {
    cout<<"number "<<o<<" is even";
   }else{
    cout<<"number "<<o<<" is odd";
   }
   }
   int main(){
    int a;
    cout<<"enter your number ";
    cin>>a;
    number(a);
}
3. Function to calculate the square of a number./
#include<iostream>
using namespace std;

int square(int a){
    return a*a;
}
int main(){
    int s;
    cout<<"enter your number ";
    cin>>s;
    cout<<s<<" squre is "<<square(s)<<endl;
}

4.  Function to return the sum of the first N natural numbers.
#include<iostream>
using namespace std;
int result;
int sumNnum(int a){
    
   for (int i=1; i<=a; i++){
    result+=i;
}
return result;
}
int main(){
int b;
cout<<"enter your numer ";
cin>>b;
cout<<sumNnum(b)<<endl;
}

5. Function to check if a number is positive, negative, or zero using if-else.
#include<iostream>
using namespace std;

void numer(int a){
    if (a>0){
    cout<<a<<" is poitive";
}else if(a<0){
    cout<<a<<" is negitive ";
}else{
    cout<<"your numer is zero ";
}
}int main(){
    int b;
    cout<<"enter your number ";
    cin>>b;
    numer(b);
}


 
4. Function to reverse a number.
#include<iostream>
using namespace std;

int reverseNum(int a){
    int rev=0;
while (a>0){
rev=rev*10+(a%10);
a=a/10;
}
return rev;
}
int main(){
int c;
cout<<"enter your numbers ";
cin>>c;
cout<<reverseNum(c)<<endl;    
return 0;
}


1️⃣ Write a function to count the number of digits in a given number.
📌 Example: 12345 → Output: 5
#include<iostream>
using namespace std;

int digits(int a){
    int count=0;
    while(a>0){
a=a/10;
count=count+1;
    }
return count;
}
int main(){
    int c;
    cout<<"enter your numbers ";
    cin>>c;
    cout<<digits(c)<<endl;    
    return 0;
    }
2️⃣ Write a function to find the sum of all digits of a given number.

 #include<iostream>
using namespace std;  

int digits(int a){
int sum=0;
while(a>0){
sum=sum+(a%10);
a=a/10;
}
return sum;
}
int main(){
    int c;
    cout<<"enter your numbers ";
    cin>>c;
    cout<<digits(c)<<endl;    
    return 0;
    }*/