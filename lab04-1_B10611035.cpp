#include <iostream>
#include <iomanip>

using namespace std;
double answer1;           // This variable is for Autolab grading
int main()
{
    const int MAXNUMS = 4;
    int count;
    double num, total;
    cout << "\nThis program will ask you to enter " << MAXNUMS << " numbers.\n";
    count = 1;
    total = 0;
    while (count <= MAXNUMS)
    {
        cout << "\nEnter a number: ";
        cin  >> num;
        total = total + num;
        cout << "The total is now " << setprecision(7) << total;
        count++;
    }
    cout << "\n\nThe final total is " << total << endl;
    answer1 = total;		// For Autolab submission check
    return 0;
}