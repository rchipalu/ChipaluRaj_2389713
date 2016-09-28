/* 
   File:  Savitch Chapter 2 Program Project #7 main
   Author: Raj Chipalu
   Created on September 27 , 2016, 10:57 pm
   Purpose: Write a program to gauge the expected cost of an item in a specified
 *  number of years.  
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants



//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float price_i;//Price of the item. 
    float infl_r;//Inflation rate of the item. 
    float t_years;//Number of years item is to be purchased.
    float exp_cos;//Expected cost of the item. 
    
    //Input values
    cout << "Enter the price of the item today in dollars"<<endl;
    cin >> price_i ;
    
    cout << "Enter the inflation rate in percentage "<<endl ;
    cin >> infl_r ;
    
    cout << "Enter the amount of years to buy the product"<<endl;
    cin >> t_years ;
    
    
     //Process values -> Map inputs to Outputs
    exp_cos =  ((infl_r/100) * t_years )*(price_i) + price_i;//Calculate the expected cost. 
    
    
     //Display Output
    cout << "The price of the item in ";
    cout << t_years;
    cout << " years"<<endl;
    cout << "Is expected to cost $";
    cout << exp_cos<<endl;
    
            
          
     //Exit Program
    return 0;
}




