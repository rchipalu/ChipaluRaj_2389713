/* 
   File:  main
   Author: Raj Chipalu
   Created on October  , 2016, pm
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime> 

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;  //choice from menu
    
     
    // Prompt for problem for user input
    cout<<"1. Type 1 for problem A"<<endl;
    cout<<"2. Type 2 for the rock paper scissors game"<<endl;
    cout<<"3. Type 3 for problem C"<<endl;
    cout<<"4. Type 4 for problem D"<<endl;
    cout<<"5. Type 5 for problem E"<<endl;
    cout<<"6. Type 6 for problem F"<<endl;
    cout<<"7. Type 7 for problem G"<<endl;
    cout<<"8. Type 8 for problem H"<<endl;
    cout<<"9. Type 9 for problem I"<<endl;
    cout<<"10.Type10 for problem J"<<endl;
    cin>>menuItm;
    
    
    
    //Go to the Problem
    switch(menuItm){
        case 1:{
            cout<<"Inside Problem A"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }

        case 2:{
            cout<<"this is the rock paper scisssors game"<<endl;
            //Set random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declaration of Variables
                char computr;    //Computers choice
                char rPlay;      //Our rock/paper/scissors

                //Input Computer values
                computr=rand()%4+80;
                while(computr=='Q'){
                    computr=rand()%4+80;
                }

                //Input our rock,paper,scissors
                cout<<"Input your choice R-Rock,P-Paper,S-Scissors"<<endl;
                cin>>rPlay;
                switch(rPlay){
                    case 'r':
                    case 'R':rPlay='R';break;
                    case 's':
                    case 'S':rPlay='S';break;
                    default: rPlay='P';break;
                }

                //Display Output
                cout<<"The computer generate a "<<computr<<endl;
                cout<<"The player type in a    "<<rPlay<<endl;

                //Determine the winer and display
                if(computr==rPlay){
                    cout<<"You both tied each other"<<endl;
                }else if(computr=='P'){
                    if(rPlay=='S')cout<<"The player wins"<<endl;
                    else cout<<"The computer wins"<<endl;
                }else if(computr=='S'){
                    if(rPlay=='R')cout<<"The player wins"<<endl;
                    else cout<<"The computer wins"<<endl;
                }else{
                    if(rPlay=='P')cout<<"The player wins"<<endl;
                    else cout<<"The computer wins"<<endl;
                }
                           break;
                            }        
        
        
        case 3:{
             cout<<"Inside Problem C"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }        
        
        case 4:{
             cout<<"Inside Problem D"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }        
        
        
        case 5:{
             cout<<"Inside Problem E"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
        
        case 6:{
             cout<<"Inside Problem F"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
                
        
        case 7:{
             cout<<"Inside Problem G"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
                        
        
        case 8:{
             cout<<"Inside Problem H"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
                                
        case 9:{
             cout<<"Inside Problem I"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
        
        case 10:{
             cout<<"Inside Problem J"<<endl;
               //Input values
                //Process values -> Map inputs to Outputs
                 //Display Output
               break;
                }
    
    
    
    
    
    
    
        }     

    
    //Exit Program
    return 0;
    }