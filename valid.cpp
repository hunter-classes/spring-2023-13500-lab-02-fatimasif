/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: valid.cpp, task A, lab-02

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100.
If the number is out of range, the program should keep asking to re-enter until 
a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>
using namespace std;

    // using a boolean function to check if the number that the user inputted is in the range 0 < n < 100
bool valid_value(int integer){
    if(0 >= integer || integer >= 100){   // is the integer less than 0 or is it greater than 100?
        return true;
    }
    else{
        return false;
    }
}

int main()
{
        // creating variables
    int integer;        
    double squared;     // double holds larger values

    cout << "Please input an integer between the range 0 < n < 100." << endl;
    cin >> integer;     // taking in user input 

        // using a while loop to check if the users input is in the range or not
        // if the input is not in the range then the loop will continue to run
    while(valid_value(integer)){
        cout << "Please input a number in the range." << endl;
        cin >> integer;
    }
        // mathematical equation to square the number the user inputted if it is in the range
    squared = integer * integer;
    cout << "The number you input is " << integer << " and when squared it is " << squared << "." << endl;

return 0;
}