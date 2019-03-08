/*
 * @Author: Md. Sadhan Sarker 
 * @Date: 2019-03-09 05:09:45 
 * @Last Modified by:   Md. Sadhan Sarker 
 * @Last Modified time: 2019-03-09 05:09:45 
 */


void gotoxy(int x, int y);                  /// Most important declaration
//void menu();
void programs();                            /// Most important declaration

#ifndef notpad
void menuOfNote();
void notebook();
void noteview();
void noteDelete();


void menuOfNote()
{
    while(1)
    {
    int choice;
    printf("\n\t\t\t\tNote Pad\n");

    gotoxy(50,4);printf("4. <--Back");
    printf("\n\t1. Add New File. \n\t2. View File. \n\t3. Delete File.\n\n");
    printf("\tSelect: ");
    scanf("%d%*c", &choice);

    if(choice == 1) notebook();
    else if(choice == 2) noteview();
    else if(choice == 3) noteDelete();
    else if(choice == 4){
    system("cls");
    Sleep(100);
    programs();
    }
    getch();
    system("cls");
    }
}


void notebook()
{
    char name[25], ch;
    printf("\n\tFile Name: ");
    gets(name);

    FILE *p;
    p = fopen(strcat(name,".sd"), "w");

    gotoxy(40,10);printf("\tSave File Use Key: Ctrl+Z");
    printf("\n\n\n");

    if(p==0) printf("\n\tSorry! Error in File");
    else
    {
        printf("\nWrite:\r");
        while(ch!=EOF)
        {
            ch = getchar();
            fputc(ch,p);
        }

        fclose(p);
    }
    printf("\n\nFile Save Successfully");
}


void noteview()
{
    char searchF[30],ch;
    printf("\n\nFile name: ");
    gets(searchF);
    strcat(searchF,".sd");

    FILE *v = fopen(searchF, "r");

    printf("\n\n");
    if(v==NULL) printf("File Does not exit\n");

    else
    {
        while(!feof(v))
        {
            ch = getc(v);
                                    //fgets(, , v);
            printf("%c", ch);
        }
        fclose(v);
    }
}

void noteDelete()
{
    char searchForD[25];
    printf("Enter File Name: ");
    gets(searchForD);
    strcat(searchForD, ".sd");

    FILE *d =fopen(" ","r");

    if(d==NULL) {
    int status;
    status = remove(searchForD);
    if(status == 0) printf("\n\tFile Deleted Successfully\n");
    else puts("\n\tError!. File Does not Exit\n");
    }

    fclose(d);
}


#define notpad                          /// Custom File By MD. Sadhan Sarker
#endif // notpad
