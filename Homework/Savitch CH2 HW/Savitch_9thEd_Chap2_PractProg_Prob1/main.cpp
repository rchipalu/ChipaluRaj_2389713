/* 
   File:  Savitch Chapter 2 Practice program #1 main
   Author: Raj Chipalu
   Created on September 24 , 2016, 9:00pm
   Purpose: Write a code to read the weight of a package of breakfast cereal in ounces and 
 * output the weight in metric tons as well as the number of boxes needed to 
 * yield 1 metric ton of cereal.  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include<cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float METRICTON= 35273.92;//One metric ton in onces
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float wt_cer;//weight of the cereal box in ounces.
    float wt_mett;//weight of the cereal box in metric tons. 
    float box_met;//amount of cereal boxes to yield one metric ton. 
     
    //Input values
    while (wt_cer > 0)//If the weight of the cereal is greater than zero, user can run as many times as they want. 
    {
    cout << "Press return after entering a number"<<endl;
    cout << "Enter the weight of the cereal box in ounces"<<endl;
    cin>>wt_cer;
     
    //Process values -> Map inputs to Outputs
    wt_mett = (wt_cer / METRICTON);//calculate weight of box of cereal in metric tons.  
    box_met = METRICTON / wt_mett;//calculate amount of cereal boxes to yield one metric ton. 
    
    //Display Output
    cout << "The weight of the cereal in metric tons is ";
    cout <<  wt_mett<<endl;
    cout << "The amount of cereal boxes to yield one metric ton is ";
    cout << box_met<<endl;
    cout <<endl;
    }
   
    
    
    //Exit Program
    return 0;
}