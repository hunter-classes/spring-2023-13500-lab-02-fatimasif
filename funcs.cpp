/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: funcs.cpp, task B, lab-02

In funcs.cpp write a void function named print_interval(int L,int U) that will accept two integer 
parameters and will print the output as specified in the main lab. Test this function by calling 
it from the main function which should be defined in main.cpp.

*/

#include <iostream>

        // creating void function that takes in two integer parameters and prints out their range
    void print_interval(int L, int U){

        for(int i = L; i < U; i++){
            std::cout << i << "\n";
        }

    }


