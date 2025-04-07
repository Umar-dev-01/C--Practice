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



/*1. A bookstore records the daily sales of 7 different books in an array. The program should find
 and display the book with the highest sales. Example sales data: {50, 30, 75, 40, 20, 60, 45}. */
 /*#include<iostream>
 using namespace std;
 int main(){
  int product[7]={50, 30, 75, 40, 20, 60, 45};
  int lowest=sales[0];
  if(lowest<sales[1]){
    lowest=sales[1];
  } if(lowest<sales[2]){
    lowest=sales[2];
  }if(lowest<sales[3]){
    lowest=sales[3];
  }if(lowest<sales[4]){
    lowest=sales[4];
  }if(lowest<sales[5]){
    lowest=sales[5];
  }if(lowest<sales[6]){
    lowest=sales[6];
  }cout<<"highest sale of the book is "<<lowest;
 }


 2. A hospital records the body temperatures of 10 patients. Store the temperatures in an array
  and find how many patients have a fever (temperature above 37.5°C). Example: {36.8, 37.6, 39.0, 36.5,
   37.2, 38.4, 37.9, 36.9, 39.5, 37.1}.*/
   /*#include<iostream>
   using namespace std;
   int main(){
    float temperature[]={36.8, 37.6, 39.0, 36.5, 37.2, 38.4, 37.9, 36.9, 39.5, 37.1};
    int sum;
for(int i=0; i<10; i++){
  if(temperature[i]>37.5){
    sum++;
  }
}cout<<sum<<" patients have a fever (temperature above 37.5°C)";
   }



  3. A school records students' marks in 5 subjects. Store the marks in an array and calculate the
    total and average marks. Example: {85, 90, 78, 88, 92}.*/
    /*#include<iostream>
    using namespace std;
    int main(){
  int marks[]={85, 90, 78, 88, 92};
  int sum;
  for (int i = 0; i < 5; i++){
sum+=marks[i];
  }cout<<"Total marks are "<< sum;
  cout<<"Total marks of averge is "<<sum/5<<"%";
   }




4. A company tracks the weekly sales of 4 different products. Store the sales in an array and find
 the product with the lowest sales. Example: {150, 220, 180, 170}. 
#include<iostream>
    using namespace std;
    int main(){
int product[]= {150, 220, 180, 170};
int lowest=product[0];
if(lowest>product[1]){
  lowest=product[1];
} if(lowest>product[2]){
  lowest=product[2];
}if(lowest>product[3]){
  lowest=product[3];
}cout<<"lowest sale of the book is "<<lowest;
}
    

5. A sports team records the distances thrown by 8 players in a javelin throw competition. Store the 
distances in an array and find the longest and shortest throws. Example: {55.5, 60.2, 58.3, 62.1, 59.4,
 61.5, 57.8, 60.9}. 
 #include<iostream>
 using namespace std;
 int main(){
  float throws[]={55.5, 60.2, 58.3, 62.1, 59.4, 61.5, 57.8, 60.9};
  float highestdistanc=throws[0];
  if(highestdistanc<throws[1]){
    highestdistanc=throws[1];
  } if(highestdistanc<throws[2]){
    highestdistanc=throws[2];
  }if(highestdistanc<throws[3]){
    highestdistanc=throws[3];
  }if(highestdistanc<throws[4]){
    highestdistanc=throws[4];
  }if(highestdistanc<throws[5]){
    highestdistanc=throws[5];
  }if(highestdistanc<throws[6]){
    highestdistanc=throws[6];
  }if(highestdistanc<throws[7]){
    highestdistanc=throws[7];
  }
  float lowest=throws[0];
  if(lowest>throws[1]){
    lowest=throws[1];
  } if(lowest>throws[2]){
    lowest=throws[2];
  }if(lowest>throws[3]){
    lowest=throws[3];
  }if(lowest>throws[4]){
    lowest=throws[4];
  }if(lowest>throws[5]){
    lowest=throws[5];
  }if(lowest>throws[6]){
    lowest=throws[6];
  }if(lowest>throws[7]){
    lowest=throws[7];
  }cout<<"highest throws is "<<highestdistanc<<endl;
  cout<<"lowest throws  is "<<lowest;
 }
 


 6. A movie streaming service tracks the watch time (in minutes) of 6 different movies. Store the watch 
 times in an array and find the total time a user has spent watching movies. Example:
  {120, 150, 90, 180, 140, 160}. 
  #include<iostream>
 using namespace std;
 int main(){
  int time[]={120, 150, 90, 180, 140, 160};
  int sum;
  for (int i = 0; i < 6; i++){
sum+=time[i];
  }cout<<"Total time a user has spent watching movies in "<<sum/60<<" minutes";
 }



 7. A restaurant records customer ratings for a week (out of 5 stars). Store the ratings in an array and
  calculate the average rating. Example: {4.5, 4.0, 3.8, 4.2, 4.1, 3.9, 4.3}
#include<iostream>
using namespace std;
int main(){
float rating[]={4.5, 4.0, 3.8, 4.2, 4.1, 3.9, 4.3};
float sum;
for (int i = 0; i < 7; i++){
 sum+=rating[i];
}cout<<"The average rating is "<<sum/7;
}




8. A traffic monitoring system records the number of vehicles passing through a toll booth every hour 
for 12 hours. Store the counts in an array and find the hour with the highest traffic. Example: 
{35, 40, 28, 50, 45, 30, 38, 41, 42, 55, 47, 39}.
#include<iostream>
using namespace std;
int main(){
  int hour[]={35, 40, 28, 50, 45, 30, 38, 41, 42, 55, 47, 39};
int vehical,counter;
for(int i=0; i<12; i++){
if(hour[i]>vehical){
  vehical=hour[i];

counter=i;
}}cout<<vehical<<" vehicals in "<<counter+1<<" hour in the highest traffic";
}


/*9. A teacher records the attendance of 30 students (1 for present, 0 for absent). Store the attendance in
 an array and count how many students were absent. Example:
  {1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1}. 
  #include<iostream>
  using namespace std;
  int main(){
int attendence[30]={1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1};
int even;
for(int i=0; i<30; i++){
if(attendence[i]==0){
even++;
}
  }cout<<"Absents students are "<<even<<endl;
 cout<<"present students are "<<30-even;
 } 



 10. A delivery service tracks the daily package deliveries for a month (30 days). Store the deliveries in
  an array and find the day with the highest number of deliveries. Example:  {15, 20, 18, 22, 25, 19, 21, 
    17, 23, 24, 16, 20, 18, 22, 26, 19, 21, 17, 23, 24, 16, 20, 18, 22, 25, 19, 21, 17, 23, 24}.
 #include<iostream>
using namespace std;
int main(){
int days[]={15, 20, 18, 22, 25, 19, 21,17, 23, 24, 16, 20, 18, 22, 26, 19, 21, 17, 23, 24, 16, 20, 18, 22, 25, 19, 21, 17, 23, 24};
int   highest_delivery,dayCounter;
for(int i=0; i<30; i++){
  if(days[i]>highest_delivery){
    highest_delivery=days[i];
    dayCounter=i;
  }
}cout<<"Highest delivery is the "<< highest_delivery<<" and in the day "<<dayCounter+1;
}



Function-Based Questions (10 Questions) 
1. Library Fine System: A library charges a late return fine as follows: 
o First 5 days: $2 per day 
o Next 5 days: $3 per day 
o After 10 days: $5 per day*/
/*#include<iostream>
using namespace std;
int fine(int days){
  int total;
  if(days<=5){
total=days*2;
  }else if(days<=10){
    total=(5*2)+((days-5)*3);
  }else if(days<=15){
    total=(5*2)+(5*3)+((days-10)*5);
  }
return total;
}
int main(){
cout<<"ENter your days ";
int days;
cin>>days;
cout<<fine(days)<<"$ fine";
}



2. Hospital Billing System: A hospital charges patients based on their stay: 
o General Ward: $200 per day 
o Semi-Private: $400 per day 
o Private Room: $1000 per day 
Write a function that takes the number of days and room type as input and returns the total bill. 
Call this function for different patients. */
