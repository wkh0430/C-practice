//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/10/12
//  FILENAME   : HW02B_B10611035.cpp
//  DESCRIPTION: This is a program to entrypt a 4-digit integer. 
//================================================================================================

#include <bits/stdc++.h>
using namespace std;

int answer1; // Store the number of the first digit after encryption. 
int answer2; // Store the number of the second digit after encryption. 
int answer3; // Store the number of the third digit after encryption. 
int answer4; // Store the number of the fourth digit after encryption. 
int answer5 = 1; // Set this number to 1 if correctly input; otherwise set this number to 0

int main()
{
    int num_origin; // 儲存輸入的四位整數
    int num; // 儲存輸入的四位整數，並於之後拿來運算
    int num_1, num_2, num_3, num_4; // 分別儲存該整數的第一、二、三、四位數
    int temp; // 暫存值

    cin >> num_origin; // 輸入四位整數

    num = num_origin; 

    if (num >= 1000 && num <= 9999) // 若輸入為四位整數，執行以下動作

    {
        // 將此數分割為個、十、百、千四個數字
        num_1 = num / 1000;
        num = num - num_1 * 1000;
        num_2 = num / 100;
        num = num - num_2 * 100;
        num_3 = num / 10;
        num = num - num_3 * 10;
        num_4 = num;

        // 執行題目要求(每數加7除以10取餘數)
        num_1 = (num_1 + 7) % 10; 
        num_2 = (num_2 + 7) % 10;
        num_3 = (num_3 + 7) % 10;
        num_4 = (num_4 + 7) % 10;

        // 交換兩數
        temp = num_1;
        num_1 = num_2;
        num_2 = temp;

        temp = num_3;
        num_3 = num_4;
        num_4 = temp;

        cout << num_1 << num_2 << num_3 << num_4 << " is the encrypted integer of " << num_origin; //輸出結果

        answer1 = num_1;
        answer2 = num_2;
        answer3 = num_3;
        answer4 = num_4;
    }

    else // 若輸入非四位整數，執行以下動作
    {
        cout << "ERROR. Please enter a 4-digit interger."; 
        answer5 = 0;
    }

    return 0; // 終止函式
}
