/// input string use  2D Array

#ifndef Dictionary


#define size  300
int a,b;                    /// Use for loop.
char wordD[25];              /// search input.
char saveW[size][50];       /// search Word in file
char saveM[size][50];       /// search meaning in file


void Dictionary_menu();                /// local Variable
void add();                 /// local Variable
void search();              /// local Variable
void list();                /// local Variable


void Dictionary_menu()
{
    int choice;
    printf("\n\t\t\t\tDictionary\n");
    gotoxy(50,4);printf("4. <--Back");
    printf("\n\t1. Add Word\n");
    printf("\t2. Search\n");
    printf("\t3. List\n");
    printf("\n\tSelect: ");
    scanf("%d%*c", &choice);
    if(choice == 1) add();
    else if(choice == 2) search();
    else if(choice == 3) list();
    else if(choice == 4) programs();

    else printf("\tError! Choose Above Option.");
}

void add()
{
    FILE *w,*m;
    int sizeAD;
    printf("\n\tEnter Max Number: ");
    scanf("%d%*c", &sizeAD);

    char name[sizeAD][50];        // add
    char mean[sizeAD][50];        // add

    w = fopen("word.txt", "a");
    m = fopen("mean.txt", "a");
    if(w==NULL || m==NULL  ) printf("Unable to Open.\n");

    else{

        for(a=0; a<sizeAD; a++)                      /// Add word and save in file
        {
            printf("\n\t%d: Enter Word: ", a+1);
            gets(name[a]);
            fprintf(w,"\n\t%s", name[a]);

            printf("\t   Enter Meaning: ");
            gets( mean[a] );
            fprintf(m,"\n\t%s", mean[a]);

            printf("\n");
        }
        fclose(w);
        fclose(m);
    }
}

void search()
{
    while(1)
    {
    system("cls");
    FILE *iw,*im;
    iw = fopen("word.txt", "r");
    im = fopen("mean.txt", "r");


    for(a=0; a<size; a++)
    {
        fscanf(iw, "%s", saveW[a]);
        fscanf(im, "%s", saveM[a]);
    }

    gotoxy(50,4);printf("B Or b <--Back");
    printf("\n\n\tEnter the Word: ");
    gets(wordD);

    if(!strcmp(wordD, "b") || !strcmp(wordD, "B")) break;  /// Back Option
    else{
        for(a=0; a<size; a++)
        {
            if ( !strcmp(saveW[a], wordD) )
            {
                printf("\t\t: %s", saveM[a]);
            }
        }
    }

    fclose(iw);
    fclose(im);
    getch();
    }
}

void list()
{
    int a;
    char ch1, ch2;
    FILE *li1,*li2;
    li1 = fopen("word.txt", "r");
    li2 = fopen("mean.txt", "r");
    if(li1==NULL || li2==NULL) printf("Unable to Open");

    else
    {

        printf("\n\tWord list: ");


        while(!feof(li1))
        {
            ch1 = fgetc(li1);
            putchar(ch1);

        }
        printf("\n");
        printf("\n\n\tMeaning list: ");
        while(!feof(li2))
        {
            ch2 = fgetc(li2);
            putchar(ch2);
        }

        getch();
    }



    fclose(li1);
    fclose(li2);

    system("cls");
}
#define Dictionary
#endif // Dictionary

