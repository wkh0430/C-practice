#include <iostream>
#include <iomanip>
using namespace std;
double answer1;     // Store the value of the number at the end of the for statement

int main()
{

    const int MAXNUMS = 10;
    int num;

    cout << "NUMBER    SQUARE    CUBE\n"
         << "------    ------    ----\n";

    for (num = 1; num <= MAXNUMS; num++)
        cout << setw(3) << num << "        "
        << setw(3) << num * num << "      "
        << setw(4) << num * num * num << endl;
    answer1 = num;           // Save for Autolab checking
    return 0;
}
