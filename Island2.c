#include <stdio.h>
#include "Function.h"
#include <unistd.h>
int main()
{
    char startques[] = {"r u going to help?"};
    if(doYesNoQues(startques))
    {
        printf("work");
        sleep(1);
        printf("Story line");
        char Q1[] = {"เปิดตัวให้ผัวรัก"};
        char *CQ1[] = {"choice1","choice2","choice3","choice4"};
        int ans = doChoiceQues(Q1,CQ1,4),correct;
        switch (ans)
        {
        case 1: case 3:
            correct = 1;
            break;
        case 2: case 4:
            correct = 0;
            break;
        }
        if(correct==0) return 0; //no glass
        printf("working");

        char Q2[] = {"Q2 แต่ งตัวไปเจอผู้ใหญ่"};
        char *CQ2[] = {"choice1","choice2","choice3","choice4"};
        ans = doChoiceQues(Q2,CQ2,4);
        switch (ans)
        {
        case 2: case 3:
            correct = 1;
            break;
        case 1: case 4:
            correct = 0;
            break;
        }
        if(correct==0) return 0; //no glass
        printf("working2");

        char Q3[] = {"มีบทสนทนาก่อน แล้วถาม opinion เรื่องคิดยังไงกับการที่ต้องมาแต่งงาน (คลุมถุงชน/หลายเมีย)"};
        char *CQ3[] = {"choice1","choice2","choice3","choice4"};
        ans = doChoiceQues(Q3,CQ3,4);
        switch (ans)
        {
        case 1: case 4:
            correct = 1;
            break;
        case 2: case 3:
            correct = 0;
            break;
        }
        if(correct==0) return 1; //1 glass
        printf("working3");

        char Q4[] = {"จมื่นไวย + สร้อยฟ้า คุยกันอยู่ ศรีมาลาเดินมาหึงหวง"};
        char *CQ4[] = {"choice1","choice2","choice3","choice4"};
        ans = doChoiceQues(Q4,CQ4,4);
        switch (ans)
        {
        case 2: case 4:
            correct = 1;
            break;
        case 1: case 3:
            correct = 0;
            break;
        }
        if(correct==0) return 1;
        else return 2;
    }
    else
    {
        printf("Soi Fa sad mak2");
        return 0;
    }
}