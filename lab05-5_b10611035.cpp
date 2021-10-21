#include <bits/stdc++.h>
using namespace std;

double answer1, answer2;

const double pi = M_PI;

double circle_radius(double c) 
{
    double r;

    r = c / (2 * pi);

    return r;
}

void circle_area(double r, double c) 
{
    double a;

    a = pi * r * r;

    return;
}

int main()
{
    double a, r, c;

    cin >> c;

    r = circle_radius(c);
    a = circle_area(r, c);

    answer1 = r;
    answer2 = a;

    return 0;
}