/* 
   File:  main
   Author: Raj Chipalu
   Created on October 3  , 2016, 8:44 pm
   Purpose: Write a C++ program that solves a quadratic equation to find its roots. 
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
    float a , b, c;
   
    
     
    //Input values
    cout<<"Solution to Quadratic ax^2 +bx + c = 0"<<endl;
    cout<<"Input 3 float data types a b c"<<endl;
    cin>>a>>b>>c;
   
     
    //Process values -> Map inputs to Outputs
    float vb4sqrt = b*b-4*a*c;//root of quadratic
  
       
     
    //Display Output
     if (a==0) 
     {
        if(c==0)
        {
              cout<<"This is not an algebraic equation"<<endl;
        }
              cout<<"The solution is x = "<<-c/b<<endl;
     }
     else if(vb4sqrt>0) 
     {
        cout<<"x = ("<<((-b+sqrt(vb4sqrt))/2*a)<<" , ";
        cout<<((-b-sqrt(vb4sqrt))/2*a)<<")"<<endl;
                
     }
     else
     {
        cout<<"x = ("<<((-b/2*a))<<"+"<<( sqrt(vb4sqrt)/(2*a))<<"i, "; 
                 cout<<((-b/2*a))<<"+"<<(-sqrt(vb4sqrt)/(2*a))<<"i)"<<endl; 
     }  
   
   
    
    
    //Exit Program
    return 0;
}