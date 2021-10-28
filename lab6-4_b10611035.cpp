#include<bits/stdc++.h>
using namespace std;

int answer1;     // Store the value of the maximum palindromic number below 104
int answer2;     // Store the total number of palindromic numbers below 104

int reverseDigit(int num) 
{
    int rem;
    int result = 0;

    while(num!=0)    
    {
        rem = num % 10;      
        result = result * 10 + rem;    
        num /= 10;    
    }    
  
    return result;
}

int isPalindrome(int num)
{
    if(reverseDigit(num) == num)
        return 1;

    else    
        return 0;
}

int main()
{
    int count;
    int x = 0;

    for(count = 0; count < 10000; count++)
    {
        if(isPalindrome(count) == 1)
        {
            x++;
            answer1 = count;
        }
        else;
    }
    answer2 = x;
    cout<<x;
    return 0;
}