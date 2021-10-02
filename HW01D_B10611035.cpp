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

    d = 8.0;
    base = 2.0;
    height = 4.0;
    S = 3000.0;

    c = height / 2.0;
    I = (base * height*height*height) / 12.0;

    L = (S * I)/(d * c);

    cout << "The maximum load is " << L <<" lbs." << endl;

    answer1 = L;

    cout << answer1;

    return 0;
}
    