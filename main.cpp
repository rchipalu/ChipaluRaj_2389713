/* 
   File:   main
   Author: Raj Chipalu
   Created on September 12, 2016, 9:41 AM
   Purpose: Big C 
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
    char s=' ';//The space character
    char c;  //Character used to create big C
    //Input values
    cout<<"What character would you like to use to make a Big C, input\n";
    cin>>c;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<s<<s<<c<<c<<c<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<c<<s<<s<<s<<s<<endl;
    cout<<s<<c<<s<<s<<c<<endl;
    cout<<s<<s<<c<<c<<c<<endl;

    //Exit Program
    return 0;
}
