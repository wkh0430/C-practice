#include <iostream>
using namespace std;

int answer1;
int answer2;
int answer3;
int answer4;
int answer5;

int main(){
    int number;
    int modulus;
    int number_;

    cout << "Please input a five-digit number: ";
    cin >> number;
    cout << "The five digits are as follows: " << endl;

    number_ = number / 10000;
    number = number % 10000;
    answer1 = number_;
    cout << number_ << "  ";

    number_ = number / 1000;
    number = number % 1000;
    answer2 = number_;
    cout << number_ << "  ";

    number_ = number / 100;
    number = number % 100;
    answer3 = number_;
    cout << number_ << "  ";

    number_ = number / 10;
    number = number % 10;
    answer4 = number_;
    cout << number_ << "  ";

    cout << number << endl;
    answer5 = number;
    
    return 0;
}
