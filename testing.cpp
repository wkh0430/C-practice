#include <iostream>
#include <iomanip> // Header file needed to use stream manipulators
using namespace std;

int main(){
    double a = 2.1234567e10;

    cout << a << "\n";
/*    cout << setw(5) << setprecision(7) << a << endl;
    cout << setw(0) << setprecision(2) << a << "\n";
    cout << setw(5) << setprecision(0) << a << "\n";
    cout << fixed << a << "\n";
    cout << setprecision(7) << a << "\n";
    cout << setprecision(2) << a << "\n";
*/   
/*
    cout << setprecision(0) << a << "\n";
    cout << setprecision(1) << a << "\n";
    cout << setprecision(2) << a << "\n";
    cout << setprecision(3) << a << "\n";
    cout << setprecision(4) << a << "\n";
    cout << setprecision(5) << a << "\n";
    cout << setprecision(6) << a << "\n";
*/    
    cout << fixed << a << "\n";
    return 0;
}