#include <iostream>
using namespace std;

double answer1, answer2; 

void swap(double x, double y)
{
    double z;

    z = x;
    x = y;
    y = z;

    answer1 = x;
    answer2 = y;
}   // function receives 2 references
      // These variables are for Autolab grading
int main()
{
    double firstnum, secnum;
    cout << "Please input two numbers: ";
    cin >> firstnum >> secnum;

    cout << endl << "The value stored in firstnum is: " << firstnum << endl;
    cout << "The value stored in secnum is: "<< secnum << "\n\n";
    swap(firstnum, secnum);   // call the function with references
    cout << "The value stored in firstnum is now: " << firstnum << endl;
    cout << "The value stored in secnum is now: " << secnum << endl;
      // Save for Autolab checking
    return 0;
}
