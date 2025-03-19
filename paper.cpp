/*1. A highway toll booth system calculates the total toll fee based on the type of vehicle
 and distance traveled. Different vehicle types have different rates per kilometer: 
o Motorcycle: $0.05 per km 
o Car: $0.10 per km 
o Truck: $0.20 per km The program should take a vehicle type and distance
 (e.g., 150 km) as input and compute the toll fee. 
 #include<iostream>
 using namespace std;
 int main(){ 
    int gadi;
    cout<<"WELL COME TO CPEC Toll Plaza"<<endl;
    cout<<"if you have Motorcycle to press 1 Car for press 2 Truck for press 3"<<endl;
    cin>>gadi;
    float km;
    cout<<"How many kilometers did you drive? ";
    cin>>km;
switch(gadi){
    case 1:
    cout<<"Your Toatal Bill is "<<km*0.05;
    break;

    case 2:
    cout<<"Your Toatal Bill is "<<km*0.10;
    break;

    case 3:
    cout<<"Your Toatal Bill is "<<km*0.20;
    break;

    default :
    cout<<"invaild Entery Try agian";
    break;
}
 }






2. A traffic light control system needs to inform pedestrians and drivers about road signals. 
 The system should take one of three signal colors ("Red", "Yellow", "Green") as input and display
 the correct action for both pedestrians and vehicles. 
 #include<iostream>
 using namespace std;
 int main(){
   int colour;
cout<<"enter the colour number What color signal are you watching?"<<endl;
cout<<"(for Red enter 1)"<<endl;
cout<<"(for Yellow enter 2)"<<endl;
cout<<"(for Green enter 3)"<<endl;
cin>>colour;
switch (colour)
{
case 1:
   cout<<"stop becuse signal is red ";
    break;

case 2:
cout<<"Get ready becuse signal is yellow ";
break;

case 3:
cout<<"you can go becuse signal is green now ";
break;

default:
cout<<"invalid entery plz try again ";
    break;
}
 }








 3. An online shopping store applies discounts based on the total bill: 
o If the bill is between $500–$999, apply a 10% discount. 
o If the bill is $1000 or more, apply a 20% discount. A customer buys items totaling $750; 
calculate the final bill.*/
/*#include<iostream>
 using namespace std;
 int main(){
float custmAmmount;
cout<<"Thank you for shopping at our store. How much of your bill? Let's see how much" ;
cout<<"discount you are entitled to. ";
cin>>custmAmmount;
if (custmAmmount>=500 && custmAmmount<=999)
{
    // Discounted Price = Original Price - (Original Price * Discount Percentage)
   cout<<"Your Total bill is "<<custmAmmount-(custmAmmount*0.10);
}
else if(custmAmmount>=1000){
    cout<<"Your Total bill is "<<custmAmmount-(custmAmmount*0.20);
}else{
    cout<<"Your purchase is very low so discount was not given to the same ";
}}






4. A fitness tracking application calculates BMI (Body Mass Index). Given a weight (e.g., 70 kg)
 and height (e.g., 1.75 meters),compute BMI using BMI = weight / (height²) and categorize users as
  "Underweight," "Normal,""Overweight," or "Obese."*/
/*#include<iostream>
  using namespace std;
  int main(){
//(underwaight=Below 18.5), (Normal Weight=18.5 to 24.9),
//(Overweight=25.0 to 29.9), (Obesity=30.0 or greater)
int weight;
cout<<"Enter your weight ";
cin>>weight;
float height;
cout<<"Enter your hight ";
cin>>height;
// BMI = weight / (height²)
float BMI;
BMI=weight+(height*height);
cout<<BMI;
if(BMI<18.5){
    cout<<" Underweight";
}else if(BMI>=18.5 && BMI<=24.9){
    cout<<" Normal";
}else if(BMI>=25.0 && BMI<=29.9){
    cout<<" Overweight";
}else if(BMI>=30.0){
    cout<<" Obesity";
}else{
    cout<<"Invalid Entry please Try again";
}
  }






5. An electricity billing system calculates the total bill based on the number of units consumed: 
o 0–100 units: $0.50 per unit 
o 101–300 units: $0.75 per unit 
o 301+ units: $1.20 per unit A customer consumes 250 units; calculate the total bill. 
#include<iostream>
using namespace std;
int main(){
int Units;
cout<<"Enter your Units ";
cin>>Units;
if(Units<=100){
    cout<<"Your Total Bill is "<<Units*0.50;
}else if(Units>=101 && Units<=300){
    cout<<"Your Total Bill is "<<Units*0.75;
}else if(Units>300){
    cout<<"Your Total Bill is "<<Units*1.20;
}else{
    cout<<"Invalid Entery";
}
  }*/








  /*7. A smart elevator system moves between floors based on user input. The elevator starts at ground 
  floor (1). It should take a floor number (1-10) as input and display the floors passed until it
   reaches the destination. The program should keep running until the user enters "Exit."*/
/*#include<iostream>
   using namespace std;
   int main(){
    int floor;
    cout<<"Enter your floor number ";
    cin>>floor;
   for (int i=1; floor<11; i++)
   {
    cout<<"you are on "<<floor<<" floor"<<endl;
    floor++;
   }
}*/











/*9.  A library overdue fine calculator computes late fees based on the number of days overdue: 
o 1–5 days: $1 per day 
o 6–10 days: $2 per day 
o 11+ days: $5 per day A user returns a book 8 days late; calculate the total fine. */
   /*#include<iostream>
   using namespace std;
   int main(){
    int days;
    cout<<"Please enter how many days it took you to return the book ";
    cin>>days;
    if (days<=5){
        cout<<"Your total charges are "<<days*1;
    }else if(days>=6 && days<=10){
        cout<<"Your total charges are "<<days*2;
    }else if (days>10){
        cout<<"Your total charges are "<<days*5;
    }else{
        cout<<"Invalid Entery";
    }}
    */





/* 16.   A currency converter converts an amount to different currencies. Example exchange rates: 
• 1 USD = 150 PKR 
• 1 USD = 0.85 EUR A user enters an amount in USD (e.g., 20 USD) and selects a currency to convert to.*/
/*#include<iostream>
using namespace std;
int main(){
int money;
cout<<"Enter your money in number ";
cin>>money;
string currency;
cout<<"Enter your currencey <PKR> or <EUR> ";
cin>>currency;
if (currency=="PKR")
{
   cout<<money*150<<endl;
}else if(currency=="EUR"){
    cout<<money*0.85<<endl;
}else{
    cout<<"Please use big ABC in entring the currencey not use < and > operators ";
}
}*/








          //  <<<<<<<<<<<<<<<<<<<<<Issue in this pro>>>>>>>>>>>>>>>>>>>>>>>>>>

          

/*18. A student grade calculator takes marks for 5 subjects (e.g., 85, 90, 78, 92, 88). 
 Compute the percentage and assign a grade (A, B, C, etc.).*/
/*#include<iostream>
using namespace std;
int main(){
int marks,English,Math,Science,computer,urdu;
cout<<"Enter your marks of Engliah "<<endl;
cin>>English;
cout<<"Enter your marks of Math "<<endl;
cin>>Math;
cout<<"Enter your marks of Science "<<endl;
cin>>Science;
cout<<"Enter your marks of Computer "<<endl;
cin>>computer;
cout<<"Enter your marks of Urdu "<<endl;
cin>>urdu;
marks=English+Math+Science+computer+urdu;
cout<<"Your Total marks are "<<marks<<" out of 500"<<endl;
//percentage formula is (part/whole) * 100
float percentage;
percentage=(marks/500)*100;
cout<<"Your Toatal percentage is "<<percentage<<endl;
if(percentage>=90){
    cout<<"Grade A+";
}else if(percentage>=75 && percentage<90){
    cout<<"Grade A";
}else if(percentage>=55 && percentage<75){
    cout<<"Grade B";
}else if(percentage>=41 && percentage<=40){
    cout<<"Grade C";
}else if(percentage>=1 && percentage<39){
    cout<<"Grade F";
}else{
    cout<<"Invalid Intery";
}
}*/






/*19.  A blood donation eligibility checker asks for age (e.g., 20) and weight (e.g., 55 kg). 
The minimum criteria are age ≥18 and weight ≥50 kg. The program determines if the person is eligible.*/
/*#include<iostream>
using namespace std;
int main(){
    int age,weight;
    cout<<"Enter Your Age ";
    cin>>age;
    cout<<"Enter your Weight ";
    cin>>weight;
if(age>=18){
    if(weight>=50){
        cout<<"Congratulations! Are You Eligible for Blood Donation";
    }
}else{
    cout<<"You are not eligible for blood donation";
}
}*/




//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>






/*20. A restaurant billing system calculates the final bill, including a 10% service charge. 
Given item prices (e.g., $5.50, $3.75, $4.20), compute the final amount*/
/*#include<iostream>
using namespace std;
int main(){
    cout<<"its all prices of all item($5.50, $3.75, $4.20)  "<<endl;
    int sum;
    sum=5.50+3.75+4.20;
    cout<<"Your total bill is including with FBR Tax is "<<sum;
}*/











/*22. A banking system allows deposits and withdrawals. A user starts with a balance (e.g., $1000), 
deposits $500, then withdraws $300. Update and display the balance after each transaction.*/
/*#include<iostream>
using namespace std;
int main(){
    int balance=1000,depositBalance;
    cout<<"How many balance of deposits of you ";
    cin>>depositBalance;
    int totalBalance;
    totalBalance=balance+depositBalance;
    cout<<"Your total balance is "<<totalBalance<<endl;
    int withdrawBalance;
    cout<<"How many balnce of withdrwas ";
    cin>>withdrawBalance;
cout<<"Now your total balance is "<<totalBalance-withdrawBalance<<" after transction";
}*/







/*27. A hotel room booking system manages room availability for a 10-room hotel. Users can check
 availability and book rooms*/
 #include<iostream>
using namespace std;
int main(){
int room;
cout<<"In our Motel are total (1-10) room who is the wanted to you ";
cin>>room;
switch (room)
{
case 1:
    cout<<"ok. come here This room is not booked";
    break;
            
case 2:
    cout<<"Sorry This room is booked";
    break;
            
case 3:
    cout<<"Sorry This room is booked";
    break;
            
case 4:
    cout<<"Sorry This room is booked";
    break;
            
case 5:
    cout<<"ok. come here This room is not booked";
    break;
            
case 6:
    cout<<"Sorry This room is booked";
    break;
            
case 7:
    cout<<"Sorry This room is booked";
    break;
            
case 8:
    cout<<"Sorry This room is booked";
    break;
            
case 9:
    cout<<"ok. come here This room is not booked";
    break;
            
case 10:
    cout<<"Sorry This room is booked";
    break;
            
default:
cout<<"Invalid entery only slect in 1 to 10";
    break;
}
}