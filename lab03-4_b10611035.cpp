#include <iostream>
#include <cmath>
using namespace std;

int answer1 = 0;

int main()
{
    double a, b, c;
    int judge;
    double root1, root2;

    cout << "This program calculate the root of a\n   quadratic equation of the from \n            2\n          ax + bx + c = 0\n"
         << "Please enter the value of a. b. and c: ";
    cin >> a >> b >> c;

    if(a == 0.0 && b == 0.0)
        cout << "The equation is degenerate and has no roots.\n";

    else if (a == 0.0)
    {
        cout << "The equation has the single root x = " << -c/b << endl;
        answer1 = 1;
    }

    else
    {
        judge = b * b - 4 * a * c;

        if(judge > 0)
        {
            judge = sqrt(judge);
            root1 = (-b + judge)/(2 * a);
            root2 = (-b - judge)/(2 * a);
            cout << "The two real roots are " << root1 << " and " << root2 << endl;
        }

        else if(judge == 0)
            cout << "Both roots are equal to " << -b / (2 * a) << endl;

        else
            cout << "Both roots are imaginary.\n";

        answer1 = 2;
    }

    return 0;
}