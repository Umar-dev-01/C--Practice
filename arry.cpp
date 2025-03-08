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
}*/



#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num[5]={5,6,8,1,2};
    for(int i=0; i<5; i++){
       sum+=num[i];
    }
    cout<<sum;
}