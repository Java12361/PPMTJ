#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct SubStats
{
    char Name[30];
    int Health, Attack,Critical;
}Param,Tos;

int DoAttack(int attackerAttack, int defenderHealth, int criticalChance, char *playername)
{
    int damage = attackerAttack+(rand()%attackerAttack);
    if (rand() % 100 < criticalChance)
    {
        printf("Critical hit!\n");
        damage *= 2; // Double damage for a critical hit
    }
    printf("did %d damage!\n",damage);
    return defenderHealth - damage;
}

int DoDefence(int currentHealth, int SucessChance)
{
    if (rand() % 100 < SucessChance)
    {
        printf("Defence successful! Healed 10 health.\n");
        return 1;
    }
    else
    {
        printf("Defence failed! No healing.\n");
        return 0;
    }
}

int DoFightParam(char *playername,int playerhealth,int playerattack,int playercritical)
{
    srand(time(NULL));
    int action;
    strcpy(Param.Name,"Param");
    Param.Health = 200;
    Param.Attack = 20;
    Param.Critical = 0;
    int praramBowActivated = 0, defenseSuccess = 0;
    printf("You encounter Param!\n");
    

    while (playerhealth > 0 && Param.Health > 0)
    {
        printf("Action\n1. Attack\n2. Defence\nChoose an action: ");
        scanf("%d", &action);
        system("clear");

        switch (action)
        {
        case 1: // Attack
            printf("%s attacks %s!\n", playername, Param.Name);
            Param.Health = DoAttack(playerattack, Param.Health, playercritical,playername);
            printf("%s's health is now %d\n\n", Param.Name, Param.Health);
            defenseSuccess = 0;
            break;
        case 2: // Defence
            printf("%s defends!\n", playername);
            defenseSuccess = DoDefence(playerhealth, 70); // Set defense success
            if(defenseSuccess) playerhealth += 10;
            printf("%s's health is now %d\n\n", playername, playerhealth);
            break;
        default:
            printf("Invalid action. Please choose again.\n");
            continue;
        }

        // Enemy's turn
        int i = rand() % 10;
        if (Param.Health > 0)
        {
            if(i<6) //70%
            {
                if(praramBowActivated==0) printf("%s attacks %s with holy spear!\n", Param.Name, playername);
                else if(praramBowActivated==1) printf("%s attacks %s with SUNGOD BOW!!!\n", Param.Name, playername);
                if (!defenseSuccess) // Apply damage only if defense was not successful
                {
                    playerhealth = DoAttack(Param.Attack, playerhealth, Param.Critical,playername);
                }
                else printf("did 0 damage as %s sucessfully defence it!",playername);
                printf("%s's health is now %d\n", playername, playerhealth);
            }
            else if(i<7) //10%
            {
                if(praramBowActivated==0) //only once
                {
                    printf("%s use his ability! SunGodBow!\n",Param.Name);
                    Param.Attack *= 3;
                    if (!defenseSuccess) // Apply damage only if defense was not successful
                    {
                        playerhealth = DoAttack(Param.Attack, playerhealth, Param.Critical,playername);
                    }
                    else 
                    {
                        printf("%s did 0 damage as %s sucessfully defence it! \n",Param.Name,playername);
                    }
                    printf("%s's health is now %d\n", playername, playerhealth);
                    praramBowActivated++;
                }
                else printf("%s Stunned\n",Param.Name);
            }
            else //20%
            {
                printf("%s Stunned\n",Param.Name);
            }
        }
    }
    if (playerhealth > 0)
    {
        system("clear");
        printf("%s wins!\n", playername);
        return playerhealth;
    }
    else
    {
        system("clear");
        printf("%s wins!\n", Param.Name);
        return 0;
    }
}

int DoFightTos(char *playername,int playerhealth,int playerattack,int playercritical)
{
    srand(time(NULL));
    int action;
    strcpy(Tos.Name,"Toasakan");
    Tos.Health = 1000;
    Tos.Attack = 5;
    Tos.Critical = 50;
    int TosBowActivated = 0, defenseSuccess = 0;
    printf("You encounter Tossakan!\n");

    while (playerhealth > 0 && Tos.Health > 0)
    {
        printf("Action\n1. Attack\n2. Defence\nChoose an action: ");
        scanf("%d", &action);

        system("clear");
        switch (action)
        {
        case 1: // Attack
            printf("%s attacks %s!\n", playername, Tos.Name);
            Tos.Health = DoAttack(playerattack, Tos.Health, playercritical,playername);
            printf("%s's health is now %d\n\n", Tos.Name, Tos.Health);
            defenseSuccess = 0;
            break;
        case 2: // Defence
            printf("%s defends!\n", playername);
            defenseSuccess = DoDefence(playerhealth, 70); // Set defense success
            if(defenseSuccess) playerhealth += 10;
            printf("%s's health is now %d\n\n", playername, playerhealth);
            break;
        default:
            printf("Invalid action. Please choose again.\n");
            continue;
        }

        // Enemy's turn
        int i = rand() % 20;
        if (Tos.Health > 0)
        {
            if(i<13) //70%
            {
                if(TosBowActivated==0) 
                {
                    printf("%s attacks %s with 20 hands!\n", Tos.Name, playername);
                    if (!defenseSuccess) // Apply damage only if defense was not successful
                    {
                        playerhealth = DoAttack(Tos.Attack, playerhealth, Tos.Critical,playername);
                    }
                    else printf("did 0 damage as %s sucessfully defence it!\n",playername);
                }
                else if(TosBowActivated==1)
                {
                    printf("%s attacks %s with ***BOW!!!\n ***BOW brake your defence!", Tos.Name, playername);
                    playerhealth = DoAttack(Tos.Attack, playerhealth, Tos.Critical,playername);
                }
                printf("%s's health is now %d\n\n", playername, playerhealth);
            }
            else if(i<14) //5%
            {
                if(TosBowActivated==0) //only once
                {
                    printf("%s use his ability! ***Bow!\n",Tos.Name);
                    Tos.Attack *= 5;
                    playerhealth = DoAttack(Tos.Attack, playerhealth, Tos.Critical,playername);
                    printf("\n%s's health is now %d\n", playername, playerhealth);
                    TosBowActivated++;
                }
                else printf("%s Stunned\n\n",Tos.Name);
            }
            else //25%
            {
                printf("%s Stunned\n\n",Tos.Name);
            }
        }
    }
    if (playerhealth > 0)
    {
        system("clear");
        printf("%s wins!\n", playername);
        return playerhealth;
    }
    else
    {
        system("clear");
        printf("%s wins!\n", Tos.Name);
        return 0;
    }
}