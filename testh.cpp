//====================================
//  PROGRAMMER:CHAN HUNG YI
//  DATE:2021-10-13
//  FILE NAME:HW02CB10611056
//  DESCRIPTION:THIS IS THE PROGRAM TO SIMULATE THE ROLLING BALL GAMES
//====================================

#include<iostream>
#include<cmath>
using namespace std;

int answer1;
int answer2;

int main(){
    int a,b,c;
    cout<<"enter the three number only";
    cin>>a>>b>>c;
    if(0<=a&&a<=10&&0<=b&&b<=10&&0<=c&&c<=10){   
        if(a==10){
            if(b==10&&c==10)
            {answer1=a+b+c;
            answer2=1;
            cout<<"the score is"<<answer1<<"strike"<<endl;
            }else if(b+c<=10){
            answer1=a+b+c;
            answer2=1;
            cout<<"the score is"<<answer1<<"strike"<<endl;
            }else{
            answer2=0;
            cout<<"error";}
        }else{   
            if(a+b==10){
            answer1=a+b+c;
            answer2=1;
            cout<<"the score is"<<answer1<<"spare"<<endl;}
            else{
                if(a+b>=10){
                answer2=0;
                cout<<"error";
                }else if(c==0){
                answer1=a+b;
                answer2=1;
                cout<<"the score is"<<answer1<<"spare"<<endl;}
                else
                {
                cout<<"error";
                answer2=0;}
                }}
    }else{
    cout<<"error";
    answer2=0;}
return 0;
}

