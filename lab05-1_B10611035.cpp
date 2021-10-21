#include <bits/stdc++.h>
using namespace std;

int findMax(int x, int y)
{                  // start of function body
    int maxnum;      // variable declaration

    if (x >= y)      // find the maximum number
        maxnum = x;
    else
        maxnum = y;

    cout << "\nThe maximum of the two numbers is " << maxnum << endl;

    return maxnum;
}  // end of function body and end of function

int answer1;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    answer1 = findMax(num1, num2);

    return 0;
}