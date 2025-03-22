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
 /*#include<iostream>
using namespace std;
int main(){double a=50;
    for(int i=1; i<=5; i++){
     //  for(int a=50; a>i; a++){
cout<<i<<" City fare is "<<a<<endl;
       a+=20;
    }
}*/








/*3. A clock manufacturer tests clocks for accuracy. A clock runs for 24 hours, and every hour, 
the error (in seconds) is recorded. The error follows a pattern: 1st hour = 1s, 2nd hour = 2s, 
3rd hour = 3s, etc. Calculate and display the total time error in seconds after 24 hours. */
/*#include<iostream>
using namespace std;
int main(){
    float sum;
for(int i=1; i<=24; i++){
cout<<i<<" Hour in "<<i<<" second "<<endl;
sum+=i; 
}
cout<<"Total time error in seconds are "<<sum<<" and in  mintues "<<sum/60;
}*/

      




/*4. A gym offers discounts based on workout sessions attended in a month (30 days). Every 5th day,
 a customer gets a 10% discount on their next session fee. Using a loop, display which days a discount
  will be applied. */
  /*#include<iostream>
using namespace std;
int main(){
    cout<<"Total fee is 200 per day "<<endl;
   int total=200;
    for(int i=5; i<=30; i++){
      
     float fill;
     fill=total*0.1;
cout<<"Your "<<i<<" day fee is "<<total-fill<<endl;
 i+=4;
}
}*/





/*6. A farmer is monitoring the growth of a plant for 10 days. Each day, the plant grows by 2 cm more
 than the previous day (Day 1 = 2 cm, Day 2 = 4 cm, Day 3 = 6 cm, etc.). Use a loop to display the height 
 of the plant at the end of each day and the total growth after 10 days.*/
 /*#include<iostream>
 using namespace std;
 int main(){
    int b=2;
   int sum;
   sum+=b;
    for(int i=1; i<=10; i++){
        cout<<i<<" day plant growth is "<<b<<" cm"<<endl;
        b+2;
    }cout<<"Total growth of plant is in 10 days of "<<sum/100<<" meter";
 }*/


 

 /*7. A stadium has 100 rows of seats, and each row has 5 more seats than the previous row. 
The first row has 20 seats. Use a loop to display the number of seats in each row and the total seat
 in the stadium*/
 #include<iostream>
 using namespace std;
 int main(){
   double sum;int b=20;
    for(int i=1; i<=100; i++){
     
     cout<<i<<" row in seats "<<b<<endl;
     sum+=b;
     b+=5;
    }  cout<<"Total seats are in stadium "<<sum;
 }
 

