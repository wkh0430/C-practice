//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/09/29
//  FILENAME   : HW01D_B10611035.cpp
//  DESCRIPTION: This is a program to compute the maximum load of a beam.
//================================================================================================

#include <iostream>
using namespace std;

double answer1; // Store the value of the maximum load in lbs in this global variable

int main(){
    double L; // the maximumn load 
    double S; // the stress in lbs/in^2
    double I; // the beam’s rectangular moment of inertia in units of in^4
    double d; // the distance in inches
    double c; // one-half the height in inches
    double base; // the base in inches
    double height; // the height in inches

    d = 8.0 * 12.0; // 1 foot equals to 12 inches 
    base = 2.0; // the value of base is 2
    height = 4.0; // the value of height is 4
    S = 3000.0; // the value of stress is 3000

    c = height / 2.0; // calculating one-half the height in inches of the symmetrical beam 
    I = (base * height*height*height) / 12.0; // calculating the beam’s rectangular moment of inertia in units of in^4

    L = (S * I)/(d * c); //  calculating the maximum weight in lbs of the load placed on the beam

    cout << "The maximum load is " << L <<" lbs." << endl; // output the the maximum weight in lbs of the load placed on the beam

    answer1 = L;

    return 0;
}
    