/*1. A bakery wants to bake 50 loaves of bread each day. Each loaf requires 500 grams of flour. Using a loop,
 calculate and display how much flour is needed for each loaf (1 to 50) and the total required flour. */
 /*#include<iostream>
 using namespace std;
 int main(){double sum;
 for(int i=1; i<=50; i++){
     cout<<"500 grams for "<<i<<" loaves"<<endl;
     
     sum+=500;
     //i++;
 }
 cout<<"Total required flour is "<<sum/1000<<" kilo grams";
 }*/
 



 
/*2. A train is traveling between 5 cities, and the fare increases with distance. The base fare is $50, 
and it increases by $20 for each additional city. Display the fare for each city using
 a loop. */
 #include<iostream>
using namespace std;
int main(){double a=50;
    for(int i=1; i<=5; i++){
     //  for(int a=50; a>i; a++){
cout<<i<<" City fare is "<<a<<endl;
       a+=20;
    }
}
                