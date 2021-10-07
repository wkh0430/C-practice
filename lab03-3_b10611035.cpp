#include <iostream>
using namespace std;

int answer1;
double answer2;

int main(){
    int opselect;
    double a, b;
    double ans;

    cout << "Please type in two numbers: ";
    cin >> a >> b;
    cout << "Enter a select code:\n        1 for addition\n        2 for multiplication\n        3 for division : ";
    cin >> opselect;

    switch(opselect){
        case 1:
            ans = a + b;
            cout << "The sum of the numbers entered is " << ans;

            break;
        case 2:
            ans = a * b;
            cout << "The product of the numbers entered is " << ans;

            break;
        case 3:
            ans = a / b;
            cout << "The first number divided by the second is " << ans;

            break;
    }

    answer1 = opselect;
    answer2 = ans;

    return 0;
}
