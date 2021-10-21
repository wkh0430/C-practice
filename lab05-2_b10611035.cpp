#include <iostream>
using namespace std;

double tempvert(double Fahrenheit)
{
    double Celsius;

    Celsius = (Fahrenheit - 32)*5/9;

    return Celsius;
} // function prototype

double answer1;        
   // This variable is for Autolab grading
int main()
{
    const int CONVERTS = 4;  // number of conversions to be made
    int count;           
    double fahren;

    for(count = 1; count <= CONVERTS; count++)
    {
        cout << "\nEnter a Fahrenheit temperature: ";
        cin  >> fahren;
        cout << "The Celsius equivalent is " << tempvert(fahren) << endl;
    }
     answer1 = tempvert(fahren);
    return 0;
	          // Save the last Celsius temperature for Autolab checking
}
