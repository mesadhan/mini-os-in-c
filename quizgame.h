void menu();

#ifndef quizgame

void quizGame()
{
    int a,b,score=0, sumS=0, high=0;
    char ch;

    while(1)
    {

    printf("\n\n\t\t***********************\n");
    printf("\t\t* 1. For Start Game:  *\n");
    printf("\t\t* 2. For High Score:  *\n");
    printf("\t\t* 3. Quiz list:       *\n");
    printf("\t\t* 4. Exit:            *\n");
    printf("\t\t* 5. About Developer: *\n");
    printf("\t\t***********************\n");

    printf("\n\n\t\tChoose Any Option: ");
    scanf("%d", &a);
    system("cls");

    if(a==1){

            printf("\n\n\t1. What is the Valid Variable Name?\n\n");
            printf("\t\t1. GO#\n\t\t2. 1go\n\t\t3. sum1\n\t\t4. i am\n\n");

            printf("\tAnswer: ");
            scanf("%d", &b);
            if(b==3){
                printf("\tCorrect. You got = 2\n");
                score=2;
                sumS=sumS+score;            ///....................Score
            }
            else printf("\tWrong.\n");
            //printf("\n\n\tPress b <-- Back || Press Any key---->\n");
            //ch = getch();
            //if(ch=='b' || ch == 'B') goto sadhan;
            Sleep(1000);
            system("cls");


    //..............................................................................

            printf("\n\t2. Which one is keyword in C?\n\n");
            printf("\t\t1. C\n\t\t2. printf\n\t\t3. number\n\t\t4. if\n\n");

            printf("\tAnswer: ");
            scanf("%d", &b);
            if(b==4){
                printf("\tCorrect. You got = 2\n");
                score=2;
                sumS=sumS+score;            ///....................Score
            }
            else printf("\tWrong.\n");
            //printf("\n\n\tPress b <-- Back || Press Any key---->\n");
            //ch = getch();
            //if(ch=='b' || ch == 'B') goto sadhan;
            Sleep(1000);
            system("cls");


    //.................................................................................


            printf("\n\t3. If the variable is integer type a=25,b=2\n\tThen what will be the output a/b?\n\n");
            printf("\t\t1. 12.0\n\t\t2. 12\n\t\t3. 12.5\n\t\t4. 12.50\n\n");

            printf("    Answer: ");
            scanf("%d", &b);
            if(b==2){
                printf("    Correct. You got = 2\n");
                score=2;
                sumS=sumS+score;            ///....................Score
            }
            else printf("    Wrong.\n");
            //printf("\n\n\tPress b <-- Back || Press Any key---->\n");
            //ch = getch();
            //if(ch=='b' || ch == "B") goto sadhan;
            Sleep(1000);
            system("cls");


    //.................................................................................


            printf("\n\t4. If a=5, b=10, c=-3 than what will be\n\tthe value of expression: a+(b/(++c)) ?\n\n");
            printf("\t\t1. 1\n\t\t2. 7\n\t\t3. 10\n\t\t4. 0\n\n");

            printf("    Answer: ");
            scanf("%d", &b);
            if(b==4){
                printf("    Correct. You got = 2\n");
                score=2;
                sumS=sumS+score;            ///....................Score
            }
            else printf("    Wrong.\n");
            //printf("\n\n\tPress b <-- Back || Press Any key---->   ");
            //ch = getch();
            //if(ch=='b' || ch == 'B') goto sadhan;
            Sleep(1000);
            system("cls");


    //.................................................................................

            printf("\n\t5. What is the size of an int data type?\n\n");
            printf("\t\t1. 4 Bytes\n\t\t2. 8 Bytes\n\t\t3. Depends on the system/compiler\n\t\t4. Cannot be determined\n\n");

            printf("    Answer: ");
            scanf("%d", &b);
            if(b==3){
                printf("    Correct. You got = 2\n");
                score=2;

            sumS=sumS+score;            ///....................Score
            }
            else printf("    Wrong.\n");


    printf("\n\t\t**************************\n", sumS);
    printf("\t\t* Your Total Score is: %d *", sumS);
    printf("\n\t\t**************************\n\n\n", sumS);


    high=sumS;                      /// Here store High Score;
    }

    else if(a==2)
    {
        printf("\n\t\t**********************\n", high);
        printf("\t\t* Last High Score: %d *", high);
        printf("\n\t\t**********************\n\n\n", high);

    }

    else if(a==3)
    {

        printf("\n\n\t*******************************************\n");

        printf("\n\t1. What is the Valid Variable Name?\n");
        printf("\n\t2. Which one is keyword in C?\n");
        printf("\n\t3. If the variable is integer type a=25,b=2\n\tThen what will be the output a/b?\n");
        printf("\n\t4. If a=5, b=10, c=-3 than what will be\n\tthe value of expression: a+(b/(++c))?\n");
        printf("\n\t5. What is the size of an int data type?\n");

        printf("\n\t*******************************************\n\n\n");
        Sleep(3000);
    }

    else if(a==4){
        printf("\n\n\n\n\t\t**************\n");
        printf("\t\t*** Thanks ***\n");
        printf("\t\t**************\n\n");
        Sleep(1000);
        menu();
    }

    else if(a==5){
        printf("\n\t\t**************************************************\n");
        printf("\t\t***       Name: MD. SADHAN SARKER              ***\n");
        printf("\t\t***            B.S.C IN C.S.E                  ***\n");
        printf("\t\t***     E-mail: sadhansarker3@gmail.com        ***\n");
        printf("\t\t***     Facebook: facebook.com/sadhan34        ***\n");
        printf("\t\t*** Student: Daffodil international University ***\n");

        printf("\t\t**************************************************\n\n");
        Sleep(5000);
    }
    //sadhan:               //Goto tag
    Sleep(500);
    system("cls");

    }
}


#define quizgame
#endif // quizGame
