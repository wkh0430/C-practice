#include <iostream>
using namespace std;

char answer1;

int main(){
    char code;

    cout << "Enter a specification code: ";
    cin >> code;

    answer1 = code;

    if(code == 'S')
        cout << "The item is space exploration grade." << endl;
    else if(code == 'M')
        cout << "The item is military grade." << endl;
    else if(code == 'C')
        cout << "The item is commercial grade." << endl;
    else if(code == 'T')
        cout << "The item is toy grade." << endl;
    else
        cout << "The invalid code was entered." << endl;

    return 0;
}