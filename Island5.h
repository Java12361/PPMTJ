#include <stdio.h>
#include "Function.h"
#define bold "\e[1m"
#define bold_off "\e[m"

void doIntro5(char player[])
{
    system("clear");
    print_mid("[ CHAPTER 5 ]\n");
    print_mid("Lost in the Jungle\n");
    print_mid("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"), sleep(1);
    art_i5();
    conv(player,"I can't believe I'm still alive. This must be Meuang Lap Lae island that the Nagas mentioned.");
    conv(player,"But where is Phra-Ram? Phra-Ram!!, you haven't told the mission yet. Where are you?!");
    print_mid("[ While you are exploring the island and calling out for Phra-Ram, you spot");
    print_mid("a glass bottle floating nearby. Curious, you pick it up and find a message inside. ]"), sleep(1);
    print_mid("____________________________________________________________________________________\n");
    print_mid("Sheet of paper 1\n");
    print_mid("____________________________________________________________________________________\n");
    print_mid("'Journey to unravel each mystery, and therein lies the answer you seek.'\n");
    print_mid("____________________________________________________________________________________\n"), sleep(2);
    conv(player,"Hmm, so it means there will be another sheet?");
    conv(player,"Oh!, wait... what's that!");
    pressEnterToContinue();
}

void doOutro5(char player[])
{
    conv(player,"I'm so tired...");
    conv(player,"I'll take a break until the old man returns...");
    print_mid("[ Exhaustion takes over, and you fall asleep. ]");
    print_mid(". . ."), sleep(1);
    print_mid(" . . "), sleep(1);
    print_mid("  .  ");
    print_mid("____________________________________________________________________________________\n"), sleep(1);
    print_mid(" [ In a dream, you see a man embracing his lifeless lover, promising to bring her back to life. ] ");
    print_mid("?: I swear! I'll do everything in my power to bring you back to life, my dear");
    print_mid("____________________________________________________________________________________\n"), sleep(1);
    print_mid("."), sleep(1);
    print_mid("."), sleep(1);
    print_mid("."), sleep(1);
    doYesNoQues("Hey!... Hey! kid, you alright?");
    print_mid(" [ You wake up from a deep sleep and you heard Phra-Ram call you so you get one a ship. ] ");
    print_mid(" [ ...The man in your dream feels just like Rama..., you think. ]");
    pressEnterToContinue();
}
int doIsland5(char player[])
{
    doIntro5(player);
    char Q1[]= {"____________________________________________________________________________________\n"
                "                                  Sheet of paper 2\n"
                "____________________________________________________________________________________\n"
                "        ' The jester of the jungle green,     Was the funniest sight ever seen.\n"
                "     With a skip and a hop,                   From tree top to top,\n"
                "     He was the king of the jungle scene.\n"
                "                                By Dan Higgins 2024\n"
                "____________________________________________________________________________________\n"
                "\nWhat is it?\n"};

    char Q2[]= {"____________________________________________________________________________________\n"
                "                                  Sheet of paper 3\n"
                "____________________________________________________________________________________\n"
                "        ' This pirate of the over sea,		   No black-hulled brig he sails,\n"
                "     No black flag at the mizzen-peak	       Flaunts death-heads to the gales.\n"
                "     Yet fiercer than the wild Corsair	       This pirate of the upper air.\n"
                "     Watch how he listless drifts along,	   His wings with winds at sport— \n"
                "     But look! a sail has hove in sight,	   A dove has crossed to port.\n"
                "     See how he crowds on ev'ry sail          And screams his war-cry to the gale.\n"
                "                               By James Edwin Campbell                              \n"
                "____________________________________________________________________________________\n"
                "\nWhat is it?\n"};
                
    char Q3[]= {"_______________________________________________________________________________________________\n"
                "                                         Sheet of paper 4 \n"
                "_______________________________________________________________________________________________\n"
                "     This noble monarch of the Afric waste		    Meets with no rival to contest his reign,\n"
                "   With his surpassing strength and agile stride	He can o'er come each creature of the plain.\n"
                "   He dashes to the earth the tall giraffe			Who towers above the summits of the woods;\n"
                "   He tracks the herds of shaggy buffaloes,		And slays the bull in solitudes;\n"
                "   He preys on nimble flocks of antelopes,			The pallah, oryx, quagga and wild-beest.\n"
                "   O'ertakes the blesbok in its swiftest flight,	On zebra and the eland makes his feast.\n"
                "                                         by Isaac McLellan\n"
                "______________________________________________________________________________________________\n"
                "\nWhat is it?\n"};
                
    char Q4[] = {"____________________________________________________________________\n"
                "                           Sheet of paper 5\n"
                "_____________________________________________________________________\n"
                "   ' A narrow fellow in the grass		    Occasionally rides;\n"
                "   You may have met him, — did you not,	His notice sudden is.\n"
                "   The grass divides as with a comb,		A spotted shaft is seen;\n"
                "   And then it closes at your feet		    And opens further on. '\n"
                "                          by Emily Dickinson"
                "_____________________________________________________________________\n"
                "\nWhat is it?\n"};

    char *CQ1[] = {"Tiger", "Salmon", "Hawk", "Monkey"};
    char *CQ2[] = {"Tiger", "Salmon", "Hawk", "Gorilla"};
    char *CQ3[] = {"Tiger", "Salmon", "Lion", "Gorilla"};
    char *CQ4[] = {"Tiger", "Snake", "Worm", "Rat"};

    int ans = doChoiceQues(Q1, CQ1, 4);
    if (ans==4)
    {
        system("clear");
        conv(player,"It's about a " bold "monkey?" bold_off " Hmmm...");
        print_mid("[ You spot a " bold "monkey" bold_off " insight ]\n");
        conv(player,"There! I see another sheet of paper!");
        print_mid(" [ You're approaching it with something you think is a gun in your hand ]\n");
        conv(player,"Aight then you take this BANANA and give me that paper aight?");
        conv("Monkey","Oo oo ah ah ook okok");
        conv(player,"I'll take that as a yes.");
        print_mid(" [ You start reading the paper. ]\n");
        pressEnterToContinue();

        ans = doChoiceQues(Q2, CQ2, 4);
        if (ans==3)
        {
            conv(player,"It is definitely a " bold "hawk!" bold_off);
            print_mid("[ You start to look around and looking for it a hawk ]");
            sleep(1);
            print_mid("[ You found a " bold "hawk!" bold_off " at a tree around the hills ]");
            print_mid("[ There was a piece of paper tied to its leg ]");
            conv(player,"Wait... another piece of paper? again? ");
            print_mid(" [ You take out the piece of paper and start to read it. ] ");
            pressEnterToContinue();
            ans = doChoiceQues(Q3, CQ3, 4);
            if (ans==3)
            {
                conv(player,"Let's find a " bold "Lion!" bold_off);
                print_mid(" [ Suddently, you looking for a lion ]");
                sleep(1);
                print_mid(" [ It's took a decade to find such a lion in this tiny island... ]");
                sleep(3);
                print_mid("[ Finally! you found it, but lacking the courage to approach, then you hesitate for a while...");
                print_mid("However, it notices you and begins to walk toward you. ]");
                sleep(2);
                print_mid("[ Eventually, it poop out a piece of paper from its buttt. ]");
                conv(player,"Ewww ");

                pressEnterToContinue();
                
                ans = doChoiceQues(Q4, CQ4, 4);
                if (ans==2)
                {
                    conv(player,"I should looking for a " bold "Snake" bold_off "this time.");
                    print_mid("[ Upon encountering a snake, it circles you before slithering deeper into the forest, seemingly urging you to follow. ]");
                    print_mid("[ It leads you to its nest, filled with broken glass pieces. You enter, pick up a shard, and notice scattered papers nearby. ]");
                    conv(player,"finally found it! And... that's paper?");
                    char q[] = {" *** would you like to check it out? *** "};
                    if(doYesNoQues(q)==1)
                    {
                        print_mid("____________________________________________________________________________________\n");
                        print_mid("__________");
                        print_mid("Don't trust too fast, lest folly reign, keep your heart guarded from deceit's domain.");
                        print_mid("Stay clear-eyed, don't let appearances feign, be wise, be wary, in every terrain.");
                        print_mid("__________");
                        print_mid("____________________________________________________________________________________\n");
                    }
                    else
                    {
                        conv(player,"I don't have time for this!");
                    }
                    sleep(1);
                    doOutro5(player);
                    print_mid("[ You finally found a fifth mirror! ]");
                    pressEnterToContinue();
                    system("clear");
                    return 1; // get mirror + sp item
                }
                else
                {
                    system("clear");
                    if(ans == 1) conv(player,"I should looking for a " bold "Tiger!" bold_off " this time");
                    else if(ans == 3) conv(player,"I should looking for a " bold "Snake!" bold_off " this time");
                    else if(ans == 4) conv(player,"I should looking for a " bold "Rat!" bold_off " this time");
                    print_mid(" [ You searching for it ] ");
                    sleep(1);
                    print_mid(" [ You found no other paper ] ");
                    conv(player,"Damn, I think I got it wrong this time");
                    conv(player,"what a wasted of time");
                }
            }
            else
            {
                system("clear");
                if(ans == 1) conv(player,"Let's find a " bold "Tiger!" bold_off);
                else if(ans == 2) conv(player,"Let's find a " bold "Salmon!" bold_off);
                else if(ans == 4) conv(player,"Let's find a " bold "Gorilla!" bold_off);
                conv(player,"Ah, what a wasted of time");
            }
        }
        else
        {
            system("clear");
            if(ans == 1) conv(player,"It is definitely a " bold "Tiger?" bold_off);
            else if(ans == 2) conv(player,"It is definitely a " bold "Salmon?" bold_off);
            else if(ans == 4) conv(player,"It is definitely a " bold "Gorilla?" bold_off);
            conv(player,"There sould be more I think");
            conv(player,"..whatever, it's just a wasted of time");
        }
    }
    else
    {
        system("clear");
        if(ans == 1) conv(player,"It's about a " bold "Tiger?" bold_off " Hmmm...");
        else if(ans == 2) conv(player,"It's about a " bold "Salmon?" bold_off " Hmmm...");
        else if(ans == 3) conv(player,"It's about a " bold "Hawk?" bold_off " Hmmm...");
        conv(player,"I should looking for them or what?");
        conv(player,"Damn I got no clue... Ah!");
    }
    doOutro5(player);
    return 0;
}
