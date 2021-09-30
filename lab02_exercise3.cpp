#include <iostream>
using namespace std;

double answer1;

int main()
{
    double Celcius;
    double Fahrenheit;

    cout << "Please input the Fahrenheit degrees: ";
    cin >> Fahrenheit;

    Celcius = 5.0/9.0*(Fahrenheit - 32.0);

    cout << "For a Fahrenheit temperature of " << Fahrenheit << " degrees" << endl;
	cout << "  the equivalent Celcius temperature is " << Celcius << " degrees";

    answer1 = Celcius;

    return 0;
}

