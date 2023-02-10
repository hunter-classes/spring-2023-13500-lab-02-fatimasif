/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: fibonacci.cpp, task D, lab-02

Write a program fibonacci.cpp, which uses an array of ints to compute and
print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

    // creating a constant value for the array 
const int capacity = 60;

int main()
{
        // make an array
    int fib[capacity];
        // first two terms are given
    fib[0] = 0;
    fib[1] = 1;
        // use a for loop to go through each element in the array
    for(int i = 2; i < capacity; i++){
       fib[i] = fib[i-1] + fib[i-2];    // and all the following ones can be computed iteratively 
    }
        // print the fibonacci numbers 
    std::cout << "The fibonacci numbers are:" << "\n";
    for(int i = 0; i < capacity; i++){  // use a for loop to go through the array 
        std::cout << fib[i] << "\n";
    }

    return 0;
    
}