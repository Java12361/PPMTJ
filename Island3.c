#include <stdio.h>
#include "Function.h"
#include <unistd.h>

void invt(int ans)
{
    system("clear");
    switch (ans)
    {
    case 1:
        printf("ปากม่วงคล้ำ มีน้ำลายฟูมปากเล้กน้อย ตาเหลือก\n");
        break;
    case 2:
        printf("พนง.: ทั้งสองคนสั่งเมนูเดียวกันคือชาไทย และนั่งอยู่ที่โต๊ะตลอดเวลา ไม่มีพฤติกรรมผิดสังเกต\n");
        break;
    case 3:
        printf("พบแก้วสองใบ แก้ว 1: เหลือแต่น้ำสีใสก้นแก้ว แก้ว2: มีน้ำสีออกส้มๆเหลือครึ่งแก้ว\n");
        break;
    }
    pressEnterToContinue();
}

int main()
{
    int ans;
    printf("Intro\n");
    sleep(1); // or press enter to continue
    printf("Story1\n");
    pressEnterToContinue();
    char startques[] = "r u going to help?";
    if (doYesNoQues(startques))
    {
        do
        {
            char Q1[] = {"คุณเดินสอบสวน"};
            char *CQ1[] = {"body", "staff", "table", "stop investigate"};
            ans = doChoiceQues(Q1, CQ1, 4);
            invt(ans);
        } while (ans != 4);
        char Q2[] = {"สาเหตุการตาย"};
        char *CQ2[] = {"Because of ice", "Because of Tea"};
        ans = doChoiceQues(Q2, CQ2, 2);
        if(ans==1)
        {
            printf("Police Arrive");
            return 2;
        }
        if(ans==2)
        {
            printf("u r Sloir");
            return 0;
        }
    }
    else
    {
        printf("No glass!");
        return 0;
    }
}