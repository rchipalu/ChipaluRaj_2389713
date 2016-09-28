/* 
   File:  Savitch Chapter 2 Program Project #5 main
   Author: Raj Chipalu
   Created on September 27 , 2016, 8:52 pm
   Purpose: Write a program that determines whether a meeting room is in 
 * violation of fire law regulations regarding the maximum room capacity.  
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
    int max_cap;//Maximum amount of people allowed in the room. 
    int num_ppl;//Number of people to be attending. 
    int ppl_exc;//People that need to be excluded to meet requirements.
    int ppl_add;//Additional people that can attend meeting.
    char ans   ;//answer to repeat calculation. 
    
   
    
    
    //Input values
    do 
    {
        cout << "Enter the maximum capacity of people allowed in the meeting room "<<endl;
        cin >> max_cap;
    
        cout << "Enter the amount of people attending the meeting room"<<endl;
        cin >> num_ppl;
    
    
   
    
    
    //Process values -> Map inputs to Outputs
    ppl_exc = num_ppl - max_cap;//calculate the amount of people that need to be excluded.
    ppl_add = max_cap - num_ppl;//calculate the amount of additional people that can attend. 
    
    
    //Display Output
    
        if (num_ppl <= max_cap)
        {
            cout << "It is legal to hold the meeting."<<endl;
            cout << ppl_add;
            cout << " Additional people/person may legally attend."<<endl;
        }
    
        else 
        {
            cout << "The meeting cannot be held as planned due to fire regulations."<<endl;
            cout << ppl_exc;      
            cout << " People/person must be excluded in order to meet the fire regulations.";
        }
    
                cout <<""<<endl;
                cout << "Want to run it again? "<<endl;
                cout << "Press y for yes, press n for No"<<endl;
                cin >> ans;
                cout << ""<<endl;
    }
    while (ans == 'y' || ans == 'Y'); 
    
    
            
    
   
    
    
    //Exit Program
    return 0;
}


