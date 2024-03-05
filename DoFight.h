#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Stats
{
    char Name[30];
    int Health, Attack, Critical;
};

int DoAttack(int attackerAttack, int defenderHealth, int criticalChance)
{
    int damage = attackerAttack+(rand()%attackerAttack);
    if (rand() % 100 < criticalChance)
    {
        printf("Critical hit!\n");
        damage *= 2; // Double damage for a critical hit
    }
    return defenderHealth - damage;
}

int DoDefence(int currentHealth, int healChance)
{
    if (rand() % 100 < healChance)
    {
        printf("Defence successful! Healed 10 health.\n");
        return currentHealth + 10;
    }
    else
    {
        printf("Defence failed! No healing.\n");
        return currentHealth;
    }
}

void Drawing(int n) //for drawing later
{
    switch (n)
    {
    case 1:
        break;
    
    default:
        break;
    }
}

int main()
{
    srand(time(NULL)); // Seed the random number generator

    struct Stats player, enemy;
    int action;

    printf("Insert your name: ");
    scanf("%s", player.Name);
    player.Health = 500;
    player.Attack = 10;
    player.Critical = 30;

    strcpy(enemy.Name, "Praram");
    enemy.Health = 300;
    enemy.Attack = 15;
    enemy.Critical = 0;

    while (player.Health > 0 && enemy.Health > 0)
    {
        printf("Action\n1. Attack\n2. Defence\nChoose an action: ");
        scanf("%d", &action);
        system("clear");

        switch (action)
        {
        case 1: // Attack
            printf("%s attacks %s!\n", player.Name, enemy.Name);
            enemy.Health = DoAttack(player.Attack, enemy.Health, player.Critical);
            printf("%s's health is now %d\n\n", enemy.Name, enemy.Health);
            break;
        case 2: // Defence
            printf("%s defends!\n", player.Name);
            player.Health = DoDefence(player.Health, 70);
            printf("%s's health is now %d\n", player.Name, player.Health);
            break;
        default:
            printf("Invalid action. Please choose again.\n");
            continue;
        }

        // Enemy's turn
        int i = rand() % 10;
        if (enemy.Health > 0)
        {
            if(i<6) //70%
            {
                printf("%s attacks %s!\n", enemy.Name, player.Name);
                player.Health = DoAttack(enemy.Attack, player.Health, enemy.Critical);
                printf("%s's health is now %d\n", player.Name, player.Health);
            }
            else if(i<7) //10%
            {
                printf("%s Rest and heal up\n",enemy.Name);
                enemy.Health += 20;
                printf("%s's health is now %d\n",enemy.Name,enemy.Health);
            }
            else //20%
            {
                printf("%s Doing nothing\n",enemy.Name);
            }
        }
    }

    if (player.Health > 0)
    {
        printf("%s wins!\n", player.Name);
    }
    else
    {
        printf("%s wins!\n", enemy.Name);
    }

    return 0;
}
