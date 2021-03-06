//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/09/28
//  FILENAME   : HW01B_B10611035.cpp
//  DESCRIPTION: This is a program to compute the sum and average of three floating-point numbers.
//================================================================================================

#include <iostream>
using namespace std;

    double answer1; // Store the sum of the three numbers in this global variable 
    double answer2; // Store the average of the three numbers in this global variable
    
int main(){
    double a, b, c; // store three input numbers 

    cin >> a >> b >> c; // input the values of three variables

    answer1 = a + b + c; // plus the values of three variables
    answer2 = (a + b + c) / 3.0; // calculate the average of three variables

    cout << "The sum of the three numbers is " << answer1 << "." << endl; // print answer1 
    cout << "The average of the three numbers is " << answer2 << "." << endl; // print answer2

    return 0;
}


