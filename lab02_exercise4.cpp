#include <iostream>
using namespace std;

int main(){
    int number;
    int number_;

    cout << "Please input a five-digit number: ";
    cin >> number;
    cout << "The five digits are as follows: " << endl;


    number_ = number / 10000;
    number = number % 10000;
    cout << number_ << "   ";

    number_ = number / 1000;
    number = number % 1000;
    cout << number_ << "   ";

    number_ = number / 100;
    number = number % 100;
    cout << number_ << "   ";

    number_ = number / 10;
    number = number % 10;
    cout << number_ << "   ";

    cout << number << endl;
    
    return 0;
}
