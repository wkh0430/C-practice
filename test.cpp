#include <iostream>
#include <iomanip> // Header file needed to use stream manipulators
using namespace std;

int main(){
    double a = 3.0;
    float b = 2.0;
    cout << fixed << setprecision(1) << a << b;

    return 0;
    
}