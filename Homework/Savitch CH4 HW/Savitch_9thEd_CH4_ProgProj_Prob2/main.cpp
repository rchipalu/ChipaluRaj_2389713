/* 
   File:  main
   Author: Raj Chipalu
   Created on October 17 , 2016, 8:59 pm
   Purpose: Write a program that asks for the user’s height, weight, and age, 
 * and then computes clothing sizes according to specific formulas. 
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
}   