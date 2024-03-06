#include <stdio.h>
#include <unistd.h> // for sleep
#include "DoFight2.h"
#include "Function.h"
#include <stdlib.h>

struct Stats
{
    char Name[30];
    int Health, Attack, Critical;
}Player, Praram, Tonsakun;

void showStats()
{
    int length = strlen(Player.Name);
    for(int i=0;i<(length/2)+12;i++) printf("* ");
    if(length%2==0)
    {
        printf("\n*   %s Health   : %-4d  *\n",Player.Name,Player.Health);
        printf("*   %s Attack   : %-4d  *\n",Player.Name,Player.Attack);
        printf("*   %s Critical : %-4d  *\n",Player.Name,Player.Critical);
    }
    else
    {
        printf("\n*   %s Health   : %-4d *\n",Player.Name,Player.Health);
        printf("*   %s Attack   : %-4d *\n",Player.Name,Player.Attack);
        printf("*   %s Critical : %-4d *\n",Player.Name,Player.Critical);
    }
    for(int i=0;i<(length/2)+12;i++) printf("* ");
    printf("\n");
}


int main()
{
    //star stat
    Player.Health = 800;
    Player.Attack = 20;
    Player.Critical = 30;
    
    int glass = 0;
    printf("เจอราม, Give bg information จะเล่าเรื่องกระจก แล้วก็โชว์เศษกระจกที่รามมีอยู่ ต้องให้ py ถามว่าทำไมรามถึงออกจากเรือไม่ได้ราม ไม่ ต้อง ให้ ด้าม กระจก นะ !!!\n");
    pressEnterToContinue();
    printf("how should I call you? : ");
    scanf("%s", Player.Name);
    printf("Story 2\n");
    

    showStats();
    Player.Health = DoFightTos(Player.Name,Player.Health,Player.Attack,Player.Critical);
    showStats();
    pressEnterToContinue();
    Player.Health = DoFightParam(Player.Name,Player.Health,Player.Attack,Player.Critical);
}

