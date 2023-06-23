#define _WIN32_WINNT 0x0500
#define W 40
#define H 24
#include <windows.h>
#include <iostream>
#include<conio.h>
#include <thread>#include <cmath>
using namespace std;
#include "functions.h"
#include "menu.h"
#include "elements.h"
#include "game.h"

int main()
{
resizeScreen(200,100,600,400);
thread second(listenInput);

    while(1){
    int selection = showMenu();
    if(selection==1){
        startGame();
    }
    else if(selection==2){
        openBrowser();
    }
    if(selection==3){
        showabout();
    }
    else if(selection==4){
        system("cls");
        gotoXY(5,4);
        cout<<"GOOD BYE!";
        Sleep(2000);
        system("cls");
        break;
    }

    }

    second.detach();
    return 0;
}


/*
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;
#define key_UP 72
#define key_DOWN 80
#define key_LEFT 75
#define key_RIGHT 77
#define key_X 120
int color(int col=7)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute(h,col);
}
void menu(int m)
{
if(m==1)
{
    system("cls");
    cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==34)
            cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==34)
            cout<<char(188)<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(8076); cout<<"   CONTINUE GAME   "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"      NEW GAME      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       LEVELS       "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       OPTIONS      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        HELP        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        EXIT        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
}
else if(m==2)
{
        system("cls");
        cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==34)
            cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==34)
            cout<<char(188)<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    cout<<"   CONTINUE GAME   ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    color(8076); cout<<"      NEW GAME      ";  color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       LEVELS       "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       OPTIONS      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        HELP        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        EXIT        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
}
else if(m==3)
{
        system("cls");
        cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==34)
            cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==34)
            cout<<char(188)<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    cout<<"   CONTINUE GAME   ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"      NEW GAME      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    color(8076); cout<<"       LEVELS       ";   color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       OPTIONS      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        HELP        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        EXIT        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
}
else if(m==4)
{
        system("cls");
        cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==34)
            cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==34)
            cout<<char(188)<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    cout<<"   CONTINUE GAME   ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"      NEW GAME      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       LEVELS       ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    color(8076); cout<<"       OPTIONS      ";    color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        HELP        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        EXIT        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
}
else if(m==5)
{
        system("cls");
        cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==34)
            cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==34)
            cout<<char(188)<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else
        {
            cout<<char(205);
        }
    }
    cout<<"   CONTINUE GAME   ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"      NEW GAME      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       LEVELS       ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"       OPTIONS      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    color(8076); cout<<"        HELP        ";    color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(201);
        else if(i==23)
            cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else
        {
            cout<<char(205);
        }
    }
    cout<<"        EXIT        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++)
    {
        if(i==1)
            cout<<char(200);
        else if(i==23)
            cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else
        {
            cout<<char(205);
        }
    }
for(int i=1;i<=40;i++)
    {
        cout<<char(205);
    }
}
else if(m==6){
    system("cls");
    cout<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++){
        if(i==1) cout<<char(201);
        else if(i==34) cout<<char(187)<<endl<<"\t\t\t\t\t   "<<char(186)<<" ";
        else cout<<char(205);
    }
    color(2436); cout<<"\t     Bricks Breaker        "; color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t   ";
    for(int i=1;i<=34;i++){
        if(i==1) cout<<char(200);
        else if(i==34) cout<<char(188)<<endl<<"\t\t\t\t\t";
        else cout<<char(205);
        }
    for(int i=1;i<=40;i++)
    cout<<char(205);
    cout<<endl<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186)<<" ";
        else cout<<char(205);
    }
    cout<<"   CONTINUE GAME   ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else cout<<char(205);
    }
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else cout<<char(205);
    }
    cout<<"      NEW GAME      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else cout<<char(205);
    }
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else cout<<char(205);
    }
    cout<<"       LEVELS       ";cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else cout<<char(205);
    }
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else cout<<char(205);
    }
    cout<<"       OPTIONS      "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else cout<<char(205);
    }
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else cout<<char(205);
    }
    cout<<"        HELP        "; cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<"\t\t\t\t\t\t";
        else cout<<char(205);
    }
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(201);
        else if(i==23) cout<<char(187)<<endl<<" \t\t\t\t\t        "<<char(186);
        else cout<<char(205);
    }
    color(8076); cout<<"        EXIT        ";    color(); cout<<" "<<char(186)<<endl<<"\t\t\t\t\t\t";
    for(int i=1;i<=23;i++){
        if(i==1) cout<<char(200);
        else if(i==23) cout<<char(188)<<endl<<endl<<"\t\t\t\t\t";
        else cout<<char(205);}

for(int i=1;i<=40;i++)
        cout<<char(205);
}
}

int main()
{
    int m=1;
    menu(m);
    char k=getch();
    int value=k;
    while(value!=13)
    {
        switch(getch())
        {
        case key_UP:
            {m--; if(m==0) m=6; menu(m); break;}
        case key_DOWN:
            {m++; if(m==7) m=1; menu(m); break;}
        }
        value=getch();
    }
    return 0;
}

/*#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;
void showdata();
void show0();

void ADD_A_NEW_USER();
void SEARCH_FOR_ANY_USER();
void SHOW_ALL_USERS();
void EDIT_USER_DATA();
void DELETE_USER_DATA();
void showSEARCH();
    int n=5,found;
    string username="Hossam Metwally         Youssef Hussien         Yehya sayed             Ahmed Nady              ";
    string number="01028480756             01005492189             01005756279             01066044612             ";
    string adress="egypt, fayoum           egypt, fayoum           egypt, fayoum           egypt, fayoum           ";
    string add;
int color(int col=7)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute(h,col);
}
int main()
{
    int p,u;
    add[0]='y';
    while(add[0]=='y' ||add[0]=='Y')
{
    u=username.size();
    string s1;
    showdata();
    color(8);
    for(int i=0;i<172;i++)
        cout<<char(205);
    color();
    pp1:
    cout<<" Enter The Number Of the "; color(116); cout<<" operation "; color(); cout<<" : ";
    cin>>s1;
    if(s1[0]=='1' &&s1[1]=='\0')
        ADD_A_NEW_USER();
    else
        {
if(u==0)
    {
        color(8);
        for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color(132);
        cout<<setw(87)<<"NOT FOUND NAMES";
        for(int i=0;i<85;i++)
        {
            cout<<char(32);
        }
         color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }
        getline(cin,add);color();

    }
    else
    {


    if(s1[1]=='\0' && s1[0]>='1' && s1[0]<='5')
    {
        color(8);   for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }
        cout<<endl;color();
        if(s1[0]=='2')
            SEARCH_FOR_ANY_USER();
        else if(s1[0]=='3')
            SHOW_ALL_USERS();
        else if(s1[0]=='4')
            EDIT_USER_DATA();
        else if(s1[0]=='5')
        {
            DELETE_USER_DATA();
        }
    }
    else
    {
        cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color(); cout<<endl<<endl;
        goto pp1;
    }
        }
        }
    cout<<" If you want to do more operations press '"; color(6); cout<<"y"; color(); cout<<"' else press any key :";
    getline(cin,add);
    if(s1[0]=='3' && u!=0)
    getline(cin,add);
    for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }
}
    return 0;
}
void showdata()
{

    system("cls");
        int m=0;
    cout<<"\n\t\t\t\t\t\t\t\t\t"<<char(201);
    for(int i=0;i<15;i++)
    cout<<char(205);
    cout<<char(187)<<"\n\t\t\t\t\t\t\t\t\t";
    cout<<char(186)<<" ." ;color(192); cout<<" Main Menu ";
    color(); cout<<". "<<char(186);
    cout<<"\n\t\t\t\t\t\t\t\t\t"<<char(200);
    for(int i=0;i<15;i++)
    cout<<char(205);
    cout<<char(188)<<"\n\n";
    for(int i=0;i<13;i++)
    {
    cout<<"\t\t\t\t\t";
    if(i==0)
    {
        cout<<char(201);
        for(int j=0;j<80;j++)
        {
         if(j==10)
            cout<<char(203);
         else
            cout<<char(205);
        }
        cout<<char(187)<<endl;
    }
    else if(i==12)
    {
        cout<<char(200);
        for(int j=0;j<80;j++)
        {
         if(j==10)
            cout<<char(202);
         else
            cout<<char(205);
        }
        cout<<char(188)<<endl;
    }
    else
       {
          if(i%2==0)
          {
             cout<<char(204);
            for(int j=0;j<80;j++)
            {
             if(j==10)
                cout<<char(206);
             else
                cout<<char(205);
            }
            cout<<char(185)<<endl;
          }
          else
          {
             cout<<char(186);
             if(i==1)
          {
              color(8);    cout<<"  N.O.O   ";  color();  cout<<char(186);

          }
             else
                { color(12); cout<<"    "<<++m<<"     ";
                color();
                }
            for(int j=0;j<9;j++)
            {
    if(j==8)
        {
            if(i!=1)
                cout<<char(186);
            if(i==1)
             {

        color(12);    cout<<setw(38)<<"The Operations";
        color();
         for(int j=0;j<31;j++)
            cout<<" ";
            cout<<char(186);
        }
    else if(i==3)
        {
            cout<<" ADD A NEW USER";
            color(12); cout<<"        -"; color();
        color(8); cout<<" Can add name, phone number and address "; color();
         color(12); cout<<"-    "; color();
            cout<<char(186);
        }
    else if(i==5)
    {
        cout<<" SEARCH FOR ANY USER";
         color(12); cout<<"   -"; color();
        color(8); cout<<" Can search by name or number "; color();
         color(12); cout<<"-              "; color();
            cout<<char(186);
    }
    else if(i==7)
     {
         cout<<" SHOW ALL USERS";
         color(12); cout<<"        -"; color();
        color(8); cout<<" Can show name, phone number and address "; color();
         color(12); cout<<"-   "; color();
            cout<<char(186);
     }
    else if(i==9)
      {
         cout<<" EDIT USER DATA";
         color(12); cout<<"        -"; color();
        color(8); cout<<" Can change name, phone number and address "; color();
         color(12); cout<<"- "; color();
            cout<<char(186);
      }
    else if(i==11)
       {
         cout<<" DELETE USER DATA";
         color(12); cout<<"      -"; color();
        color(8); cout<<" Can delete all information of user "; color();
         color(12); cout<<"-        "; color();
            cout<<char(186);
       }
             }

            }
            cout<<endl;
          }
       }
    }
    cout<<endl;
}
void show0()
{
    color(8);
    for(int i=0;i<172;i++)
    {
        cout<<char(205);
    }
    for(int i=0;i<172;i++)
    {
        cout<<"*";
    }
    for(int i=0;i<172;i++)
    {
        cout<<char(205);
    }
    color();
}
void ADD_A_NEW_USER()
{
    char abb[1000];
    int k,y;
     color(8);      for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
    cout<< " Enter The "; color(116); cout<<" Username "; color(); cout<<" :: ";
            add1:
                cin.getline(abb,1000);
            add0:
                cin.getline(abb,1000);
                k=strlen(abb);
        if(k==0)
        {
            cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Enter The "; color(116); cout<<" Username "; color(); cout<<" :: ";
        goto add0;
        }
        if(k>24)
        {
            cout<<"\n "; color(8);
            for(int i=0;i<75;i++)
                cout<<char(254);
            color(128);  cout<<" To Much ";color(8);
            for(int i=0;i<86;i++)
                cout<<char(254);
            color();
            cout<< "\n\n Enter The "; color(116); cout<<" Username "; color(); cout<<" :: ";
            goto add0;
        }
        else if(k<24)
        {
            for(int i=k;i<24;i++)
            {
                abb[i]=char(32);
            }
        }
        y=username.size();
        username.replace(y,24,abb,0,24);
    cout<< "\n Enter The "; color(116); cout<<" Number "; color(); cout<<" :: ";
            add2:
                cin.getline(abb,1000);
                k=strlen(abb);
                for(int t=0;t<k;t++)
                {
                    if(abb[t]>57 || abb[t]<48)
                    {
                        cout<<"\n "; color(8);
                        for(int i=0;i<76;i++)
                            cout<<char(254);
                        color(128);  cout<<" Error ";color(8);
                        for(int i=0;i<87;i++)
                            cout<<char(254);
                        color();
          cout<<"\n\n Enter The "; color(116); cout<<" Number "; color(); cout<<" :: ";
          goto add2;
                    }
                }
        if(k==0)
        {
         cout<<"\n "; color(8);
        for(int i=0;i<76;i++)
            cout<<char(254);
        color(128);  cout<<" Error ";color(8);
        for(int i=0;i<87;i++)
            cout<<char(254);
        color();
        cout<<"\n\n Enter The "; color(116); cout<<" Number "; color(); cout<<" :: ";
        goto add2;
        }
        if(k>24)
        {
           cout<<"\n "; color(8);
                        for(int i=0;i<75;i++)
                            cout<<char(254);
                        color(128);  cout<<" To Much ";color(8);
                        for(int i=0;i<86;i++)
                            cout<<char(254);
                        color();
          cout<<"\n\n Enter The "; color(116); cout<<" Number "; color(); cout<<" :: ";
            goto add2;
        }
        if(k<24)
        {
            for(int i=k;i<24;i++)
            {
                abb[i]=char(32);
            }
        }
        y=number.size();
        number.replace(y,24,abb,0,24);
            cout<< "\n Enter The "; color(116); cout<<" Address "; color(); cout<<" :: ";
            add3:
                cin.getline(abb,1000);
                k=strlen(abb);
        if(k==0)
        {
         cout<<"\n "; color(8);
                        for(int i=0;i<76;i++)
                            cout<<char(254);
                        color(128);  cout<<" Error ";color(8);
                        for(int i=0;i<87;i++)
                            cout<<char(254);
                        color();
        cout<<"\n\n Enter The "; color(116); cout<<" Address "; color(); cout<<" :: ";
        goto add3;
        }
        if(k>24)
        {
            cout<<"\n "; color(8);
                        for(int i=0;i<75;i++)
                            cout<<char(254);
                        color(128);  cout<<" To Much ";color(8);
                        for(int i=0;i<86;i++)
                            cout<<char(254);
                        color();
            cout<< "\n\n Enter The "; color(116); cout<<" Address "; color(); cout<<" :: ";
            goto add3;
        }
        if(k<24)
        {
            for(int i=k;i<24;i++)
            {
                abb[i]=char(32);
            }
        }
        y=adress.size();
        adress.replace(y,24,abb,0,24);
        show0();
    SHOW_ALL_USERS();
}
void SEARCH_FOR_ANY_USER()
{
    int k;
    cout<<" If you want to search by ";color(116); cout<<" Name "; color();
    cout<<" press '1' , "; color(116); cout<<" Number ";color();cout<<" press '2' :: ";
    getline(cin,add);
    ss1:
    getline(cin,add);
    k=add.size();
    if(k>1)
    {
        cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please enter correct number :: ";
        goto ss1;
    }
    else
{

    if(add[0]=='1')
 {
     color(8);
     for(int i=0;i<172;i++)
    {
        cout<<char(205);
    } color();
    cout<<" Enter the "; color(116); cout<<" Username "; color(); cout<<" you search for :: ";
    getline(cin,add);
    int t=add.size();
    if(t==0)
    {
            color(8);
        for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color(132);
        cout<<setw(87)<<" NOT FOUND ";
        for(int i=0;i<85;i++)
        {
            cout<<char(32);
        }
         color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
    }
    else
{
    found=username.find(add);
      if(found%24==0)
      {
        showSEARCH();
      }
      else
      {
                color(8);
        for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color(132);
        cout<<setw(87)<<" NOT FOUND ";
        for(int i=0;i<85;i++)
        {
            cout<<char(32);
        }
         color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
      }
   }
}
    else if(add[0]=='2')
    {
        color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
    cout<<" Enter the"; color(116); cout<<" Number "; color(); cout<<" you search for :: ";
    getline(cin,add);
    int t=add.size();
    if(t==0)
    {
               color(8);
        for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color(132);
        cout<<setw(87)<<" NOT FOUND ";
        for(int i=0;i<85;i++)
        {
            cout<<char(32);
        }
         color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
    }
    else
{
    found=number.find(add);
      if(found%24==0)
      {
        showSEARCH();
      }
      else
      {
              color(8);
        for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color(132);
        cout<<setw(87)<<" NOT FOUND ";
        for(int i=0;i<85;i++)
        {
            cout<<char(32);
        }
         color(8);
         for(int i=0;i<172;i++)
        {
            cout<<char(205);
        }color();
      }
    }
}
    else
    {
        cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
          cout<<"\n\n Please enter correct number :: ";
        goto ss1;
    }
}
}
void SHOW_ALL_USERS()
{

    {
  cout<<endl;
  cout<<"\t\t\t\t\t"<<char(201);
  for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(203);
      else if(i==81)
        cout<<char(187);
      else
        cout<<char(205);
  }
  cout<<"\n\t\t\t\t\t"<<char(186); color(12); cout<<setw(2)<<"ID"; color(); cout<<char(186);
 color(12); cout<<"        Username         "; color(); cout<<char(186);
 color(12); cout<<"          Number         "; color(); cout<<char(186);
 color(12); cout<<"         Address         "; color(); cout<<char(186);
  cout<<"\n\t\t\t\t\t"<<char(204);
    for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(206);
      else if(i==81)
        cout<<char(185);
      else
        cout<<char(205);
  }
    found=username.size();
    int r=found/24;
    int id=1,ho=0;
    for(int i=1;i<r*2;i++)
    {
        if(i%2!=0)
        {
        cout<<"\n\t\t\t\t\t";
        cout<<char(186); color(12); cout<<setw(2)<<id++; color(); cout<<char(186);
                color(128); cout<<" ";
            for(int j=ho;j<ho+24;j++)
            {
                cout<<username[j];
            }
            color();
        cout<<char(186);color(128); cout<<" ";
            for(int j=ho;j<ho+24;j++)
            {
                cout<<number[j];
            }
            color();
        cout<<char(186);color(128); cout<<" ";
            for(int j=ho;j<ho+24;j++)
            {
                cout<<adress[j];
            }
            color();
        cout<<char(186);
        ho+=24;
        }
        else
        {
         cout<<"\n\t\t\t\t\t"<<char(204);
          for(int i=1;i<=81;i++)
           {
           if(i==3||i==29||i==55)
             cout<<char(206);
           else if(i==81)
             cout<<char(185);
           else
             cout<<char(205);
           }
        }
    }
  cout<<"\n\t\t\t\t\t"<<char(200);
  for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(202);
      else if(i==81)
        cout<<char(188);
      else
        cout<<char(205);
  }
  cout<<endl<<endl;
show0();
    }
}
void EDIT_USER_DATA()
{
    int y;
    SHOW_ALL_USERS();
    cout<<"\n Enter the "; color(116); cout<<" ID "; color(); cout<<" of user data :: ";
  getline(cin,add);
  sss2:
  getline(cin,add);
  y=add.size();
  for(int i=0;i<y;i++)
  {
      if(add[i]>57 || add[i]<48)
      {
         cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please Enter correct "; color(116); cout<<" ID "; color(); cout<<" :: ";
        goto sss2;
      }
  }
  istringstream(add) >> y;



    if((username.size()/24)<y || y<=0)
    {
         cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please enter correct "; color(116); cout<<" ID "; color(); cout<<" :: ";
        goto sss2;
    }
    else
    {
        char abb[1000];
        cout<<"\n Enter new "; color(116); cout<<" Username "; color(); cout<<" :: ";
            add6:
                cin.getline(abb,1000);
               int k=strlen(abb);
        if(k==0|| abb[0]==' ')
        {
            cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Enter new ";  color(116); cout<<" Username "; color(); cout<<" :: ";
        goto add6;
        }
        if(k>24)
        {
            cout<<"\n "; color(8);
            for(int i=0;i<75;i++)
                cout<<char(254);
            color(128);  cout<<" To Much ";color(8);
            for(int i=0;i<86;i++)
                cout<<char(254);
            color();
            cout<<"\n\n Enter new "; color(116); cout<<" Username "; color(); cout<<" :: ";
            goto add6;
        }
        else if(k<24)
        {
            for(int i=k;i<24;i++)
            {
                abb[i]=char(32);
            }
        }
        username.replace((y-1)*24,24,abb,0,24);
        cout<<"\n Enter new "; color(116); cout<<" Number "; color(); cout<<" :: ";
            add7:;
                cin.getline(abb,1000);
                k=strlen(abb);
        if(k==0 || abb[0]==' ')
        {
            cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Enter new "; color(116); cout<<" Number "; color(); cout<<" :: ";
        goto add7;
        }
        if(k>24)
        {
            cout<<"\n "; color(8);
            for(int i=0;i<75;i++)
                cout<<char(254);
            color(128);  cout<<" To Much ";color(8);
            for(int i=0;i<86;i++)
                cout<<char(254);
            color();
            cout<<"\n\n Enter new "; color(116); cout<<" Number "; color(); cout<<" :: ";
            goto add7;
        }
        if(k<24)
        {
            for(int i=k;i<24;i++)
            {
                abb[i]=char(32);
            }
        }
        number.replace((y-1)*24,24,abb,0,24);
        cout<<"\n Enter new "; color(116); cout<<" Address "; color(); cout<<" :: ";
            add8:
                cin.getline(abb,1000);
                k=strlen(abb);
            if(k==0|| abb[0]==' ')
        {
            cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Enter new "; color(116); cout<<" Address "; color(); cout<<" :: ";
        goto add8;
        }
        if(k>24)
        {
            cout<<"\n "; color(8);
            for(int i=0;i<75;i++)
                cout<<char(254);
            color(128);  cout<<" To Much ";color(8);
            for(int i=0;i<86;i++)
                cout<<char(254);
            color();
            cout<<"\n Enter new "; color(116); cout<<" Address "; color(); cout<<" :: ";
            goto add8;
        }
        if(k<24)
        {
            for(int i=k;i<25;i++)
            {
                abb[i]=char(32);
            }
        }
        adress.replace((y-1)*24,24,abb,0,24);
    }
    for(int i=0;i<172;i++)
        cout<<char(205);
    SHOW_ALL_USERS();
}
void DELETE_USER_DATA()
{
    int y,u;

u=username.size();
      SHOW_ALL_USERS();
  cout<<"\n Enter the "; color(116); cout<<" ID "; color(); cout<<" of the USER :: ";
  getline(cin,add);
  sss1:
  getline(cin,add);

  y=add.size();
  if(y==0)
  {
         cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please enter correct number :: ";
        goto sss1;
  }
  for(int i=0;i<y;i++)
  {
      if(add[i]>57 || add[i]<48)
      {
         cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please enter correct number :: ";
        goto sss1;
      }
  }


  istringstream(add) >> y;
  int t=u;
  t/=24;
  if(y>t ||y==0)
    {
        cout<<"\n "; color(8);
            for(int i=0;i<76;i++)
                cout<<char(254);
            color(128);  cout<<" Error ";color(8);
            for(int i=0;i<87;i++)
                cout<<char(254);
        color();
        cout<<"\n\n Please enter correct number :: ";
        goto sss1;
    }
  else
    {
        y-=1;
        username.erase(y*24,24);
        number.erase(y*24,24);
        adress.erase(y*24,24);
  color(8); for(int i=0;i<172;i++)
           {
             cout<<char(205);
           }
           color();
  SHOW_ALL_USERS();
    }
}
void showSEARCH()
{
  show0();
  cout<<endl;
  cout<<"\t\t\t\t\t"<<char(201);
  for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(203);
      else if(i==81)
        cout<<char(187);
      else
        cout<<char(205);
  }
  cout<<"\n\t\t\t\t\t"<<char(186); color(12); cout<<setw(2)<<"ID"; color(); cout<<char(186);
  color(12); cout<<"         Username        "; color(); cout<<char(186);
  color(12); cout<<"          Number         "; color(); cout<<char(186);
  color(12); cout<<"          Adress         "; color(); cout<<char(186);
  cout<<"\n\t\t\t\t\t"<<char(204);
    for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(206);
      else if(i==81)
        cout<<char(185);
      else
        cout<<char(205);
  }
  cout<<"\n\t\t\t\t\t"<<char(186); color(12); cout<<setw(2)<<((found/24)+1); color(); cout<<char(186);
    color(128); cout<<" ";
  for(int i=found;i<found+24;i++)
    cout<<username[i];
 color();  cout<<char(186); color(128); cout<<" ";
  for(int i=found;i<found+24;i++)
    cout<<number[i];
  color(); cout<<char(186); color(128); cout<<" ";
    for(int i=found;i<found+24;i++)
    cout<<adress[i];
  color();cout<<char(186);
  cout<<"\n\t\t\t\t\t"<<char(200);
  for(int i=1;i<=81;i++)
  {
      if(i==3||i==29||i==55)
        cout<<char(202);
      else if(i==81)
        cout<<char(188);
      else
        cout<<char(205);
  }
  cout<<endl<<endl;
show0();
}
*/
