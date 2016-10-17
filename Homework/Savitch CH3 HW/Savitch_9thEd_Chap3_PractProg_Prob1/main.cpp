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
    char r;//rock
    char p;//paper
    char s;//scissors
    char ans1;
    char ans2;
    char ans3;
     
    //Input values
    cout<<"User one please enter paper rock or scissors (p,r,s)"<<endl;//Entering variables. 
    cin >> ans1;
    
    cout <<"User two please enter paper rock or scissors (p,r,s)"<<endl;
    cin >> ans2;
            
   
     
    //Process values -> Map inputs to Outputs

    
    
       
     
    
    //Display Output
          do 
    {    
        if  ((ans1 == 'r' && ans2 == 'p') || (ans1 == 'p' && ans2 == 'r'))
        {   
            cout<<"Paper covers rock"<<endl;//reasoning for the winner. 
        
            if (ans1 == 'r' ) //declaration of the winner. 
            {    
                cout<<"User one wins"<<endl;
           
            }
            else 
            {
                cout<<"User two wins"<<endl;
            
            }
              
        }
        
   
        else if  ((ans1 == 'p' && ans2 == 's') || (ans1 == 's' && ans2 == 'p'))
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
        else if  ((ans1 == 'r' && ans2 == 's') || (ans1 == 's' && ans2 == 'r'))
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
        
        else if  ((ans1 && ans2 == r) || (ans1 && ans2 == s) || (ans1 && ans2 == p) )  
        { 
            cout<<"Nobody wins."<<endl;  
        } 
        else if ((ans1 && ans2 != r) || (ans1 && ans2 != s) || (ans1 && ans2 != p) )
        {
            cout<<"Please enter a correct letter"<<endl;
        }
        
        
        
                cout <<""<<endl;
                cout << "Want to play again? "<<endl;
                cout << "Press y for yes, press n for No"<<endl;
                cin >> ans3; 
                cout << ""<<endl;
          }
          while (ans3 == 'y' || ans3 == 'Y'); 
   
    
   
   
    
    
    //Exit Program
    return 0;
}