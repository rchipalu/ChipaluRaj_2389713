/* 
   File:  Savitch Chapter 2 Practice program #4 main
   Author: Raj Chipalu
   Created on September 24 , 2016, 11:12 pm
   Purpose: Write a program that plays the game of mad lib.    
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string teacher;//variables for the mad lib. 
    string nme;
    string food;
    string numb;
    string adj;
    string color;
    string anim;
    
    //Input values
    cout << "Enter the first or last name of your instructor "<<endl;
    cin >> teacher;
    
    cout << "Enter your name ";
    cin >> nme;
    
    cout << "Enter the name of a food"<<endl;
    cin >> food;
    
    cout <<"Enter a number between 100 and 120"<<endl;
    cin >> numb;
    
    cout <<"Enter an adjective"<<endl;
    cin >> adj;
    
    cout <<"Enter a color"<<endl;
    cin >> color;
    
    cout << "Enter a animal"<<endl;
    cin >> anim;
           
    
    
    
    //Process values -> Map inputs to Outputs
    cout <<"Dear Instructor ";//start the mad lib
    cout << teacher;
    cout << ","<<endl;
    
            
            
    cout << "I am sorry that I am unable to turn in my homework at this time. First"<<endl;
    cout << "I ate a rotten ";
    cout << food;      
    cout << " which made me turn ";
    cout << color ;
    cout << " and extremely ill. I"<<endl;
    cout << "came down with a fever of "; 
    cout << numb;     
    cout << ". Next, my ";
    cout << adj ;
    cout << " pet"<<endl;
    cout << anim;
    cout << " must have smelled the remains of the ";
    cout << food ;
    cout << " on my homework,"<<endl;
    cout << "because he ate it. I am currently rewriting my homework and hope you will"<<endl; 
    cout << "accept it late."<<endl; 
    
            
    cout << "Sincerely,"<<endl;
    cout << nme; 
    //Display Output
    
           
            
    
   
    
    
    //Exit Program
    return 0;
}


