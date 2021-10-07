#include <iostream>
#include <cmath>
using namespace std;

double answer1 = 0.0;     // Store the value of circle area;

int main()
{
    double radius;
    const double pi = 3.1416;

    cout << "Please type in the radius: ";
    cin >> radius;

    if(radius >= 0.0)
    {
        cout << "The area of this circle is " << 3.1416*pow(radius, 2) << endl;
        answer1 = pi * pow(radius, 2);
    }
    else  
        cout << "A negative radius is invalid" << endl;

    return 0;
}