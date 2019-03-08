/// simple Calculator use Function



#ifndef calculator
void menu();

int addition(int , int);
void subtract();
void multiplication(int,int);
float division();
void root();
void power();
void modulus();
void menuC();

void calculatorS()
{
    while(1){
        int choice;
        system("cls");menuC();
        printf("\n\n\tChoose Option: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            int num1,num2,sum;
            printf("\t\t\t\t\t\t  * Status: Summation");
            printf("\n\tEnter 1st Number: ");
            scanf("%d", &num1);
            printf("\tEnter 2nd Number: ");
            scanf("%d", &num2);

            sum = addition(num1,num2);
            printf("\n\tSummation Value: %d\n", sum);
        }

        else if(choice == 2) subtract();

        else if(choice == 3)
        {
            int num1,num2, mut;
            printf("\t\t\t\t\t\t * Status: Multiplication");
            printf("\n\tEnter 1st Number: ");
            scanf("%d", &num1);
            printf("\tEnter 2nd Number: ");
            scanf("%d", &num2);

            multiplication(num1, num2);
        }

        else if(choice == 4)
        {
            float save;
            save = division();
            printf("\n\tDivision Value: %.3f", save);
        }

        else if(choice == 5) root();
        else if(choice == 6) power();
        else if(choice == 7) modulus();
        else if(choice == 8) menu();

    getch();
    }
}

int addition(int num1, int num2)
{
    int sum;
    sum = num1+num2;
    return sum;
}

void subtract()
{
    int num3,num4,subt;
    printf("\t\t\t\t\t\t  * Status: Subtract");
    printf("\n\tEnter 1st Number: ");
    scanf("%d", &num3);
    printf("\tEnter 2nd Number: ");
    scanf("%d", &num4);

    subt = num3-num4;
    printf("\n\tSubtract Value: %d", subt);
}

void multiplication(int num1,int num2)
{
    int mutiplication = num1*num2;
    printf("\n\tMultiple Value: %d",mutiplication);
}

float division()
{
    float num1, num2,div;
    printf("\t\t\t\t\t\t  * Status: Division");
    printf("\n\tEnter 1st Number: ");
    scanf("%f", &num1);
    printf("\tEnter 2nd Number: ");
    scanf("%f", &num2);

    div=num1/num2;

    return div;
}

void root()
{
    int num;
    printf("\t\t\t\t\t\t  * Status: Square Root");
    printf("\n\tEnter Number: ");
    scanf("%d", &num);
    printf("\n\tSquare Root Value: %.3f", sqrt(num) );
}

void power()
{
    int num1,num2;
    printf("\t\t\t\t\t\t  * Status: Power");
    printf("\n\tEnter Number: ");
    scanf("%d", &num1);
    printf("\tEnter Number Power: ");
    scanf("%d", &num2);
    printf("\n\tValue: %.lf",pow(num1,num2));
}

void modulus()
{
    int num1,num2,m;
    printf("\t\t\t\t\t\t  * Status: Modulus");
    printf("\n\tEnter 1st Number: ");
    scanf("%d", &num1);
    printf("\tEnter 2nd Number: ");
    scanf("%d", &num2);
    m = num1%num2;
    printf("\n\tRemainder: %d", m);
}

void menuC()
{
    printf("\n\t***************    ******************    **********************\n");
    printf("\t* 1. Addition *    * 2. Subtraction *    *  3. Multiplication *\n");
    printf("\t***************    ******************    **********************\n\n");

    printf("\t***************    ******************    **********************\n");
    printf("\t* 4. Division *    * 5. Square Root *    * 6.Power: 7.Modulus *\n");
    printf("\t***************    ******************    **********************\n");

    printf("\n\t***********                              **********************\n");
    printf("\t* 8. Exit *                              *  Any Key For Back  *\n");
    printf("\t***********                              **********************");

}

#define calculator
#endif // calculator

