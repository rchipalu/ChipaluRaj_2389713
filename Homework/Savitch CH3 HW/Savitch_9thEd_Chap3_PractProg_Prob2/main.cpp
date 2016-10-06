/* 
   File:  main
   Author: Raj Chipalu
   Created on October 6, 2016, 5:58 pm
   Purpose: Write a program to compute the interest due, total amount due, and 
 * the minimum payment for a revolving credit account. 
 */

//System Libraries
#include <iostream>
#include <cmath> //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float INTER1 = .015;//Interest for first $1000
const float INTER2 = .01;//Interest for amount after $1000

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float accountb;//balance of account. 
    float minpay1;//minimum payment for less than or equal to $1000
    float minpay2;//minimum payment for greater than $1000
    float indue1;//interest due
    float indue2;//interest due
    float totdue;//total amount due
    float totper;//Amount due past $1000
   
    
     
    //Input values
    cout<<"Please enter the account balance"<<endl;
    cin>>accountb;
    cout<<""<<endl;
    
   
     
    //Process values -> Map inputs to Outputs
    minpay1 = (accountb * .015);//Calculate minimum payment of value less than or equal to $1000
    minpay2 = (accountb * .015) + ((accountb - 1000) * .01);//Calculate Min payment for value above $1000   
    indue1 = minpay1 * .10;//interest due 
    indue2 = minpay2 * .10;//interest due
    totper = (accountb - 1000);//Calculate amount after $1000
     
    
    //Display Output
    if (accountb <= 1000)
        {
            cout<<""<<endl;
            cout<<"The interest due is 1.5 %"<<endl;
            cout<<""<<endl;
            cout<<"The total amount due is $";
            cout<<minpay1<<endl;
            
            
            if (indue1 > 10) 
                
                {
                cout<<""<<endl;
                cout<<"The minimum amount due is $"; 
                cout<<indue1<<endl; 
                }
            else 
                {
                cout<<""<<endl;
                cout<<"The minimum amount due is";
                cout<<"$10"<<endl;
                
                }
            
            
        
        }
    
    if (accountb > 1000)
        {
            cout<<"The total interest due is 1.5% on the first $1000 and 1% for the amount of $";
            cout<<totper<<endl;
            cout<<""<<endl;
            cout<<"The total amount due is $";
            cout<<minpay2<<endl;
            
            
            if (indue2 > 10) 
                {
                    cout<<""<<endl;
                    cout<<"The minimum amount due is $"; 
                    cout<<indue2<<endl; 
                }
            else 
                {
                cout<<""<<endl;
                cout<<"The minimum amount due is ";
                cout<<"$10"<<endl;
                
                }
    }
    
   
   
    
    
    //Exit Program
    return 0;
}
