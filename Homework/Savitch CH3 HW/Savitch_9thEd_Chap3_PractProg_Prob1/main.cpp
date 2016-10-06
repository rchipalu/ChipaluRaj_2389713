/* 
   File:  
   Author: Raj Chipalu
   Created on October 3  , 2016 10:41am
   Purpose: Write a program to score the paper-rock-scissor game. 
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
    char r;
    char p;
    char s;
    char ans1;
    char ans2;
    char ans3;
     
    //Input values
    cout<<"User one please enter paper rock or scissors (p,r,s)"<<endl;
    cin >> ans1;
    
    cout <<"User two please enter paper rock or scissors (p,r,s)"<<endl;
    cin >> ans2;
            
   
     
    //Process values -> Map inputs to Outputs
    do 
    {    
        if  ((ans1 == 'r' && ans2 == 'p') || (ans1 == 'p' && ans2 == 'r'))
        {   
            cout<<"Paper covers rock"<<endl;
        
            if (ans1 == 'r' ) 
            {    
                cout<<"User one wins"<<endl;
           
            }
            else 
            {
                cout<<"User two wins"<<endl;
            
            }
              
        }
        
   
        if  ((ans1 == 'p' && ans2 == 's') || (ans1 == 's' && ans2 == 'p'))
        {
            cout<<"Scissors cut paper"<<endl;
    
            if (ans1 == 's' ) 
            {    
                cout<<"User one wins"<<endl;
           
            }
            else 
            {
                cout<<"User two wins"<<endl;
            
            }
        }
        if  ((ans1 == 'r' && ans2 == 's') || (ans1 == 's' && ans2 == 'r'))
        {
            cout<<"rock beats scissors"<<endl;
    
            if (ans1 == 'r' ) 
            {    
                cout<<"User one wins"<<endl;
           
            }
            else 
            {
                cout<<"User two wins"<<endl;
            
            }
        }
        
        if  (ans1 == ans2)  
        { 
            cout<<"Nobody wins."<<endl;  
        } 
    cout <<""<<endl;
                cout << "Want to play again? "<<endl;
                cout << "Press y for yes, press n for No"<<endl;
                cin >> ans3; 
                cout << ""<<endl;
          }
          while (ans3 == 'y' || ans3 == 'Y'); 
   
    
    
       
     
    
    //Display Output
    
   
   
    
    
    //Exit Program
    return 0;
}