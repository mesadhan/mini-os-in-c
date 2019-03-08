/*
 * @Author: Md. Sadhan Sarker 
 * @Date: 2019-03-09 05:08:39 
 * @Last Modified by:   mikey.zhaopeng 
 * @Last Modified time: 2019-03-09 05:08:39 
 */
 
 

void game();
void menu();

#ifndef hangmanG

void developer();
void start();
void help();
char word[20];
char temp[20];
void guessWord1();
void exitG();
void m(char[]);
void gameOver();
void gameControl();
void hangman();
void Hangman_game();


char ch,control;
char name[20];
int a,b,c=0,count=0,miss=0,wrongG=0;

void Hangman_game()
{
    start();
    printf("\n\n\n\n\t\tEnter Your Name: ");
    gets(name);


    //printf("\n\t\tPress Any Key To Start...........\n");
    Sleep(1000);
    //getch();
    system("cls");

    help();
    Sleep(5000);

    char word[] = "sadhan";         // Demo Word
    char temp[] = "s*d**n";

    char word1[] = "game";
    char temp1[] = "****";
    char word2[] = "play";
    char temp2[] = "****";
    char word3[] = "program";
    char temp3[] = "*******";
    char word4[] = "computer";
    char temp4[] = "********";
    char word5[] = "concatenate";
    char temp5[] = "***********";


while(1)
    {
        system("cls");
        printf("\n\t\tHere you have Guess 6 letter");
        guessWord1(word,temp);
        printf("\n\n\t\tThe Word is sadhan. You missed %d",6-miss);    // Simple massage that show the guess complete word and notice the incorrect guess
        printf("\n\t\tYou Got Score: %d", count);                       // At last show the score;

    printf("\n\n***** Do you want to guess another Word? Enter y or n>: ");
    control = getche();
    exitG();miss=0;
    system("cls");

        printf("\n\n\t\tHere you have Guess 4 letter");
        guessWord1(word1,temp1);
        printf("\n\n\t\tThe Word is game. You missed %d",4-miss);
        printf("\n\t\tYou Got Score: %d", count);


    printf("\n\n***** Do you want to guess another Word? Enter y or n>: ");
    control = getche();
    exitG();miss=0;

        system("cls");
        printf("\n\t\tHere you have Guess 4 letter");
        guessWord1(word2,temp2);
        printf("\n\n\t\tThe Word is play. You missed %d",4-miss);
        printf("\n\t\tYou Got Score: %d", count);

    printf("\n\n***** Do you want to guess another Word? Enter y or n>: ");
    control = getche();
    exitG();miss=0;

        system("cls");
        printf("\n\t\tHere you have Guess 7 letter");
        guessWord1(word3,temp3);
        printf("\n\n\t\tThe Word is program. You missed %d",7-miss);
        printf("\n\t\tYou Got Score: %d", count);

    printf("\n\n***** Do you want to guess another Word? Enter y or n>: ");
    control = getche();
    exitG();miss=0;

        system("cls");
        printf("\n\t\tHere you have Guess 8 letter");
        guessWord1(word4,temp4);
        printf("\n\n\t\tThe Word is computer. You missed %d",8-miss);
        printf("\n\t\tYou Got Score: %d", count);

    printf("\n\n***** Do you want to guess another Word? Enter y or n>: ");
    control = getche();
    exitG();miss=0;

        system("cls");
        printf("\n\t\tHere you have Guess 11 letter");
        guessWord1(word5,temp5);
        printf("\n\n\t\tThe Word is concatenate. You missed %d",11-miss);
        printf("\n\t\tYou Got Score: %d", count);
        system("cls");


    gameOver();
    getch();
    }
}

void guessWord1(char word[],char temp[])
{
    for(a=0; a<strlen(word); a++)
    {
    printf("\n\n\t(Guess No: %d ) Enter a Letter in Word: %s > ",a+1, temp);
    ch = getche();
    //getchar();

        if(word[a] == ch)             // This condition check the guess letter
        {
        temp[a] = ch;
        count++;
        miss++;
        }
        else if((word[a] != ch))      // This condition only true when guess word does not exit
        {
            for(b=0; word[b]!=0; b++) // This loop searching the word.
            {
                if(word[b]==ch)       // By This line we check that the user guess word match or not
                {
                c=1;                  // If match then we are going to give massage Arrangement system wrong Other wise not in the word
                break;
                }
            }
            if(c==0)printf("\n\t\t%c is not in the word\n",ch);     // Message 1
            else printf("\n\t\tArrangement System Wrong\n",ch);     // Message 2
        wrongG++;
        if(wrongG>10) gameControl();
        }
    }
    temp[a]='\0';
}

void exitG()
{
    if(control == 'n' || control == 'N'){
    m(name);
    developer();
    printf("\n\t\tPress any Key");
    game();
    }
}

void gameControl()
{
    m(name);             /// Menu Function Call for save user name and Highscore
    hangman();

    game();
}

void m(char name[])
{
    FILE *p;
    p = fopen("HighScore.txt","a+");
    if(p==NULL) printf("\nFile Unable to Open.\n");
    else{

    fprintf(p,"\n%s\t",name);
    fprintf(p,"%d\n",count);          /// For save High score
    fclose(p);
    }
}

void gameOver()
{
    printf("\n\n\n       HHHH    HH    HH  HH  HHHHHH        HH    HH  HH  HHHHHH  HHHH\n     HH      HH  HH  HHHHHH  HH          HH  HH  HH  HH  HH      HH  HH\n     HH  HH  HHHHHH  HHHHHH  HHHH        HH  HH  HH  HH  HHHH    HHHH\n     HH  HH  HH  HH  HH  HH  HH          HH  HH  HH  HH  HH      HH  HH\n       HHHH  HH  HH  HH  HH  HHHHHH        HH      HH    HHHHHH  HH  HH\n");

    developer();
    printf("\n\t\tThanks For Playing This Game.\n");
getch();
}

void hangman()
{
    int b=0;
    while(b!=5){
    system("cls");
    int a;
    printf("\n\t\tDHHHHHHHHHHHHHHHD         DMMMMMMMMMMMMMMD      \n");
    printf("\t\tD   NOW HANG    D         D  YOU LOSSER  D     \n");
    printf("\t\tDMMMMMMMMMMMMMMMD         DMHHHHHHHHHHHHHD      \n");

    printf("\n\n\n\t\tDDMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMDD\n");
    printf("\t\tD      Sorry! Your mistake more than 10.  D\n\t\tD       So You failed to save Yourself.   D\n");
    printf("\t\tDDMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMDD\n");
    for(a=0; a<=35; a++)
    {
        printf("\t\t\t   MMM\n");
        Sleep(10);
    }


    Sleep(100);
    printf("\t\t        DDDMMMMDDD              \n");
    printf("\t\t      DDG         GDD           \n");
    printf("\t\t     MM  ()    ()   MM          \n");
    printf("\t\t     MM             DD          \n");
    printf("\t\t     MM    ^^^^     DD          \n");
    printf("\t\t      DD  *       DD            \n");
    printf("\t\t         MMVVVVVVMM             \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t  MMDD      MM      DDMM        \n");Sleep(50);
    printf("\t\t    VVDD    MM    DDVV          \n");Sleep(50);
    printf("\t\t        MMMDDDMMMM              \n");Sleep(50);
    printf("\t\t          MMMMMM                \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t            MM                  \n");Sleep(50);
    printf("\t\t        DDDD  MMDD              \n");Sleep(50);
    printf("\t\t      MMDD      DDMM            \n");Sleep(50);
    printf("\t\t    DD              DD          \n");
    b++;
    }
}

void start()
{
    int a;
    printf("\n\n\n\tII  II   @@@@   @@   @@    IIII  @@   @@   @@@@   @@   @@    \n\tII  II  @@  @@  @@@  @@  II      @@@ @@@  @@  @@  @@@  @@    \n\tIIIIII  IIIIII  II @ II  II      III@III  IIIIII  II @ II    \n\t@@  @@  II  II  II  @@@  @@  @@  II   II  II  II  II  @@@    \n\t@@  @@  II  II  II   II    @@@@  II   II  II  II  II   II    \n");

    printf("\n\n\t\t    @@@@    @@    @@   @@  @@@@@@   \n\t\t  @@      @@  @@  @@@@@@@  @@       \n\t\t  II  II  IIIIII  II @ II  IIII     \n\t\t  II  II  II  II  II   II  II       \n\t\t    IIII  II  II  II   II  IIIIII   \n");

    printf("\n\t\tPLEASE WAIT:  ");
    for(a=0; a<=20; a++)
    {
    Sleep(100);
    printf("%c", 277);
    }
}

void developer()
{
    Sleep(100);
    system("cls");
    printf("\n\n\tABOUT DEVELOPER: \n");
    printf("\n\t**************************************************\n\t***       Name: MD. SADHAN SARKER              ***\n\t***            B.S.C IN C.S.E                  ***\n\t***     E-mail: sadhansarker3@gmail.com        ***\n\t***     Facebook: facebook.com/sadhan34        ***\n\t*** Student: Daffodil international University ***\n\t**************************************************\n");
    Sleep(5000);
}

void help()
{
    printf("\n\n\n\n\t  ******************************************************\n\t  *               INSTRACTION OR HELP:                 *\n\t  * 1. THIS PROGRAM ALL LETTER IS LOWERCASE.           *\n\t  * 2. REMEMBER THAT IF YOU MISTAKE MORE THEN 10 GUESS *\n\t  *    THEN YOU SHOULD BE HANGING. SO PALY CAREFULLY.  *\n\t  * 3. IF YOU ARE FATCH ANY PROBLEM PRESS \"ENTER KEY\"  *\n\t  ********************THANK YOU*************************\n");

}



#define hangmanG
#endif // hangmanG

