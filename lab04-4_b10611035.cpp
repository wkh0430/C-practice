#include <bits/stdc++.h>
using namespace std;

double answer1;     // Store the average grade

int main()
{
    double grade;
    int count;
    double total;
    double average;

    do
    {
        cout << "\nEnter a grade (enter 999 to exit): ";
        cin >> grade;
        if(grade == 999)
            break;
        else if(grade < 0 || grade > 100)
            cout << "An invalid grade has been entered! " << "Please reenter a valid grade." << endl;
        else 
        {
            count++;
            total = total + grade;
        }
    } while (1);

	    average = total/count;
    cout << "\nThe average of the valid grades entered is: " << (total / count) << endl;
    answer1 = average;           // Save for Autolab checking

}