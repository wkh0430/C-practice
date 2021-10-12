//================================================================================================
//  PROGRAMMER : 王凱弘
//  DATE       : 2021/10/12
//  FILENAME   : HW02A_B10611035.cpp
//  DESCRIPTION: This is a program to determine which quadrant or axis the coordinate point lies in. 
//================================================================================================

#include <iostream>
using namespace std;

int answer1; // Store the number of the quadrant where the coordinate point lies; 
 // Set this number to 5 if the point lies on the x-axis; 
 // Set this number to 6 if the point lies on the y-axis; 
 // Set this number to 7 if the point is the origin (0,0). 

int main()
{
    double x, y; // 以x, y儲存座標

    cin >> x >> y; // 輸入欲求座標

    // 以下程式為根據x, y正負判斷所輸入的點所在的位置
    // 再輸出判斷結果
    // 最後將結果紀錄於"answer1"中
    if (x > 0.0 && y > 0.0) 
    {
        cout << "The point (" << x << ", " << y << ") is in quadrant I." << endl; 

        answer1 = 1;
    }

    else if (x < 0.0 && y > 0.0)
    {
        cout << "The point (" << x << ", " << y << ") is in quadrant II." << endl;

        answer1 = 2;
    }

    else if (x < 0.0 && y < 0.0)
    {
        cout << "The point (" << x << ", " << y << ") is in quadrant III." << endl;

        answer1 = 3;
    }

    else if (x > 0.0 && y < 0.0)
    {
        cout << "The point (" << x << ", " << y << ") is in quadrant IV." << endl;

        answer1 = 4;
    }

    else if (y == 0.0 && x != 0.0)
    {
        cout << "The point (" << x << ", " << y << ") is on the x-axis." << endl;

        answer1 = 5;
    }

    else if (x == 0.0 && y != 0.0)
    {
        cout << "The point (" << x << ", " << y << ") is on the y-axis." << endl;

        answer1 = 6; 
    }

    else
    {
        cout << "The point (" << x << ", " << y << ") is the orgin." << endl;

        answer1 = 7; 
    }    

    return 0; // 結束程式
}