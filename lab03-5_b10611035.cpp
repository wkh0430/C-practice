#include <iostream>
using namespace std;

int answer1;
int answer2;

int main()
{
    int num_1, num_2, num_3;
    int max, medium, min;

    cout << "Enter three numbers: ";
    cin >> num_1 >> num_2 >> num_3;
    
    if(num_1 > num_2)
    {
        max = num_1;
        min = num_2;
    }

    else
    {
        max = num_2;
        min = num_1;
    }

    if (num_3 > max)
    {
        max = num_3;
        medium = num_1;
    }

    else if (num_3 < max && num_3 > min)
        medium = num_3;

    else
    {
        medium = min;
        min = num_3;
    }

    cout << "The three numbers in decending order: " << max << " " << medium << " " << min << endl;

    answer1 = max;
    answer2 = min;

    return 0;
}