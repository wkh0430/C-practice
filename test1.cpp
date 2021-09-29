//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/09/29
//  FILENAME   : HW01C_B10611035.cpp
//  DESCRIPTION: This is a program to compute the returned frequency of velocity(mph).
//================================================================================================

#include <iostream>
using namespace std;
#include <iomanip> // Header file needed to use stream manipulators
    double answer1; // Store the frequency corresponding to 55 mph in this global variable
    double answer2;
int main(){
    double speed; // store the speed of the car
    double fe; // store the frequency of the beams

    fe = 2e10; // the frequency of the beams

    cin >> speed; // input the speed of the car

    answer1 = -((speed/6.685e8 + 1) / (speed/6.685e8 - 1))*fe; // calculate the value of returned frequency 

    cout << "The returned frequency for " << speed << " mph is " << answer1 << " Hz" << endl; // output the returned frequency of velocity

    cin >> speed; // input the speed of the car

    answer2 = -((speed/6.685e8 + 1) / (speed/6.685e8 - 1))*fe; // calculate the value of returned frequency 

    cout << "The returned frequency for " << speed << " mph is " << answer2 << " Hz" << endl;

    if(answer1 != answer2){
        cout<<"they are different" << endl;
    }
    return 0;
}