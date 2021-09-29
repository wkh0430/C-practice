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
    double S; //  the stress in lbs/in^2
    double I; // the beam’s rectangular moment of inertia in units of in^4
    double d; // the distance in inches
    double c; // one-half the height in inches
    double b; // the base in inches
    double h; // the height in inches

    cin >> d >> b >> h >> S;

    c = h / 2.0;
    I = (b * h*h*h) / 12.0;

    answer1 = (S * I)/(d * c);

    cout << "The maximum load is " << answer1 <<" lbs" << endl;
}