#include<bits/stdc++.h>
using namespace std;

double answer1; // Store the smallest value of n that makes the error less than 1.0×10-3

int Fibonnaci(int x) 
{
    if(x == 1 || x == 0) 
    {
        return(x);
    }
    else 
    {
        return( Fibonnaci(x-1) + Fibonnaci(x-2) );
    }
}

int main()
{
    int count;
    double sum = 0;

    for(count = 0; (2 - sum) > 0.001; count++)
    {
        sum += (pow(0.5, count) * Fibonnaci(count));
    }

    answer1 = count;

    return 0;
}