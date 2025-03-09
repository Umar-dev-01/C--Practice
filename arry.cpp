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
    #include<iostream>
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