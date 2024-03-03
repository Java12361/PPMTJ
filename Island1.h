#include <stdio.h>

//Choices can delete the finciton that not use later.
#include "ChoiceFunction.h"
int choice1A2(char question[5][30]);
int choice2A2(char question[5][30]);
int choice3A2(char question[5][30]);
int choice4A2(char question[5][30]);
int choice1A1(char question[5][30]);
int choice2A1(char question[5][30]);
int choice3A1(char question[5][30]);
int choice4A1(char question[5][30]);

int Island1()
{
    char cleansing;
    
        do{
        printf("Will you clensing?");
        scanf(" %c",&cleansing);
        if(cleansing=='N'||cleansing=='n') return 0;
        else if(cleansing=='Y'||cleansing=='y') break;
    } while(cleansing!='Y' || cleansing != 'N' || cleansing!='y' || cleansing != 'n');

    char I1Q1[5][30] = {"Question 1","Choice 1","Choice 2(correct ans)","Choice 3","Choice 4"};
    char I1Q2[5][30] = {"Question 2","Choice 1","Choice 2","Choice 3(correct ans)","Choice 4"};
    char I1Q3[5][30] = {"Question 3","Choice 1(correct ans)","Choice 2","Choice 3","Choice 4"};
    char I1Q4[5][30] = {"Question 4","Choice 1","Choice 2","Choice 3(correct ans)","Choice 4"};
    char I1Q5[5][30] = {"Question 5","Choice 1","Choice 2","Choice 3","Choice 4(correct ans)"};
    int q1return = choice2A2(I1Q1);
    if(q1return==1) //correct
    {
        int q2return = choice3A2(I1Q2);
        if(q2return == 1)
        {
            int q3return = choice1A1(I1Q3);
            if(q3return == 1) //correct
            {
                int q4return = choice3A1(I1Q4);
                if(q4return == 1) //correct
                {
                    int q5return = choice4A1(I1Q5);
                    if(q5return==1) return 2; //get glass + item
                    else return 1; //get glass
                }
                else if(q4return == 0)
                {
                    return 1; //get glass
                }
            }
            else if(q3return == 0)
            {
                return 1; //get glass
            }
        }
        else if (q2return == 0)
        {
            return 0; //no glass
        }
    }
    else if (q1return == 0) 
    {
        return 0; //no glass
    }
    else printf("\n\nplease DE-BUG\n\n");
}