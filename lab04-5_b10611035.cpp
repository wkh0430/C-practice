#include <bits/stdc++.h>
using namespace std;
int answer1;     // Store the value of n
int main()
{
    int n = 0;

    while (pow(3, n) < 30000)
    {
        n++;
    }

    cout << "The smallest integer of 3 that exceeds 30,000 is " << n << endl;

    answer1 = n;
    return 0;
}

