#include<bits/stdc++.h>
using namespace std;

int answer1; // Store the largest prime number less than 1000 in this global variable

int prime_judge(int num)
{
    int remainder;
    int count;
    int result = 1;

    for(count = 2; count <= sqrt(num); count++)
    {
        remainder = num % count;
        if(remainder == 0)
        {
            result = 0;
        }
    }

    if(count > sqrt(num))
    {

    }
}

int main()
{
    return 0;
}