#include <iostream>
using namespace std;

double answer1;

int main(){
    double v, constant, fr, fe;

    constant = 6.685e8;
    fe = 2e10;
    fr = 2.0000004e10;

    v = constant * (fr - fe)/(fr + fe);

    cout << "The speed is " << v << " miles/hour" << endl;

    answer1 = v;

    return 0;    
}
