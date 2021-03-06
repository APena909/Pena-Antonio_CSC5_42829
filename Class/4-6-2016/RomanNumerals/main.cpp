/* 
 * File:   main.cpp
 * Author: Antonio Peña
 * Purpose: Roman Numeral conversion from 1000 to 3000
 * Created on April 6, 2016, 8:16 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Loop on all numbers from 1000 to 3000
    for(unsigned short numb=1000;numb<=3000;numb++){
    
        //Output the Input
        unsigned short number=numb;
        //cout<<"Convert "<<number<<" to Roman Numerals "<<endl;
        cout<<number<<" = ";

        //Determine how many 1000's for Roman Numeral conversion
        unsigned char n1000s=(number-number%1000)/1000;

        //Output the Results for 1000's
        switch(n1000s){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }

        //Determine how many 100's for Roman Numeral conversion
        number-=(n1000s*1000);//Remove the 4th digit
        unsigned char n100s=(number-number%100)/100;

        //Output the Results for 100's
        switch(n100s){
            case 9:cout<<"CM";break;
            case 8:cout<<"DCCC";break;
            case 7:cout<<"DCC";break;
            case 6:cout<<"DC";break;
            case 5:cout<<'D';break;
            case 4:cout<<"CD";break;
            case 3:cout<<'C';
            case 2:cout<<'C';
            case 1:cout<<'C';
        }

        //Determine how many 10's for Roman Numeral conversion
        number-=(n100s*100);//Remove the 3rd Digit
        unsigned char n10s=(number-number%10)/10;

        //Output the Results for 10's
        switch(n10s){
            case 9:cout<<"XC";break;
            case 8:cout<<"LXXX";break;
            case 7:cout<<"LXX";break;
            case 6:cout<<"LX";break;
            case 5:cout<<'L';break;
            case 4:cout<<"XL";break;
            case 3:cout<<'X';
            case 2:cout<<'X';
            case 1:cout<<'X';
        }

        //Determine how many 1's for Roman Numeral conversion
        number-=(n10s*10);//Remove the 2nd Digit
        unsigned char n1s=(number-number%1)/1;

        //Output the Results for 1's
        switch(n1s){
            case 9:cout<<"IX";break;
            case 8:cout<<"VIII";break;
            case 7:cout<<"VII";break;
            case 6:cout<<"VI";break;
            case 5:cout<<'V';break;
            case 4:cout<<"IV";break;
            case 3:cout<<'I';
            case 2:cout<<'I';
            case 1:cout<<'I';
                }
        cout<<endl;
    }//Exit for-loop
    
    //Exit Stage Right
    return 0;
}

