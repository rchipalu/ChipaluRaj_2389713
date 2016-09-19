/* 
   File:  Savitch Chapter 1 Practice program #1 main
   Author: Raj Chipalu
   Created on September 18 , 2016, 9:41 AM
   Purpose: Determine number of peas in all pods. 
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
    int number_of_pods, peas_per_pod, total_peas;
    //Input values
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //Process values -> Map inputs to Outputs
    total_peas = number_of_pods * peas_per_pod;
    
    //Display Output
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all pods.\n";

    //Exit Program
    return 0;
}