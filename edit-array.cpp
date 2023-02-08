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

int main() {
        // creating the array and variables
    const int CAPACITY = 10;    // the CAPACITY is the the amount of elements the array can hold and it is set with "const"
    int myData[CAPACITY];    // the array myData holds 10 elements (CAPACITY)

        // creating a for loop to fill all of the array's elements with value 1
    for (int i = 0; i < CAPACITY; i++) {
        myData[i] = 1;
    }

    int index, value;
    do {
            // Print the array
        cout << "myData: [";
        for (int i = 0; i < CAPACITY; i++) {
            cout << myData[index] << endl;
        }
       // cout << "]" << endl;

            // Get the new index and value from theuser
        cout << "Enter a cell index. " << endl;
        cin >> index;
        cout << "Enter its new value. " << endl;
        cin >> value;

            // Update the array at the index i if i is valid
        if (index >= 0 && index < CAPACITY) {
            myData[index] = value;
        }
    } while (index >= 0 && index < CAPACITY);

    return 0;
}










// #include <iostream>
// using namespace std;

// int main()
// {
//         // creating the array and variables
//     const int CAPACITY = 10;    // the CAPACITY is the the amount of elements the array can hold and it is set with "const"
//     double myData[CAPACITY];    // the array myData holds 10 elements (CAPACITY)

//         // creating a for loop to fill all of the array's elements with value 1
//     for (int i = 0; i < CAPACITY; i++){
//         myData[i]=1;
//     }
//         // creating a for loop to print the value of each element in the array 
//     for (int i = 0; i < CAPACITY; i++){
//         cout << myData[9] << endl;
//     }

//         // asking the user to input the cell index i, and its new value v
    
//     int index;
//     double value;

//     while(true){
//         cout << "Please choose a number for the index." << endl;
//         cin >> index;
//         cout << "Please enter a new number as the value." << endl;
//         cin >> value;
//         if(index >= 0 && index < 10){
//             myData[index] = value;
//         }
//         else{
//             break;
//         }

//         for (int i = 0; i < CAPACITY; i++){
//             cout << myData[index] << endl;
//         }


//     }



//     // double input;
//     // cout << "Please give me a cell number from 1 to 10" << endl;
//     // while(cin >> size){
//     //     if (size <= CAPACITY){
//     //         cout << "Please give me a value" << endl;
//     //         cin >> input;
//     //         myData[size] = input;
//     //         for (int i = 0; i < CAPACITY; i++){
//     //         cout << myData[9] << endl;
//     //         }
//     //     }
//     // }

//     return 0;


// }