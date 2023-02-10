/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: main.cpp, task B, lab-02

In funcs.cpp write a void function named print_interval(int L,int U) that will accept two integer 
parameters and will print the output as specified in the main lab. Test this function by calling 
it from the main function which should be defined in main.cpp.

Make sure to include sufficient tests to from main to show that this works.
The program for this task should not ask for any keyboard input. The input test values should be hard coded in the program.
*/

#include <iostream>
    // including the header file
#include "funcs.h"

    // testing out the function using different values that are hard coded
int main(){
    int test1 = print_interval(1, 5);
    std::cout << test1 << "\n";

    int test2 = print_interval(6, 10);
    std::cout << test2 << '\n';

    int test3 = print_interval(11   , 15);
    std::cout << test3 << '\n';

    return 0;
}