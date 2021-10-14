#include <bits/stdc++.h>
using namespace std;

double answer1;     // Store the average grade of the last student

int main()
{
    double grade;
    double sum;
    double avg;
    int count_s;
    int count_g;

    for(count_s = 0; count_s < 4; count_s ++)
    {
        sum = 0;

        for(count_g = 0; count_g < 3; count_g ++)
        {
            cout << "Enter an examination grade of this student: ";
            cin >> grade;

            sum += grade;
        }

        avg = sum / 3;
            
        cout << "\nThe average for student " << (count_s + 1) << " is " << avg << "\n";
    }

    answer1 = avg;

    return 0;
}