#include <iostream>
using namespace std;

double answer1;

int main(){
    double speed; // store the speed of the car
    double fe; // store the frequency of the beams

    fe = 2e10; // the frequency of the beams

    cin >> speed; // input the speed of the car

    answer1 = -((speed/6.685e8 + 1) / (speed/6.685e8 - 1))*fe; // calculate the value of returned frequency 

    cout << "The returned frequency corresponding to " << speed << " mph is " << answer1 << endl; // output the returned frequency of velocity
    
    return 0;    
}
