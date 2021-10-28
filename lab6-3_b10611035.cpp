#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2) 
{
    int result;

    while(num1 * num2 != 0)
    {
        if(num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }

    if(num1 == 0)
        result = num2;
    else
        result = num1;

    return result;
}

int answer1;       // Store the GCD of the two input numbers


int main()
{
    int a, b;

    cin >> a >> b;

    answer1 = gcd(a, b);

    cout << answer1;
    return 0;
}