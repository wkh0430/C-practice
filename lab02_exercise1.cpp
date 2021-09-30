#include <iostream>
using namespace std;

double answer1, answer2;

int main()
{   
    double grade1;  
    double grade2;  
    double total; 
    double average; 

    grade1 = 85.5;
    grade2 = 97.0;

    total = grade1 + grade2;
    average = total/2.0; 

    cout << "The average grade is " << average << endl;

    answer1 = total;
    answer2 = average;    

    return 0;
}

