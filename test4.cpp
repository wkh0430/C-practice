#include <iostream>
using namespace std;

int main()
{
    char num[4];
    int a, b, c, d;

    cin >> num;

    a = int(num[0] - '0');

    a += 1;
    cout << a;
    return 0;
}