/* 
   File:  Savitch Chapter 2 Program Project #4 main
   Author: Raj Chipalu
   Created on September 24 , 2016, 11:12 pm
   Purpose: Write a program that should calculate the face value required in order 
 * for the consumer to receive the amount needed. 
 * It should also calculate the monthly payment.   
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
    float amount;//amount of loan needed
    float in_rate;//interest rate on the loan
    float loan_t;//the duration of the loan in months
    float fac_val;//actual face value of the loan. 
    float month_p;//monthly payment on the loan.
    char ans;
    
    
   
    
    //Input values
    cout << "Enter the amount of loan needed in dollars "<<endl;
    cout <<"$";
    cin >> amount;
    
    
    cout << "Enter the interest rate in percentage"<<endl;
    cin >> in_rate;
    
    
    
    cout << "Enter the duration of the loan in months "<<endl;
    cin >> loan_t;
    cout << "months."<<endl;
    
   
    
    
    //Process values -> Map inputs to Outputs
    fac_val = (amount) - (in_rate/100 * loan_t);//calculation of the face value of the loan. 
    month_p = fac_val / loan_t;//calculate the monthly payment on the loan. 
    
    
    
    
    
    //Display Output
    do
    {
    cout << "Total Face value for the loan is "<<endl;
    cout << fac_val<<endl;
    cout << "The total monthly payment is "<<endl;
    cout << month_p<<endl;
    
    cout << "Want to run it again? "<<endl;
    cout << "Press y for yes, press n for No"<<endl;
    cin >> ans;
    
    }
   while (ans == 'y' || ans == 'Y');
            
    
   
    
    
    //Exit Program
    return 0;
}


