#include <iostream>
using namespace std;

char answer1;

int main(){
    char code;

    cout << "Enter a specification code: ";
    cin >> code;

    answer1 = code;

    if (code == 'S' || code == 's')
        cout << "The item is space exploration grade." << endl;

    else if (code == 'M' || code == 'm')
        cout << "The item is military grade." << endl;

    else if (code == 'C' || code == 'c')
        cout << "The item is commercial grade." << endl;

    else if (code == 'T' || code == 't')
        cout << "The item is toy grade." << endl;

    else
        cout << "An invalid code was entered." << endl;

    return 0;
}