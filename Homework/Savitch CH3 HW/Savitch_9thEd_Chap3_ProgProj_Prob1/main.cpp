/* 
   File:  
   Author: Raj Chipalu
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float monfria = .40;// Any call from monday to friday from 8:am-6pm .40/min
const float monfrie = .25;//Any call from monday to friday befor 8:00am and after 6:00pm .25/min
const float weeknd = .15;//Any call started on Satuday or Sunday. 


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char firstl; 
    char secondl; 
    int duratm;
    int lengthm;
    int hours;
    float cost1;
    float cost2;
    float cost3;
     
    //Input values
    cout<<"Please enter the first two letters of the day"<<endl;
    cin>>firstl;
    cin>>secondl;
    cout<<"please enter the time the call started in 24 hour increments. "<<endl;
    cin>>hours;
    cout<<"Please enter the length of the call in minutes"<<endl;
    cin>>lengthm;
   
     
    //Process values -> Map inputs to Outputs
     cost1 = (weeknd * lengthm);
     cost2 = (monfria * lengthm);
     cost3 = (monfrie * lengthm);
     
    
    //Display Output
    
    if ((((firstl == 'S' || firstl == 's'))&&(secondl == 'a' || secondl == 'A'))|| 
       (((firstl == 'S' || firstl == 's'))&&(secondl == 'u' || secondl == 'U'))) 
        
        { 
        cout<<"The charges on the calls are $";
        cout<<cost1<<endl;
        }
     
     if  (((firstl == 'M' || firstl == 'm')&&(secondl == 'o' || secondl == 'O'))|| 
          ((firstl == 'T' || firstl == 't')&&(secondl == 'U' || secondl == 'u'))|| 
          ((firstl == 'W' || firstl == 'w')&&(secondl == 'e' || secondl == 'e'))|| 
          ((firstl == 'T' || firstl == 't')&&(secondl == 'H' || secondl == 'h'))|| 
          ((firstl == 'F' || firstl == 'f')&&(secondl == 'R' || secondl == 'r')))
         
         if (hours >=8 && hours < 18)
         
            {
             cout<<"The charges on the calls are $";
             cout<<cost2<<endl;
            }
         else
            {
             cout<<"The charges on the calls are $";
             cout<<cost3<<endl;
            }
   
    
    
    //Exit Program
    return 0;
}