//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/10/17
//  FILENAME   : HW02D_B10611035.cpp
//  DESCRIPTION: This is a program to calculate the score of a poker game.
//================================================================================================

#include <bits/stdc++.h>
using namespace std;

int answer1; // Store the total value of the hand 
int answer2; // Store the sum of the three input integers

int main()
{
    int card1, card2, card3;
    int sum_real, sum_value;

    cin >> card1 >> card2 >> card3;

    answer2 = card1 + card2 + card3;

    if (card1 > 10)
        card1 = 10;
    if (card2 > 10)
        card2 = 10;
    if (card3 > 10)
        card3 = 10;

    sum_real = card1 + card2 + card3;
    

    if(sum_real > 21)
    {
        sum_value = sum_real;

        cout << "The total value of the hand is " << sum_value << " (bust)" << endl;
    }

    else if((card1 == 1 || card2 == 1 || card3 == 1) && (sum_real + 10) <= 21)
    {
        sum_value = sum_real + 10;

        cout << "The total value of the hand is " << sum_value << endl;
    }

    else
    {
        sum_value = sum_real;

        cout << "The total value of the hand is " << sum_value << endl;
    }

    answer1 = sum_value;

    return 0;
}