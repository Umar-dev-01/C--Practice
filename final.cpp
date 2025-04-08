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
}



1. A bookstore records the daily sales of 7 different books in an array. The program should find
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
Call this function for different patients.
#include<iostream>
using namespace std;

int charges(char ward){
  int days;
cout<<"Enter your days ";
cin>>days;
if(ward=='G' || ward=='g'){
return days*200;
}else if(ward=='S' || ward=='s'){
  return days*400;
  }else if(ward=='P' || ward=='p'){
  return days*1000;
  }else{
    cout<<"Invalid entery however ";
  }return 0;
}int main(){
  cout<<"Enter your ward for General Ward=G and for Semi-Private=S and for Private Room P ";
  char ward;
  cin>>ward;
int total=charges(ward);
cout<<"Your total bill is "<<total;
}



3. Car Service Management: A car service station offers the following services: 
o Oil Change: $50 
o Engine Tuning: $120 
o Tire Replacement: $200 
o Complete Service Package: $500 
Write a function that takes a service name as input and returns the corresponding cost. Use this function 
to generate bills for 3 different customers. 
#include<iostream>
using namespace std;

void mnagment(char service){
if(service=='O' || service=='o'){
  cout<<"For your Car service Oil Change is total bill is $"<<50;
}else if(service=='E' || service=='e'){
  cout<<"For your Car Service Engine Tuning total bill is $"<<120;
}else if(service=='T' || service=='t'){
  cout<<"For your Car Service Tire Replacement total bill is $"<<200;
}else if(service=='C' || service=='c'){
  cout<<"For your Car Service Complete Service Package total bill is $"<<500;
}else {
  cout<<"Invalid entry ";
}
}
int main(){
  cout<<"What do you want for oil change press O and Engine Tuning= E and Tire Replacement= T or  Complete Service Package for press C  ";
  char service;
  cin>>service;
 mnagment( service);
}



4. Water Consumption Tracker: A water utility company calculates monthly water usage bills
 based on consumption: 
o Up to 30 gallons: $1 per gallon 
o 31-100 gallons: $0.8 per gallon 
o More than 100 gallons: $0.5 per gallon 
Write a function that takes the number of gallons used and calculates the total bill.
 Call this function for
 multiple users.
 #include<iostream>
 using namespace std;
void water (double gallon){
if(gallon<=30){
  cout<<"Your total bill is "<<gallon*1<<endl;
}else if(gallon>30 && gallon<=100){
  cout<<"Your total bill is "<<gallon*0.8<<endl;
}else if(gallon>100){
  cout<<"Your total bill is "<<gallon*0.5<<endl;
}
}
int main(){
  cout<<"Enter the number of users how many peeple are involved this ";
  int people;
  cin>>people;
  for(int i=1; i<=people; i++){
  cout<<"People no "<<i<<" enter your gallon ";
  double gallon;
  cin>>gallon;
  
water(gallon);
}
}




5. Online Store Discount System: An online store offers discounts based on the total bill: 
o Below $100: No discount 
o $100 - $500: 10% discount 
o Above $500: 20% discount 
Write a function that takes the total bill amount and returns the final price after applying the discount. 
 #include<iostream>
 using namespace std;

void  discount(int amount){
if(amount<100){
cout<<"Sorry You are not worthy of this discount your total bill is "<<amount;
}else if(amount>100 && amount<500){
  cout<<"Give you 10% discount. your total bill is "<<amount-(amount*0.10);
}else if(amount>500){
  cout<<"Give you 20% discount. your total bill is "<<amount-(amount*0.20);
}
}
int main(){
  cout<<"Enter your amount i will check and give you discount ";
  double amount;
  cin>>amount;
  discount( amount);
}


6. Flight Fare Calculator: A flight company calculates ticket fares based on seat class
 and clases traveled: 
o Economy: $0.10 per km 
o Business: $0.25 per km 
o First Class: $0.50 per km 
Write a function that takes the seat class and clases as input and calculates the total fare.
 Use this function to book tickets for 3 different passengers. 
 #include<iostream>
 using namespace std;

void travlled(char clases){
if(clases=='E' || clases=='e'){
  cout<<"Your total bill is "<<clases*0.10<<endl;
}else if(clases=='B' || clases=='b'){
  cout<<"Your total bill is "<<clases*0.25<<endl;
}else if(clases=='F' || clases=='f'){
  cout<<"Your total bill is "<<clases*0.50<<endl;
}}
int main(){
  cout<<"How many passenger ";
  int passenger;
  cin>>passenger;
  for(int i=1; i<=passenger; i++){
  cout<<"Enter Passenger "<<i<<" whatss your type of flight for Economy press E and business B and First Clas F ";
  char clases;
  cin>>clases;
  cout<<"Passenger "<<i<<" How many kilometers do you have to go? ";
  int distance;
  cin>>distance;
 
  travlled(clases);
} 
}




7. Movie Theater Ticket Pricing: A cinema charges for tickets based on age: 
o Children (under 12): $8 
o Teens (12-17): $10 
o Adults (18-60): $15 
o Seniors (above 60): $12 
Write a function that takes a person's age and returns the ticket price. Use this function to calculate
 the total cost for a family of 5.
 #include<iostream>
 using namespace std;
void seats(int age){
  int ticket;
  if(age<12){
    ticket=8;
  }else if(age>12 && age<=17){
    ticket=10;
  }else if(age>17 && age<=60){
    ticket=15;
  }else if(age>60){
    ticket=12;
  }cout<<"Your ticket price is $"<<ticket<<endl;
}
  int main(){
    for(int i=1; i<=5; i++){
cout<<"Enter your age ";
int age;
cin>>age;
seats(age);
  }}



8. Mobile Recharge System: A telecom company offers different recharge plans: 
o $10 plan: 2GB data, 100 minutes 
o $20 plan: 5GB data, 300 minutes 
o $30 plan: 10GB data, unlimited calls 
Write a function that takes a plan choice as input and returns the details of that plan. Use this function 
for 3 different users. 
#include<iostream>
using namespace std;
void offers(int plan){
  if(plan==10){
    cout<<"2GB data, 100 minutes will give it to you "<<endl;
  }else if(plan==20){
    cout<<"5GB data, 300 minutes will give it to you "<<endl;
  }else if(plan==30){
    cout<<"10GB data, unlimited calls will give it to you "<<endl;
  }
}int main(){
  for(int i=1; i<=3; i++){
  cout<<"Cllient "<<i<<" We have 3 plans $10, $20 and $30 ";
  int plan;
  cin>>plan;
  offers(plan);
}
}



9. Electricity Bill Calculation: An electricity company charges based on units consumed: 
o First 100 units: $0.50 per unit 
o Next 200 units: $0.75 per unit 
o Above 300 units: $1.20 per unit 
Write a function that takes the number of units consumed and calculates the total bill. Use this 
function for different households. */
#include<iostream>
using namespace std;
void bill(int units){
  int total;
  if(units<=100){
    total=units*0.50;
  }else if(units>100 && units<=300){
    total=units*0.75;
  }else if(units>300){
    total=units*1.20;
  }
 cout<<"Your units are "<<units<<" and bill is "<<total<<endl;
}
  int main(){
    cout<<"How many units is your bill? ";
    for(int i=0; i<4; i++){
      cout<<"How many units is your bill? ";
      int units;
      cin>>units;
      bill(units);
  }
}
