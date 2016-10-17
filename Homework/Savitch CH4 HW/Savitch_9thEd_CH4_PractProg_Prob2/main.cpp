/* 
   File:  main
   Author: Raj Chipalu
   Created on October 17, 2016,11:16 pm
   Purpose: Write a program that will read in the number of liters of gasoline 
 * consumed by the user’s car and the number of miles traveled by the car and 
 * will then output the number of miles per gallon the car delivered.  
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
} 