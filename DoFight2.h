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

void DoFightParam(char *playername,int playerhealth,int playerattack,int playercritical,int flag)
{
    srand(time(NULL));
    int action;
    strcpy(Param.Name,"Phra-Ram");
    Param.Health = 200;
    Param.Attack = 20;
    Param.Critical = 0;
    int praramBowActivated = 0, defenseSuccess = 0;

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
                else printf("did 0 damage as %s sucessfully defence it!\n",playername);
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
        if(flag==1)
        {
            system("clear");
            conv(playername,"You underestimated me.");
            print_mid("[ You speak while taking mirror from Phra-Ram's hand");
            conv("Phra-Ram","Give the mirror back to me!");
            conv(playername,"Why are you so obsessed with the mirror?");
            conv("Phra-Ram","You asked me why? Because it would bring Sida back to life. She drowned, and I've dedicated my life to finding a way to revive her.");
            conv("Phra-Ram","I'm willing to do whatever it takes, even if it means harming others.");
            conv("Phra-Ram"," I knew that the magic mirror in the underwater world could revive Sida, so I went to obtain it.");
            conv("Phra-Ram","However, the Naga who ruled the underwater world refused to give it to me, so I killed them all.");
            conv("Phra-Ram","I almost obtained the mirror, but that Naga used their power to shatter it into pieces and send it to several dimensions.");
            conv("Phra-Ram","Additionally, I was cursed by Hades to become a ghost bound to a ship. That's why I must assist you in gathering the mirrors.");
            conv(playername,"Then why am I here?");
            conv("Phra-Ram","Siwa, he wants to help me.");
            conv(playername,"Well, thanks for telling.");
            print_mid(" [ You close your eyes and pray to the mirror ] ");
            conv("Phra-Ram","Hey, wait! The power of the mirror is ...");
            print_mid("[ You disappeared from that world before Phra-Ram had finished speaking. ]"); sleep(1);
            print_mid("."); sleep(2);
            print_mid("."); sleep(2);
            print_mid("."); sleep(2);
            print_mid("[ You open your eyes again, hoping to return home]"); sleep(1);
            print_mid("[unfortunately it seems that fate is not on your side]");
            print_mid("[ You appeared in ancient times. ]");
            conv(playername,"What the hell! Where am I?");
            print_mid("\e[31m[ ENDING ]\e[m");
        }
        else if(flag==2)
        {
            system("clear");
            conv(playername,"You underestimated me.");
            print_mid("[ You speak while taking mirror from Phra-Ram ]");
            conv("Phra-Ram","Give the mirror back to me!");
            print_mid("[ You pay no heed to Phra-Ram's words. You close your eyes and pray to the mirror ]"); sleep(1);
            print_mid("."); sleep(2);
            print_mid("."); sleep(2);
            print_mid("."); sleep(2);
            print_mid("[ As soon as you open your eyes, you find yourself standing before your house, back in your own world. ]"); sleep(1);
            print_mid("\e[32m[ HAPPY ENDING ]\e[m");
        }
    }
    else
    {
        if(flag==1)
        {
            system("clear");
            conv("Phra-Ram","You have greatly underestimated me. Know your place as a mere mortal;");
            conv("Phra-Ram","you cannot defeat someone who was once an incarnation of Narayana and had the assistance of Siwa.");
            conv("Phra-Ram","But because you're my toy to play with when I'm angry, I will tell you something.");
            conv("Phra-Ram","I'm just using you to revive Sida and seek revenge on the person who came to prevent her resurrection.");
            conv("Phra-Ram","I cannot do it myself because I'm cursed by Hades.");
            conv("Phra-Ram","I killed someone and destroyed the Naga clan to bring back my lover.");
            conv(playername,"bastard! I should have never believed your deceit.");
            conv("Phar-Ram","I can do anything to revive Sida!");
            print_mid("[ As soon as Phra-Ram finished speaking, he threw you into the sea before shooting an arrow into your leg. ]");
            conv("Phar-Ram"," Killing you isn't as satisfying as watching you endure a life of suffering.");
            conv("Phar-Ram"," As for this mirror, it's mine!");
            print_mid("[ You were left in that world, disabled and unable to walk. ]");
            print_mid("\e[31m[ ENDING ]\e[m");
        }
        else if(flag==2)
        {
            system("clear");
            print_mid("[ Your breath are weaken ]");
            conv("Phra-Ram","You have greatly underestimated me.");
            conv("Phra-Ram","Know your place as a mere mortal; you cannot defeat someone who was once an incarnation of Narayana and had the assistance of Siwa.");
            conv(playername,"bastard!  I should have never believed you!");
            conv("Phra-Ram","I can do worse than this!");
            print_mid("[ As soon as Phra-Ram finished speaking ]");
            print_mid("[ he threw you into the sea before shooting an arrow into your leg. ]");
            conv("Phra-Ram","Killing you isn't as satisfying as watching you endure a life of suffering.  And these mirrors, they're mine!");
            print_mid("[ You were left in Siam world, disabled and unable to walk. ]");
            print_mid("\e[31m[ ENDING ]\e[m");
        }
    }
}

int DoFightTos(char *playername,int playerhealth,int playerattack,int playercritical)
{
    srand(time(NULL));
    int action;
    strcpy(Tos.Name,"Thotsakan");
    Tos.Health = 1000;
    Tos.Attack = 5;
    Tos.Critical = 50;
    int TosBowActivated = 0, defenseSuccess = 0;
    printf("You encounter Thotsakan!\n");

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
        conv(Tos.Name,"You have won.");
        print_mid("[You walk towards the stone pedestal to retrieve the gem]");
        conv(Tos.Name,"Before you retrieve the gem, may I ask you a few questions.");
        conv(Tos.Name,"Why did that jerk hold all the mirrors?");
        conv(Tos.Name,"Why didn't that jerk ever mention that you required the gem to return home from the beginning, waiting until the mirrors' power was returned almost completely?");
        conv(Tos.Name,"If your desire is only to go back home, the gem is unnecessary; only the mirror is enough.");
        print_mid("[You don't pay attention to Thotsakan's words because you don't believe in him and continue walking.]");
        conv(Tos.Name,"I understand you think it hard to trust me due to my villain image.");
        conv(Tos.Name,"I admit I've done terrible things, taking countless innocent lives. ");
        conv(Tos.Name,"I know I'm not good. But who cursed me?");
        conv(Tos.Name,"This curse threatens not only my life but also my family's.");
        conv(Tos.Name,"It's haunted me since my past life. ");
        conv(Tos.Name,"Beware of that jerk. Use your wisdom. I cannot speak that jerk's name.");
        conv(playername,"What're you talking about?");
        conv(Tos.Name," As soon as you hand over the gem to that jerk, the power of the mirror reveals itself, surpassing all imagination.");
        conv(Tos.Name,"That guy will not only resurrect Sida but also unleash its own power, declaring war on Hades and the underwater world.");
        conv(Tos.Name,"The world will erupt into chaos, engulfed in a war of the gods, where humans will be mere pawns on the board.");
        print_mid("[You are hesitating over what Thotsakan said.]");
        conv(Tos.Name," I have an alternative solution for you. ");
        conv(Tos.Name,"Taking the false gem on the stone's left side will reduce jerks power.");
        conv(Tos.Name,"It is up to you to decide.");
        return playerhealth;
    }
    else
    {
        system("clear");
        print_mid("[ You realised that it is impossible to defeat Thotsakan, so you run away. ]"); sleep(1);
        conv(Tos.Name,"Before you go back and meet that jerk, I have something to say first.");
        conv(playername,"Why are you calling Phra-Ram like that! ");
        print_mid("[You stop running and turned back to face Thotsakan]");
        conv(Tos.Name,"Why did that jerk hold all the mirrors?");
        conv(Tos.Name,"Why didn't that jerk ever mention that you required the gem to return home from the beginning,");
        conv(Tos.Name,"waiting until the mirrors' power was returned almost completely?");
        conv(Tos.Name,"If your desire is only to go back home, the gem is unnecessary; only the mirror is enough.");
        conv(Tos.Name,"I understand you think it hard to trust me because I'm a " bold "Villain." bold_off );
        conv(Tos.Name,"I admit I've done terrible things, taking countless innocent lives.");
        conv(Tos.Name,"I know I'm not good. But who cursed me?");
        conv(Tos.Name,"This curse threatens not only my life but also my family's.");
        conv(Tos.Name,"It's haunted me since my past life. Beware of that jerk. Use your wisdom. I cannot speak that jerk's name.");
        print_mid("."), sleep(1);
        print_mid("."), sleep(1);
        print_mid("[ You kept running, hurriedly returning to the boat and sailing across the Acheron River to the  ship, where Phra-Ram was waiting. ]");
        print_mid("."), sleep(1);
        print_mid("."), sleep(1);
        print_mid("[ As soon as Phra-Ram saw you return empty-handed, he immediately became upset ]");
        conv(Param.Name,"Why did you come back empty-handed? I asked why you returned with nothing!");
        print_mid("[ You were shocked that Phra-Ram suddenly yelled at you ]");
        conv(playername,"I fought Thotsakan to take the gem but I lost to him, so he didn't give me the gem...");
        conv(Tos.Name,"That scoundrel again? Just a bit longer, and I'll successfully revive Sida. ");
        conv(Tos.Name,"I've dedicated myself to her resurrection, even slaughtering those in my path and seizing the magic mirror from the Nagas, wiping them out.");
        conv(Tos.Name,"Then cursed by Hades, trapped on this ship, just to see you fail in your mission? Just a bit more, and I'll succeed.");
        print_mid("[ You were stunned with Phra-Ram's words and realised that you have been tricked by him. ]");
        print_mid("[ Right now you believe in Thotsakan and want to reclaim the mirror from Rama ]");
        conv(playername,"Give the mirror back to me!");
        conv(Param.Name,"Why do I have to give it to you? You have no right to order me! Idiot!");
        print_mid("[ You begin fighting Phra-Ram for the mirror ]");
        return 0;
    }
}