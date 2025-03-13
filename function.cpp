/*1️⃣ Find the Sum of Two Numbers
Write a function named addNumbers that takes two integers as arguments and returns their sum.
📌 Example Input: addNumbers(5, 3)
📌 Expected Output: 8
*/
#include<iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b; 
}
int main() {
    int a = 3, b = 4;
    cout << addNumbers (a , b); 
}
