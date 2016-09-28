/* 
   File:  Savitch Chapter 2 Program Project #6 main
   Author: Raj Chipalu
   Created on September 27 , 2016, 10:11 pm
   Purpose: Write a program that will read in the number of hours worked in a 
 * week and the number of dependents as input and will then output the worker’s
 * gross pay, each withholding amount, and the net take-home pay for the week.   
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <cmath>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PAY = 16.78;//pay per hour in dollars
const float SOCIALSC = .06;//Social Security taken out. 
const float FEDTAX = .14;//Federal Tax taken out.
const float STTAX = .05;//State Tax taken out. 
const int   UNIONTX = 10;//Union tax in dollars. 
const int   EXHLTH = 35;//Extra Health Insurance for dependents in dollars.
const float OVERT = 25.17;//overtime pay per hour


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float amt_hrs;//amount of hours worked. 
    float amt_dp;//amount of dependents.
    float gross_p;//total gross pay for a 40 hour week
    float gross_ov;//gross pay including overtime
    float socialr;//Amount of social security withdrawn.
    float socialo;
    float fedo;//AMount from federal reserve drawn. 
    float fedr;
    float stater;//Amount from state tax withdrawn.
    float stateo;
    float netpay_o;//The total net pay. 
    float netpay_r;
    float net_rd;//Net pay including the extra health insurance. 
    float net_od;
    char  ans; 
    
    
    
   //Input values
    
        cout << "Enter the amount of hours worked in a week. "<<endl;
        cin >> amt_hrs;
        cout << "Amount of Dependents  ";
        cin >> amt_dp;
        
    //Process values -> Map inputs to Outputs
    gross_ov = (amt_hrs * 40) + (( amt_hrs -40)*OVERT);//calculate the gross pay. 
    gross_p  = (amt_hrs * 40);
    socialr = gross_p * SOCIALSC;
    socialo = gross_ov * SOCIALSC;
    fedo = gross_ov * FEDTAX;
    fedr = gross_p * FEDTAX;
    stater = gross_p * STTAX;
    stateo = gross_ov * STTAX;
    netpay_r = gross_p - socialr - fedr - stater - UNIONTX;//calculate the net pay.  
    netpay_o = gross_ov - socialo - fedo - stateo - UNIONTX;
    net_rd = gross_p - socialr - fedr- stater - UNIONTX - EXHLTH;//Calculate net pay with Extra Health. 
    net_od = gross_ov - socialo - fedo - stateo - UNIONTX - EXHLTH; 
    
            
    
    //Display Output
          do  
          {  
            if (amt_hrs <= 40)
            {
                cout<< "The total gross pay is $";
                cout<< gross_p<<endl;
                cout<< "Amount withheld for Social Security is $";
                cout<< socialr<<endl;
                cout<< "Amount withheld for Federal Income Tax is $";
                cout<< fedr<<endl;
                cout<< "Amount withheld for State Tax is $";
                cout<< stater<<endl;
                cout<< "Amount withheld for Union Dues $";
                cout<<UNIONTX<<endl;
                        if ( amt_dp >= 3)
                            {       
                                cout<< "Amount withheld for Extra Health Insurance is $";
                                cout<<EXHLTH<<endl;
                                cout<< "The total net pay is $";
                                cout<< net_rd<<endl;
                            }
                        else
                        {
                                cout<<"The total Net pay is $";
                                cout<<netpay_r;
                        }
            }
            if (amt_hrs > 40)
            {
                cout<< "The total gross pay is $";
                cout<< gross_ov<<endl;
                cout<< "Amount withheld for Social Security is $";
                cout<< socialr<<endl;
                cout<< "Amount withheld for Federal Income Tax is $";
                cout<< fedo<<endl;
                cout<< "Amount withheld for State Tax is $";
                cout<< stateo<<endl;
                cout<< "Amount withheld for Union Dues $";
                cout<<UNIONTX<<endl;
                        if ( amt_dp >= 3)
                            {       
                                cout<< "Amount withheld for Extra Health Insurance is $";
                                cout<<EXHLTH<<endl;
                                cout<< "The total net pay is $";
                                cout<< net_od<<endl;
                            }
                        else
                        {
                                cout<<"The total Net pay is $";
                                cout<<netpay_o<<endl;
                         }
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


