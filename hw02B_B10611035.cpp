#include <iostream>
using namespace std;

int answer1; // Store the number of the first digit after encryption. 
int answer2; // Store the number of the second digit after encryption. 
int answer3; // Store the number of the third digit after encryption. 
int answer4; // Store the number of the fourth digit after encryption. 
int answer5 = 1; // Set this number to 1 if correctly input; otherwise set this number to 0

int main()
{
    int num;
    int num_origin;
    int num_1, num_2, num_3, num_4;
    int temp;

    cin >> num;

    num = num_origin;

    if (num >= 1000 || num <= 9999)
    {
        num_1 = num / 1000;
        cout << num_1;
        num = num - num_1 * 1000;
        cout << num_1;
        num_2 = num / 100;
        num = num - num_2 * 100;
        num_3 = num / 10;
        num = num - num_3 * 10;
        num_4 = num;

        num_1 = (num_1 + 7) % 10; 
        num_2 = (num_2 + 7) % 10;
        num_3 = (num_3 + 7) % 10;
        num_4 = (num_4 + 7) % 10;

        temp = num_1;
        num_1 = num_2;
        num_2 = temp;

        cout << num_1 << num_2 << num_3 << num_4 << " is the encrypted integer of " << num_origin << endl;

        answer1 = num_1;
        answer2 = num_2;
        answer3 = num_3;
        answer4 = num_4;
    }

    else
    {
        cout << "ERROR. Please enter a 4-digit interger.";
        answer5 = 0;
    }

    return 0;
}
