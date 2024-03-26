#ifndef _FUNCTIONH_ //prevent redefinition errors
#define _FUNCTIONH_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>

void pressEnterToContinue()
{
    fflush(stdin);
    printf("\nPress Enter to Continue\n");
    while(getchar()!='\n');
    system("clear");
}

void conv(char name[], char text[])
{
    printf("%s: %s\n", name, text);
    fflush(stdin);
    while(getchar()!='\n');
}

void print_mid(char text[])
{
    // Get the terminal width
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int cols = w.ws_col;

    int text_length = strlen(text);     
    int start_col = (cols - text_length) / 2;

    printf("\033[%dG", start_col + 1); 
    printf("%s\n", text);   
}

int doYesNoQues(char ques[]) //insert question, return 1 if yes, return 0 if no
{
    char ans;
    do
    {
        fflush(stdin);
        system("clear"); //system("cls");
        printf("%s \nYour answer is (Y/N): ", ques);
        scanf(" %c", &ans);
        printf("\n");
    } while (ans != 'Y' && ans != 'y' && ans != 'N' && ans != 'n');
    if (ans == 'Y' || ans == 'y') return 1;
    else return 0;
}

int doChoiceQues(char ques[], char *choice[], int n) //insert question, array of choices, num of choices
{
    int ans;
    do
    {
        fflush(stdin);
        system("clear");
        printf("%s \n\n", ques);
        for (int i = 0; i < n; i++) // print choices
        {
            printf("(%d) %s \n", i + 1, choice[i]);
        }
        printf("\nYour answer is (number): ");
        scanf("%d", &ans);   
        printf("\n"); 
    } while (ans < 1 || ans > n);
    return ans;
}

#endif