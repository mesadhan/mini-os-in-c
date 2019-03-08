/*
 * @Author: Md. Sadhan Sarker 
 * @Date: 2019-03-09 05:10:05 
 * @Last Modified by:   Md. Sadhan Sarker 
 * @Last Modified time: 2019-03-09 05:10:05 
 */


#ifndef Tool                /// Default header file declaration

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include "notepad.h"
#include "Dictionary.h"
#include "hangmanG.h"
#include "quizgame.h"
#include "calculator.h"
#include "quizgame.h"



void menu();
void game();
void programs();
void loading(int a);
void gotoxy(int x, int y);              // message print position controller


void gotoxy(int x, int y)              // message print position controller
{
    COORD sadhan;
    sadhan.X=x;
    sadhan.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), sadhan);
}



void loading(int a)                             // Loading bar in staring
{
    int ch=177, b;
    for(b=0; b<=a; b++)
    {
        Sleep(100);
        printf("%c", ch);
    }
    Sleep(20);
    system("cls");
}

void programs()                                 // Windows Feature in Desktop.
{
    system("cls");
    int cP;                   //Choice program
    gotoxy(50,3);printf("4. <--Back");
    printf("\n\tProgram List");
    printf("\n\n\t1. Notepad. \t2. Dictionary. \t3. Calculator.\n");

    printf("\n\n\tSelect One: ");
    scanf("%d%*c", &cP);

    if(cP == 1)
    {system("cls");
    Sleep(100);
    menuOfNote();
    }


    else if(cP == 2)

    {
        Sleep(100);
        system("cls");
        Dictionary_menu();
    }

       else if(cP == 3)

    {
        Sleep(100);
        system("cls");
        calculatorS();
    }

    else if(cP == 4) menu();

    getch();
}

void game()
{
    system("cls");
    int cP;                   //Choice program
    gotoxy(50,3);printf("4. <--Back");
    printf("\n\t\tGame List");
    printf("\n\n\t1. Hangman. \t2. Quiz Game\n");

    printf("\n\n\tSelect One: ");
    scanf("%d%*c", &cP);

    if(cP == 1)
    {system("cls");
    Sleep(100);
    Hangman_game();
    Sleep(100);
    }

    else if(cP == 2)
    {
    system("cls");
    Sleep(100);
    quizGame();
    Sleep(100);
    }

    else if(cP == 4) menu();


}


#define Tool
#endif // Tool

