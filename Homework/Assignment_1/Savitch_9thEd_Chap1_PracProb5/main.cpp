/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 28, 2016
 * Purpose: Modify Prac. Prob. 1 so that it calculates total length of fence.
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
    int height;//Height in feet
    int width;//Width in feet
    int total;//Total length in feet 
    
    //Welcome Message
    cout<<"Hello!"<<endl;
    
    //Assign Variables
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the height of the rectangular area you wish to enclose "
            "with fence(in feet):\n";
    cin>>height;
    cout<<"Now, enter the width:\n";
    cin>>width;
    
    //Calculate the inputs
    total=4*(width*height);
    
    //Output the results
    cout<<"If you have a rectangular area that measures ";
    cout<<width;
    cout<<"ft wide ";
    cout<<"and ";
    cout<<height;
    cout<<"ft tall, then\n";
    cout<<"the total length of the fence will be ";
    cout<<total;
    cout<<"ft.\n";
    cout<<endl;
    
    //Goodbye Message
    cout<<"Good-bye"<<endl;
    
    //Exit Stage Right!
    return 0;
}

