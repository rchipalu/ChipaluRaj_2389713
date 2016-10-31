/* 
   File:  main
   Author: Raj Chipalu
   Created on October 19  , 2016, 5:39 pm
   Purpose: Write a function that computes the calories required for the basal 
 * metabolic rate, that computes the calories required for physical activity, 
   and output how many servings of a specific food should be eaten per day to 
 * maintain the person’s cur- rent weight at a specified activity level. 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
    
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float weight;//inputed wieght
    float minute;//minutes it takes to do a activity
    float Intens;//Intensity of the workout
    float calorie;//calories of favorite food
    float Bmr;//basal metabolic rate
    float Calreq;//Calories required to keep basal metabolic rate. 
    float Energy;//Energy needed to digest food. 
  
     
    //Input values
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Please enter the length of the physical activity in minutes"<<endl;
    cin>>minute;
    cout<<"Please enter the intensity level"<<endl;
    cin>>Intens;
    cout<<"Please enter the calories of 1 serving of your favorite food"<<endl;
    cin>>calorie;
    
            
    //Process values -> Map inputs to Outputs
    Bmr = 70 * (pow((weight / 2.2),0.756));//basal metabolic rate formula.  
    Calreq = 0.0385 * Intens * weight * minute;//Calories required formula. 
    Energy = calorie * .1;//Energy required to digest. 
    
    
    //Display Output
    cout<<"The Basic Metabolic Rate is"<<endl;
    cout<<Bmr<<endl;
    cout<<""<<endl;
    cout<<"The Calories required to maintain the basal metabolic rate is"<<endl;
    cout<<Calreq<<endl;
    cout<<""<<endl;
    cout<<"The Energy Required to digest the food is"<<endl;
    cout<<Energy<<endl;       
    cout<<""<<endl;
    
  
   
    
    
    //Exit Program
    return 0; 
}