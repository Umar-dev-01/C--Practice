/*Write a program that declares an array of 5 integers and prints all its elements.
#include<iostream>
using namespace std;
int main(){
int num[]={45,52,63,85};
cout<<num[2]<<endl;
cout<<num[0]<<endl;
cout<<num[1]<<endl;
cout<<num[3]<<endl;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int num[]={45,52,63,85};
    for(int i=0; i<=3; i++){
        cout<<"value is "<<num[i]<<endl;
    }
}*/

/*Write a program that finds the sum of all elements in an array of 5 numbers.
#include<iostream>
using namespace std;
int main(){
    int sum; 
int num[]={5,6,8,1,2};
sum=num[0]+num[1]+num[2]+num[3]+num[4];
cout<<sum;
}



#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num[5]={5,6,8,1,2};
    for(int i=0; i<5; i++){
       sum+=num[i];
    }
    cout<<sum;
}*/




/*Declare an array of size 5.
Initialize it with any five numbers.
Print all the elements of the array.
#include<iostream>
using namespace std;
int main(){
    int num[5]={2,6,5,4,3};
    for (int  i = 0; i<5; i++)
    {
       cout<<num[i]<<endl;
    }
    
}
Take input from the user for an array of size 3.
Store the values in an array.
Display the entered values.
#include<iostream>
using namespace std;
int main(){
    int arry[3];
    for (int i = 0; i < 3; i++)
    {
       cout<<"Enter your value of "<<i+1<<": ";
       cin>>arry[i];

    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
       cout<<"your"<<i+1<<" value of arry is "<<arry[i]<<endl;
    }}
    Sum of Array Elements:

    Declare an array of size 4 and initialize it with numbers.
    Find and print the sum of all elements in the array.
    #include<iostream>
    using namespace std;
    int main(){
        int sum,arry[4]={2,87,5,4};
        for (int i = 0; i < 4; i++)
        {
            sum+=arry[i];
        }
        cout<<sum;
        }




Take input from the user for an array of size 5.
Store the values in an array.
Display the entered values.
#include<iostream>
    using namespace std;
    int main(){
        int arry[5];
        for(int i=0; i<5; i++){
            cout<<"Enter your "<<i+1<<" arry number ";
            cin>>arry[i];
        }
        for(int i=0; i<5; i++){
            cout<<i+1<<" arry ans is "<<arry[i]<<endl;
        }
    }
Declare an array of size 4.
Initialize it with any five numbers.
Print all the elements of the array.
#include<iostream>
    using namespace std;
    int main(){
        int num[4]={45,65,98,4};
//practice of changing the value
        num[1]=69;
        for (int i = 0; i < 4; i++)
        {
           cout<<i+1<<" arry value is "<<num[i]<<endl;
        }}

    Find the Sum of Array Elements:
    Declare an array of size 6 and initialize it with numbers.
    Calculate and print the sum of all elements in the array.
#include<iostream>
    using namespace std;
    int main(){
    int sum,num[6]={5,8,4,6,7,1};
for (int i = 0; i < 6; i++)
{
  sum+=num[i];
}
cout<<" your sum is "<<sum;
    }

    1. Store and Check Product Prices (if-else)
    A store sells 5 different products, and their prices are stored in an array.*/
    /*#include<iostream>
    using namespace std;
    int main(){
       float products[5]={52.20,87,65,21.00,63};
        int a;
        cout<<"enter your product number (1-5)"<<endl;
        cin>>a;
        if (a>=1 && a<=5){
            cout<<"your total price is "<<products[a-1];
        }else{
cout<<"invalid entery";
        }}
       2. Student Marks and Grade Calculation (if-else)
        A class has 4 students, and their marks in a subject are stored in an array.
        Take input for the marks of all 4 students.
        Use if-else to assign grades based on marks:
        90+ → A
        80-89 → B
        70-79 → C
        Below 70 → Fail
        Display each student's marks and grade..
         #include<iostream>
          using namespace std;
            int main(){
        int students[4];
        cout<<"Enter your marks"<<endl;
        for(int i=0; i<4; i++){
            cin>>students[i];
           }
        for(int i=0; i<4; i++){
            
        if(students[i]>=90){
            cout<<"Grade A";
        }else if(students[i]>=80 && students[i]<=89){
           cout<<"Grade B";
        } else if(students[i]>=70 && students[i]<=79){
            cout<<"Grade C";
        }else{
            cout<<"You are fial";
        }
        cout<<endl;}
                }
  
  
                3. Restaurant Menu System (switch case)
A restaurant has 5 menu items with fixed prices stored in an array.
Ask the user to enter the menu item number (1-5).
Use a switch case to display the selected item's name and price.
If the input is invalid, display an error message.               
#include<iostream>
using namespace std;
int main(){
  int prices, menuItem[5]={625,875,500,1000,25};
cout<<"enter the menu item number (1-5)"<<endl;
   cin>>prices;

   switch(prices){
   case 1:
   cout<<"1 kilo ata "<<menuItem[0]<<endl;
   break;

   case 2:
   cout<<"kilo Gorr "<<menuItem[1]<<endl;
   break;

   case 3:
   cout<<"soji 1 kilo "<<menuItem[2]<<endl;
   break;

   case 4:
   cout<<"jameel sweets aly golab jamon "<<menuItem[3]<<endl;
   break;

   case 5:
   cout<<"choie aly Norry ala smosa "<<menuItem[4]<<endl;
   break;
    
   default :
   cout<<"bchy akhian khol k disply prrh ty enteri mar"<<endl;
 }}. 
 
 
 Find the Total Sales of a Week (while loop)
 A business tracks its daily sales for 7 days in an array.
 Ask the user to enter sales for each day.
 Use a while loop to calculate the total sales of the week.
 Display the total sales at the end.
 #include<iostream>
 using namespace std;
 int main(){
  int days[7];
  int totalSales,i;
  while (i<7)
  {
   cout<<"enter your "<<i+1<<" sale ";
   cin>>totalSales;
   totalSales+=i;
   i++;
  }
    cout<<"totalSales is "<<totalSales;
 }

 . Count Even and Odd Numbers in a Dataset (while loop + if-else)
A company collects customer feedback scores (10 numbers) and stores them in an array.
Use a while loop to count how many scores are even and how many are odd.
Display the total number of even and odd scores separately.*/
#include<iostream>
using namespace std;
int main(){
    int i, evenCount, oddCount, num[10];

    while (i<10) {
        cout<<"Enter customer feedback score "<<(i+1)<<": ";
        cin>>num[i]; 
        i++;
    }
    i=0; 
    while (i<10) {
        if (num[i]%2==0) {
            evenCount++;
        } else {
            oddCount++;
        }
        i++;
    }
    cout<<"Total even scores: " <<evenCount<<endl;
    cout<<"Total odd scores: " <<oddCount<<endl;
}

  