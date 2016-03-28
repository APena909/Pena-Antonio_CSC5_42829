/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 28, 2016
 * Purpose: Enter 2 integers and output their sum and product.
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
    int int1;//Integer 1
    int int2;//Integer 2
    int totalS;//Sum total
    int totalP;//Product total
    
    //Welcome Message
    cout<<"Hello!"<<endl;
    cout<<"This program will provide the sum and product "
            "of any 2 integers."<<endl;
    
    //Assign Variable Values
    cout<<"Enter the first integer: ";
        cin>>int1;
    cout<<"Now, enter the second integer: ";
        cin>>int2;
        
    //Calculate the sum and product
    totalS=int1+int2;
    totalP=int1*int2;
    
    //Output the results
    cout<<endl;
    cout<<"The sum of "<<int1<<" and "<<int2<<" is "<<totalS<<endl;
    cout<<"The product of "<<int1<<" and "<<int2<<" is "<<totalP<<endl;
    
    //Goodbye Message
    cout<<endl;
    cout<<"Good-bye"<<endl;
    
    //Exit Stage Right!
    return 0;
}

