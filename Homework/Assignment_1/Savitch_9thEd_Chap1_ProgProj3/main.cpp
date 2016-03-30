/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 28, 2016
 * Purpose: Input the number of coins and output the exact monetary value
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float quartrs=0.25;//Quarter value
    int   numQuart;//# of Quarters
    float dimes=0.10;//Dime value
    int   numDime;//# of Dimes
    float nickels=0.05;//Nickel value
    int   numNick;//# of Nickels
    float total;//Total Monetary Value
    
    //Ask for inputs
    cout<<"Input the number of coins to calculate the total monetary value:"<<endl;
    cout<<"Quarters: ";
    cin>>numQuart;
    cout<<"Nickels: ";
    cin>>numNick;
    cout<<"Dimes: ";
    cin>>numDime;
    cout<<""<<endl;
    
    //Calculate Total Monetary Value
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    total=(numQuart*quartrs)+(numDime*dimes)+(numNick*nickels);
    
    //Output the results
    cout<<"If you had "<<numQuart<<" Quarter(s),"<<endl;
    cout<<numNick<<" Nickel(s), and "<<numDime<<" Dime(s),"<<endl;
    cout<<"Your Total would be: $"<<total<<endl;
    
    
    //Exit Stage Right!
    return 0;
}

