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
 #/*include<iostream>
 using namespace std;
 int main(){
   double sum;int b=20;
    for(int i=1; i<=100; i++){
     
     cout<<i<<" row in seats "<<b<<endl;
     sum+=b;
     b+=5;
    }  cout<<"Total seats are in stadium "<<sum;
 }*/
 



 
 /*8. A fuel station offers a loyalty program. Customers who buy fuel for 10 consecutive days
  get a 5% discount every 3rd day. Display which days a discount will be given*/
  /*#include<iostream>
 using namespace std;
 int main(){
  for(int i=1; i<=10; i++){
    int total=140;
    cout<<i<<" day discount "<<(total-0.5)/100<<endl;
    i+=2;
  }    
 }*/




  /*9. A digital signboard displays a countdown from 10 to 1 before a rocket launch. Write a loop to display
  the countdown. When the countdown reaches 0, print "Liftoff!" */
  /*#include<iostream>
  using namespace std;
  int main(){
    cout<<"Time start "<<endl;
    for(int i=10; i>=1; i--){
      cout<<i<<endl;
  }cout<<"Liftoff!";
}*/





/*10. A school organizes a charity run where students run in rounds. The first round is 1 km, and each 
subsequent round increases by 0.5 km. Display the total distance covered after 10 rounds.*/
/*#include<iostream>
using namespace std;
int main(){
  double sum;float b=1000;
   for(int i=1; i<=10; i++){
    
    cout<<i<<" round "<<b<<endl;
    sum+=b;
    b+=0.5;
   }  cout<<"Total distance covered after 10 rounds "<<sum/1000<<" Km";
}*/



/*1. A bookstore records the daily sales of 7 different books in an array. The program should find and
 display the book with the highest sales. Example sales data: {50, 30, 75, 40, 20, 60, 45}*/
 #include<iostream>
 using namespace std;
 int main(){
  int books[7]={50, 30, 75, 40, 20, 60, 45};
  int greatest=books[0];
  if(greatest<books[1]){
    greatest=books[1];
  } if(greatest<books[2]){
    greatest=books[2];
  }if(greatest<books[3]){
    greatest=books[3];
  }if(greatest<books[4]){
    greatest=books[4];
  }if(greatest<books[5]){
    greatest=books[5];
  }if(greatest<books[6]){
    greatest=books[6];
  }cout<<"highest sale of the book is "<<greatest;
 }