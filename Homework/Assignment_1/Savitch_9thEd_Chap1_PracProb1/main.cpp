/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * March 28, 2016
 * Purpose: Copy and successfully compile code from Display 1.8.
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
    int numPods;//Number of pods
    int peasPod;//Peas per pod
    int total;//Total number of peas
    
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>numPods;
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peasPod;
    
    //Calculate the inputs
    total=numPods*peasPod;
    
    //Output the results
    cout<<"If you have ";
    cout<<numPods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peasPod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<total;
    cout<<" peas in all the pods.\n";
    
    //Exit Stage Right!
    return 0;
}

