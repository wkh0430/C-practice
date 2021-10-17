#include <bits/stdc++.h>
using namespace std;

int answer1; // Store the score of the three throws 
int answer2 = 1; // Set this number to 1 if correctly input; otherwise set this number to 0

int main()
{
    int score1;
    int score2;
    int score3;
    int total = 0;

    cin >> score1 >> score2 >> score3;

    if(score1 == 10) 
    {
        total += score1;

        if(score2 == 10 && 0 <= score3 && score3 <= 10)
        {
            total = total + score2 + score3; //

            cout << "The score is " << total << endl;
        }
        else if(0 <= score2 < 10)
        {
            if(0 <= (score2 + score3) && (score2 + score3) <= 10 && 0 <= score3 && score3 <= 10)
            {
                total = total + score2 + score3;//

                cout << "The score is " << total << endl;
            }
        }
        else
        {
            cout << "Erroneous input!";

            answer2 = 0;
        }
    }
    else if(0 <= score1 && score1 < 10)
    {
        if(0 <= score2 && score2 <= 10 && (score1 + score2) == 10)
            {
                total = score1 + score2 + score3;
            }










        --------------------------------
        if(0 < score2 && score2 < 10 && (score1 + score2) == 10 && 0 <=  score3 && score3 <= 10)
        {
            total += (score1 + score2 + score3);//

            cout << "The score is " << total << endl;
        }
        else if(0 < score2 && score2 < 10 && 0 < (score1 + score2) && (score1 + score2) < 10)
        {
            total += (score1 + score2);

            cout << "The score is " << total << endl;
        } 
        else
        {
            cout << "Erroneous input!";

            answer2 = 0;
        }
    }
    else
    {
        cout << "Erroneous input!";

        answer2 = 0;
    }

    return 0;
}