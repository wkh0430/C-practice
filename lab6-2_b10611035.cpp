#include <bits/stdc++.h>
using namespace std;

double answer1;     // Store the value of the 20th term of the Fibonacci series

int Fibonnaci(int x) 
{
    if((x==1)||(x==0)) 
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
    answer1 = Fibonnaci(19);

    return 0; 

}