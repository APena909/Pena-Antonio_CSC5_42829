/* 
 * Author: Antonio Peña
 * Purpose: Create a Mad Lib letter.
 * April 4th, 2016
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string insName;//Instructor's name
    string youName;//Your name
    string food;
    int temp;//Number between 100 and 120
    string adj;//Adjective
    string color;
    string animal;
    
    //Intro Message
    cout<<"This program will create a Mad Lib letter using your "
            "user-generated inputs!"<<endl;
    
    //Request Inputs
    cout<<"Let's start with a few questions: "<<endl;
    
    cout<<"What is the first or last name of your instructor?"<<endl;
    cin>>insName;
    
    cout<<"What is your name?"<<endl;
    cin>>youName;
    
    cout<<"What is your favorite food?"<<endl;
    cin>>food;
    
    cout<<"Enter a number between 100 and 120: "<<endl;
    cin>>temp;
    
    cout<<"Type in an adjective: "<<endl;
    cin>>adj;
    
    cout<<"What is your favorite color?"<<endl;
    cin>>color;
    
    cout<<"Lastly, what is your favorite animal?"<<endl;
    cin>>animal;
    cout<<endl;
    
    //Output the Mad Lib letter
    cout<<"Dear Instructor "<<insName<<","<<endl;
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework "
            "at this time."<<endl;
    cout<<"First, I ate a rotten "<<food<<", which made me turn "<<color<<" and"
            " extremely ill."<<endl;
    cout<<"I came down with a fever of "<<temp<<"."<<endl;
    cout<<"Next, my "<<adj<<" pet "<<animal<<" must have smelled the remains"
            " of the "<<food<<" on my "<<endl;
    cout<<"homework because he ate it."<<endl;
    cout<<"I am currently rewriting my homework and hope you will "
            "accept it late."<<endl;
    cout<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<youName<<endl;
    
    
    //Exit Stage Right           
    return 0;
}

