#include <stdio.h>
#include "Function.h"

void doIntro5()
{
    printf("introintro5");
}
int doIsland5()
{
    doIntro5();
    pressEnterToContinue();
    char Q1[] = {"Q1 นี้คือสัตว์อะไร"};
    char Q2[] = {"Q2 นี้คือสัตว์อะไร"};
    char Q3[] = {"Q3 นี้คือสัตว์อะไร"};
    char Q4[] = {"Q4 นี้คือสัตว์อะไร"};

    char *CQ1[] = {"Tiger", "Salmon", "Hawk", "Monkey"};
    char *CQ2[] = {"Tiger", "Salmon", "Hawk", "Gorilla"};
    char *CQ3[] = {"Tiger", "Salmon", "Lion", "Gorilla"};
    char *CQ4[] = {"Tiger", "Snake", "Worm", "Rat"};

    if (doChoiceQues(Q1, CQ1, 4)==4)
    {
        if (doChoiceQues(Q2, CQ2, 4)==3)
        {
            if (doChoiceQues(Q3, CQ3, 4)==3)
            {
                if (doChoiceQues(Q4, CQ4, 4)==2)
                {
                    return 1; // get mirror + sp item
                }
            }
        }
    }
    printf("mai dai mirror ja \n");
    return 0;
}