#include <iostream>
using namespace std;
double answer1, answer2;        // These variables are for Autolab submission check
template <class T>  // template prefix
void swap_funct(T &a,T &b)
{
// Write your code here to swap two variables
    T c;

    c = a;
    a = b;
    b = c;

    return;
}

int main()
{
    char a1 = 'X', b1 = 'Y';
    int a2 = 10, b2 = 20;
    float a3 = 70.1f, b3 = 35.2f;
    double a4 = 23.23236, b4 = 11.02345;

//
// Write your code here to output the results before and after swapping
//
    swap_funct(a1, b1);
    swap_funct(a2, b2);
    swap_funct(a3, b3);
    swap_funct(a4, b4);

    answer1 = a4;
    answer2 = b4;

    return 0;
}
