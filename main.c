#include "Tool.h"


void menu();
void passwordSave();
void passwordCheck();
void passwordConfirmation();
void login();


char temp[20];
char password[20];
char rePassword[20];
char setp[20];



int main()
{
    SetConsoleTitle("MiNi OS");
    while(1)
    {
        system("color 1a");
        login();
    }
    getch();

    return 0;
}



void menu()
{
    //Sleep(100);
    system("cls");
    int cD;             //choice desktop
    printf("\n\t1.Programs\t2. Games\t3.Setting\t4. Shut Down\n");

    printf("\n\n\n-------> Select: ");
    scanf("%d%*c", &cD);

    if(cD == 3)
    {
        char verify[20];
        printf("\n\nEnter Old Password: ");
        gets(verify);

        if(strcmp(verify,temp)==0)
            passwordConfirmation();
        else
            printf("\n\tError! New Password Not Match in Old Password\n");
    }

    else if(cD == 1)
        programs();
    else if(cD == 2)
        game();
    else if(cD == 4)
    {

        printf("\n\n\n\t\tPlease Wait....Thank You");
        Sleep(1000);
        exit(0);
    }


    else
        printf("\nPlease Choose Above Option");
}




void login()                        // Login System and call just menu function
{
    passwordCheck();
    gotoxy(33, 4);
    printf("Login:\n");             // Message

    gotoxy(31, 6);
    gets(setp);                      // Input

    gotoxy(34, 6);
    system("cls");


    //printf("\nUser Given Password: %s", setp);        // Message

    if(strncmp(setp,temp,20)==0)
    {
        gotoxy(26, 4);
        printf("WeLCome TO MiNi OS");    // Message
        gotoxy(29, 8);
        printf("PLEASE WAIT\n");        // Message

        gotoxy(25, 16);
        loading(20);                    // Function.

        menu();                         /// Menu Function For Boost Security
    }


    else
    {
        gotoxy(30, 8);
        printf("login Fail");           // Login Fail Message
        getch();
        system("cls");
    }

}


void passwordSave()                 // security system control
{

    FILE *p;
    //p = fopen("C:\\Windows\\Help\\#", "w+");
    p = fopen("#credential", "w+");

    if(p==NULL)
        printf("Unable to open");
    else
    {
        fprintf(p,"%s", rePassword);
        fclose(p);
    }
    passwordCheck();
}

void passwordConfirmation()         // security system control
{
    printf("\n\tSet Password: ");
    gets(password);
    printf("\tRe-Write Password: ");
    gets(rePassword);

    if(strcmp(password,rePassword)==0)
        passwordSave();

    else
    {
        printf("\n\n\tSorry Your Both Password Not Match\n");
        Sleep(500);
        system("cls");
        login();
    }

    Sleep(200);
    system("cls");

}


void passwordCheck()                // security system control
{

    FILE *c;
    //c = fopen("C:\\Windows\\Help\\#", "r+");    // password save location
    c = fopen("#credential", "r+");
    if(c == NULL)
    {
        printf("\n\t--> This is Fist Time So Configure Your Setting\n");
        passwordConfirmation();
    }
    else
    {
        fscanf(c,"%s", temp);
        fclose(c);
    }

    //printf("\nCheck File Password: %s", temp);        // Message
}
