/* 
   File:  Savitch Chapter 1 Practice program #2 main
   Author: Raj Chipalu
   Created on September 18 , 2016, 3:45 pm
   Purpose: Getting code from problem #1 to say "Hello" and "Goodbye" 
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
    int num_pod, pea_pod, tot_pea;//Variables to be used
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> num_pod;//amount of pods the user has
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> pea_pod;//amount of peas user has in one pod. 
    
    //Process values -> Map inputs to Outputs
    tot_pea = num_pod * pea_pod;//calculation for the total amount of peas
    
    //Display Output
    cout << "Hello\n";
    cout << "If you have ";
    cout << num_pod;
    cout << " pea pods\n";
    cout << "and ";
    cout << pea_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << tot_pea;
    cout << " peas in all pods.\n";
    cout << "Goodbye\n";

    //Exit Program
    return 0;
}