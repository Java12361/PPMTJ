#include <stdio.h>
#include "Function.h"
int main()
{
    int ans;
    char Q1[] = {"Q1"};
    char *CQ1[] = {"choice1CO", "choice2", "choice3CO", "choice4"};
    char Q2[] = {"Q2"};
    char *CQ2[] = {"choice1CO", "choice2", "choice3", "choice4CO"};
    char Q3[] = {"Q3"};
    char *CQ3[] = {"choice1", "choice2CO", "choice3", "choice4CO"};
    char Q4[] = {"Q4"};
    char *CQ4[] = {"choice1", "choice2CO", "choice3CO", "choice4"};
    char Q5[] = {"Q5"};
    char *CQ5[] = {"choice1CO", "choice2", "choice3CO", "choice4"};

    ans = doChoiceQues(Q1, CQ1, 4);
    if (ans == 1 || ans == 3)
    {
        ans = doChoiceQues(Q2, CQ2, 4);
        if (ans == 1 || ans == 4)
        {
            ans = doChoiceQues(Q3, CQ3, 4);
            if (ans == 2 || ans == 4)
            {
                ans = doChoiceQues(Q4, CQ4, 4);
                if (ans == 2 || ans == 3)
                {
                    ans = doChoiceQues(Q5, CQ5, 4);
                    if (ans == 1 || ans == 3)
                    {
                        printf("work");
                        return 2; // this case get both
                    }
                    else
                        return 1; // this case get only item.
                }
            }
        }
    }
    printf("return 0");
    return 0;
}