/* 
   File:  main
   Author: Raj Chipalu
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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
}