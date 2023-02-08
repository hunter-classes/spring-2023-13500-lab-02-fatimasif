/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: edit-array.cpp, task C, lab-02

Write a program edit-array.cpp that creates an array of 10 integers,
and provides the user with an interface to edit any of its elements. 
Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, 
and go back to the step 3. Otherwise, if index i is out of range, the program exits.
*/

#include <iostream>
using namespace std;

const int capacity = 10;    // the CAPACITY is the the amount of elements the array can hold and it is set with "const"

int main() {
        // creating the array and variables
    int myData[capacity];    // the array myData holds 10 elements (CAPACITY)

        // creating a for loop to fill all of the array's elements with value 1
    for (int i = 0; i < capacity; i++) {
        myData[i] = 1;
    }

        // creating variables for the index and value the user will input
    int index;
    int value;
        // creating a do while loop
    do {
            // creating a for loop to print the value of each element in the array 
        for (int i = 0; i < capacity; i++) {
            cout << myData[i] << endl;
        }

            // get the index and value from user
        cout << "Input index: " << endl; 
        cin >> index;
        cout << "Input value: " << endl;
        cin >> value;

            // use an if statement to update the array at index if the index is valid
        if (index >= 0 && index < capacity) {
            cout << "The new array is: " << endl;
            myData[index] = value;
        }
    } while (index >= 0 && index < capacity);   // continue until the index no longer works

    return 0;
}
