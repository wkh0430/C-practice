//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/10/17
//  FILENAME   : HW02C_B10611035.cpp
//  DESCRIPTION: This is a program to calculate the score of a bowling ball game.
//================================================================================================

#include <bits/stdc++.h>
using namespace std;

int answer1; // Store the score of the three throws 
int answer2 = 1; // Set this number to 1 if correctly input; otherwise set this number to 0

int main()
{
    int score1; // the score of first throw
    int score2; // the score of second throw
    int score3; // the score of third throw
    int total; 

    cin >> score1 >> score2 >> score3; // input three throw

    if(score1 == 10)
    {
        if(score2 == 10)
        {
            if(0 <= score3 && score3 <= 10)
            {
                total = score1 + score2 + score3;

                cout << "The score is " << total << "(three strikes)" << endl;

                answer1 = total;
            }

            else
            {
                cout << "Erroneous input!" << endl;

                answer2 = 0;
            }
        }

        else if(0 <= score2 && score2 < 10)
        {
            if(0 <= (score2 + score3) && (score2 + score3) <= 10 && 0 <= score3 && score3 <= 10)
            {
                total = score1 + score2 + score3;

                cout << "The score is " << total << "(a strike)" << endl;

                answer1 = total;
            }

            else
            {
                cout << "Erroneous input!" << endl;

                answer2 = 0;
            }
        }

        else
        {
            cout << "Erroneous input!" << endl;

            answer2 = 0;
        }
    }

    else if(0 <= score1 && score1 < 10)
    {
        if((score1 + score2) == 10 && 0 <= score2 && score2 <=10)
        {
            if(0 <= score3 && score3 <= 10)
            {
                total = score1 + score2 + score3;

                cout << "The score is " << total << "a spare" << endl;

                answer1 = total;
            }

            else
            {
                cout << "Erroneous input!" << endl;

                answer2 = 0;
            }
        }

        else if(0 <= (score1 + score2) && (score1 + score2) < 10 && 0 <= score2 && score2 <= 10)
        {
            if(score3 == 0)
            {
                total = score1 + score2;

                cout << "The score is " << total << "(a blow)" << endl;

                answer1 = total;
            }

            else
            {
                cout << "Erroneous input!" << endl;

                answer2 = 0;
            }
        }

        else
        {
            cout << "Erroneous input!" << endl;

            answer2 = 0;
        }
    }

    else
    {
        cout << "Erroneous input!" << endl;

        answer2 = 0;
    }

    return 0;
}
