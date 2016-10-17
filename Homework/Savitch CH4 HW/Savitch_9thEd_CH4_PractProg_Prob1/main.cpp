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
}