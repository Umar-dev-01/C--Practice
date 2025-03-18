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
}

}




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
  o 301+ units: $1.20 per unit A customer consumes 250 units; calculate the total bill. */
  #include<iostream>
  using namespace std;
  int main(){
    
  }