/* 
   File:   main
   Author: Raj Chipalu
   Created on October 17th, 11:30 PM
   Purpose:  Assignment 4
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float LITER = 0.264179; //Liter to gallon conversion 

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1 for a program to gauge the rate of inflation for the past year."<<endl;
        cout<<"2.  Type 2 for a program to gauge the rate of inflation for the past and next year. "<<endl;
        cout<<"3.  Type 3 for a program that will output the number of miles per gallon the car delivered."<<endl;
        cout<<"4.  Type 4  for a program that will output the number of miles per gallon the two cars delivered and the most efficient."<<endl;
        cout<<"5.  Type 5  for a program that computes clothing sizes according to specific formulas. "<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem 1"<<endl;
                //Declaration of Variables
    float pricetod;//price of object today
    float pricely;//price last year
    float inflatr;
    char ans;
  
     
    //Input values
    do{
    cout<<"This program gauges the rate of inflation for the past year."<<endl;
    cout<<"Please enter the price of the item today in dollars"<<endl;
    cout<<"$"; 
    cin>>pricetod;
    cout<<"Please enter the price of the item one year ago"<<endl;
    cout<<"$";
    cin>>pricely;
    
     
    //Process values -> Map inputs to Outputs
    inflatr = ((pricetod - pricely) / pricely) * 100; //inflation equation. 
   
    //Display Output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1); 
    cout<<"The inflation rate is ";
    cout<<inflatr;
    cout<<" Percent"<<endl;
    cout<<""<<endl;
    cout<<"Would you like to run it again? please input Y for Yes or N for no"<<endl;
    cin>>ans;
    }while (ans == 'y' || ans == 'Y'); 
   
    
    
    //Exit Program
    return 0;  

                break;
            }
            case 2:{
                cout<<"Inside Problem 2"<<endl;
                //Declaration of Variables
    float pricetod;
    float pricely;
    float inflatr;
    float price1y;
    float price2y;
    char ans;
  
     
    //Input values
    do{
    cout<<"This program gauges the rate of inflation for the past year."<<endl;
    cout<<"Please enter the price of the item today in dollars"<<endl;
    cout<<"$"; 
    cin>>pricetod;
    cout<<"Please enter the price of the item one year ago"<<endl;
    cout<<"$";
    cin>>pricely;
    
     
    //Process values -> Map inputs to Outputs
    inflatr = ((pricetod - pricely) / pricely) * 100;
    price1y = ((inflatr/100)+1) * pricetod;
    price2y = ((inflatr/100)+1) * price1y;
   
    //Display Output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1); 
    cout<<"The inflation rate is ";
    cout<<inflatr;
    cout<<" Percent"<<endl;
    cout<<""<<endl;
    cout<<"The price of the item in one year will be "<<endl;
    cout<<"$";
    cout<<price1y<<endl;
    cout<<"The price of the item in two years will be"<<endl;
    cout<<"$";
    cout<<price2y<<endl;
    cout<<"Would you like to run it again? please input Y for Yes or N for no"<<endl;
    cin>>ans;
    }while (ans == 'y' || ans == 'Y'); 
   
    
    
    //Exit Program
    return 0;
                break;
            }
            case 3:{
                cout<<"Inside Problem 3"<<endl;
                //Declaration of Variables
    float Literofg;//liters of gallon 
    float milest;//miles traveled
    float mpg;//miles per gallon
    float gallons;//converted Liters value to gallons. 
  
     
    //Input values
   cout<<"This program outputs the miles per gallon of a users car."<<endl;
   cout<<"Please enter the number of liters of gasoline consumed by the user's car"<<endl; 
           cin>>Literofg;
   cout<<"Please enter the number of miles traveled by the user"<<endl; 
           cin>>milest;
     
    //Process values -> Map inputs to Outputs
           gallons = LITER * Literofg;//find the amount of gallons. 
           mpg = milest / gallons;//find the miles per gallon. 
           
           
   //Display Output
           cout.setf(ios::fixed);
           cout.setf(ios::showpoint);
           cout.precision(3);//keep at three decimal places. 
           cout<<"The miles per gallon the car delivered is "<<endl;
           cout<<mpg;
  
   
    
    
    //Exit Program
    return 0; 
                break;
            }
            case 4:{
                cout<<"Inside Problem 4"<<endl;
                    //Declaration of Variables
    float Literofg1;//liters of gallon 
    float milest1;//miles traveled
    float mpg1;//miles per gallon
    float gallons1;//converted Liters value to gallons. 
    float Literofg2;//liters of gallon 
    float milest2;//miles traveled
    float mpg2;//miles per gallon
    float gallons2;//converted Liters value to gallons. 
    char ans;
  
  
     
    //Input values
    do {
   cout<<"This program outputs the miles per gallon of a users car."<<endl;
   cout<<"Please enter the number of liters of gasoline consumed by the first car"<<endl; 
           cin>>Literofg1;
   cout<<"Please enter the number of miles traveled by the first car"<<endl; 
           cin>>milest1;
   cout<<""<<endl;
   cout<<"Please enter the number of liters of gasoline consumed by the second car"<<endl; 
           cin>>Literofg2;
   cout<<"Please enter the number of miles traveled by the second car"<<endl; 
           cin>>milest2;
     
    //Process values -> Map inputs to Outputs
           gallons1 = LITER * Literofg1;//find the amount of gallons. 
           mpg1 = milest1 / gallons1;//find the miles per gallon. 
           gallons2 = LITER * Literofg2;//find the amount of gallons. 
           mpg2 = milest2 / gallons2;//find the miles per gallon. 
           
           
           
   //Display Output
           cout.setf(ios::fixed);
           cout.setf(ios::showpoint);
           cout.precision(3);//keep at three decimal places. 
           cout<<"The miles per gallon the first car delivered is "<<endl;
           cout<<mpg1<<endl;
           
           cout<<"The miles per gallon the second car delivered is"<<endl;
           cout<<mpg2<<endl;
           if (mpg1>mpg2) 
           {
               cout<<"The car with the best fuel efficiency is car 1"<<endl;
           }
           else
           {
               cout<<"The car with the best fuel efficiency is car 2"<<endl;
           }    
               cout<<""<<endl;
           cout<<"Would u like to run it again?"<<endl;
           cin >> ans;
        }while((ans=='y')||(ans=='Y'));
    
    
    //Exit Program
    return 0; 
                break;
            }
            case 5:{
                cout<<"Inside Problem 5"<<endl;
                //Declaration of Variables
    int weight;//weight of user
    int age;//age of user
    int height;//height of user
    int hatsize;//
    int jacsize;
    int waist;
    float jacsize1;
    float waist1;
    char ans;
    
    
  
     
    //Input values
    do {
    cout<<"This program computes clothing sizes for a user"<<endl;
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    cout<<"lbs"<<endl;
    cout<<"Please enter your age in years"<<endl;
    cin>>age;
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;
   
     
    //Process values -> Map inputs to Outputs
    hatsize = (weight/height) * 2.9;//calculate the hat size
    jacsize1 = ((height*weight)/288)+ (1/8*(age-30/10)); //jacket size of user over 30 
    waist1 = (weight/(5.7))+ (1/10*(age-28/2));//waist size of user over 28
    jacsize = ((height*weight)/288);
    waist = (weight/(5.7));
            
            
   //Display Output
    cout<<"Your hat size is"<<endl;
    cout<<hatsize<<endl;
    if (age >=28)
    {
        cout<<"Your Jacket size is"<<endl;
        cout<<jacsize1<<endl;
        cout<<"Your waist size is"<<endl;
        cout<<waist1<<endl;
    }
    
    else
    {   cout<<"Your jacket size is"<<endl;
        cout<<jacsize<<endl;
        cout<<"Your waist size is"<<endl;
        cout<<waist;
        cout<<""<<endl;
    }
    
    cout<<"would you like to run it again? Press Y for yes or N for No."<<endl;
    cin >> ans;
    }while (ans == 'Y' || ans == 'y');
            
   
    
    
    //Exit Program
    return 0;  
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 8:{
                cout<<"Inside Problem H"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}