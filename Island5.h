#include <stdio.h>
#include "Function.h"
#define bold "\e[1m"
#define bold_off "\e[m"

void doIntro5(char player[])
{
    conv(player,"I can't believe I'm still alive. This must be Meuang Lap Lae island that Nagas mentioned.");
    conv(player,"But where is Phra-Ram? Phra-Ram!!, you haven't told the mission yet. Where are you?!");
    print_mid("[ While you were exploring the island and calling out for Phra-Ram, you spotted a glass bottle ]");
    print_mid("[ it's floating nearby. As your curious, you pick it up and find a message inside. ]");
    sleep(1);
    print_mid("____________________________________________________________________________________\n");
    print_mid("Sheet of paper 1");
    print_mid("____________________________________________________________________________________\n");
    sleep(1);
    print_mid("\'Journey to unravel each mystery, and therein lies the answer you seek.\'");
    sleep(1);
    print_mid("____________________________________________________________________________________\n");
    conv(player,"Hmm, so it means there will be another sheet?");
    conv(player,"Oh!, wait... what's that!");
    print_mid("____________________________________________________________________________________\n");
    print_mid("Sheet of paper 2");
    print_mid("____________________________________________________________________________________\n");
    sleep(1);
    print_mid("\'The jester of the jungle green");
    sleep(1);
    print_mid("Was the funniest sight ever seen");
    sleep(1);
    print_mid("With a skip and a hop");
    sleep(1);
    print_mid("From tree top to top");
    sleep(1);
    print_mid("He was the king of the jungle scene.\'\n");
    sleep(1);
    print_mid("By Dan Higgins 2024");
    print_mid("____________________________________________________________________________________\n");
}

void doOutro5(char player[])
{
    conv(player,"I'm so tired...");
    conv(player,"I'll take a break until the old man returns...");
    print_mid("[ Exhaustion takes over, and you fall asleep. ]");
    print_mid(". . .");
    sleep(2);
    print_mid(". .");
    sleep(1);
    print_mid(".");
    sleep(1);
    print_mid("____________________________________________________________________________________\n");
    sleep(1);
    print_mid(" [ In a dream, you see a man embracing his lifeless lover, promising to bring her back to life. ] ");
    sleep(1);
    print_mid("?!!?!?! ");
    sleep(1);
    print_mid("I swear! I'll do everything in my power to bring you back to life, my dear");
    sleep(1);
    doYesNoQues("Hey!... Hey! kid, you alright?");
    print_mid(" [ You wake up from a deep sleep and you heard Phra-Ram call you so you get one a ship. ] ");
    print_mid(" [ ...The man in your dream feels just like Rama..., you think. ]");
    pressEnterToContinue();
}
int doIsland5(char player[])
{
    doIntro5(player);
    pressEnterToContinue();
    char Q1[] = {"The jester of the jungle green\nWas the funniest sight ever seen.\nWith a skip and a hop\nFrom tree top to top,\nHe was the king of the jungle scene.\n\n *** What is it? ***"};
    char Q2[] = {"This pirate of the over sea\nNo black-hulled brig he sails,\nNo black flag at the mizzen-peak\nFlaunts death-heads to the gales.\nYet fiercer than the wild Corsair\nThis pirate of the upper air.\nWatch how he listless drifts along\nHis wings with winds at sport\nBut look! a sail has hove in sight\nA dove has crossed to port.\nSee how he crowds on ev'ry sail\nAnd screams his war-cry to the gale.\n\n *** What is it? *** "};
    char Q3[] = {"This noble monarch of the Afric waste	Meets with no rival to contest his reign,\nWith his surpassing strength and agile stride\nHe can o'er come each creature of the plain.\nHe dashes to the earth the tall giraffe\nWho towers above the summits of the woods;\nHe tracks the herds of shaggy buffaloes\nAnd slays the bull in solitudes;\nHe preys on nimble flocks of antelopes\nThe pallah, oryx, quagga and wild-beest.\nO'ertakes the blesbok in its swiftest flight\nOn zebra and the eland makes his feast\n\n *** What is it? ***"};
    char Q4[] = {"A narrow fellow in the grass\nOccasionally rides;\nYou may have met him, — did you not,His notice sudden is.\nThe grass divides as with a comb\nA spotted shaft is seen;\nAnd then it closes at your feet\nAnd opens further on.\n\n *** What is it? *** "};

    char *CQ1[] = {"Tiger", "Salmon", "Hawk", "Monkey"};
    char *CQ2[] = {"Tiger", "Salmon", "Hawk", "Gorilla"};
    char *CQ3[] = {"Tiger", "Salmon", "Lion", "Gorilla"};
    char *CQ4[] = {"Tiger", "Snake", "Worm", "Rat"};

    if (doChoiceQues(Q1, CQ1, 4)==4)
    {
        conv(player,"The letter about a " bold "monkey?" bold_off " Hmmm...");
        print_mid("[ You spotted a " bold "monkey" bold_off " insight ]");
        printf("\n");
        conv(player,"Hey!.. Hey! is that's a Monkey?, on this beach!?");
        print_mid(" [ You approching it in a distance with something you think is gun in your hand ]");
        conv(player,"aight then you take this BANANA and give me that paper to me aight?.");
        conv("Monkey","oo oo ah ah ook okok");
        conv(player,"HA! I take that as a yes.");
        print_mid(" [ You start to reading it ] ");
        print_mid("____________________________________________________________________________________\n");
        print_mid("Sheet of paper 3");
        print_mid("____________________________________________________________________________________\n");
        sleep(1);
        print_mid("\' This pirate of the over sea");
        sleep(1);
        print_mid("No black-hulled brig he sails,");
        sleep(1);
        print_mid("No black flag at the mizzen-peak");
        sleep(1);
        print_mid("Flaunts death-heads to the gales.");
        sleep(1);
        print_mid("Yet fiercer than the wild Corsair");
        sleep(1);
        print_mid("This pirate of the upper air.");
        sleep(1);
        print_mid("Watch how he listless drifts along");
        sleep(1);
        print_mid("His wings with winds at sport—");
        sleep(1);
        print_mid("But look! a sail has hove in sight");
        sleep(1);
        print_mid("A dove has crossed to port.");
        sleep(1);
        print_mid("See how he crowds on ev'ry sail");
        sleep(1);
        print_mid("And screams his war-cry to the gale.\'\n");
        sleep(1);
        print_mid("By James Edwin Campbell");
        print_mid("____________________________________________________________________________________\n");
        pressEnterToContinue();

        if (doChoiceQues(Q2, CQ2, 4)==3)
        {
            conv(player,"It is definitely a " bold "hawk!" bold_off);
            print_mid("[ You start to look around and looking for it a hawk ]");
            sleep(1);
            print_mid("[ You found a " bold "hawk!" bold_off " at a tree around the hills ]");
            print_mid("[ There was a piece of paper tied to its leg ]");
            conv(player,"Wait... another piece of paper? again? ");
            print_mid(" [ You take out the piece of paper and start to read it. ] ");

            print_mid("____________________________________________________________________________________\n");
            print_mid("Sheet of paper 4");
            print_mid("____________________________________________________________________________________\n");
            sleep(1);
            print_mid("\'This noble monarch of the Afric waste");
            sleep(1);
            print_mid("Meets with no rival to contest his reign");
            sleep(1);
            print_mid("With his surpassing strength and agile stride");
            sleep(1);
            print_mid("He can o'er come each creature of the plain.");
            sleep(1);
            print_mid("He dashes to the earth the tall giraffe");
            sleep(1);
            print_mid("Who towers above the summits of the woods;");
            sleep(1);
            print_mid("He tracks the herds of shaggy buffaloes");
            sleep(1);
            print_mid("And slays the bull in solitudes");
            sleep(1);
            print_mid("He preys on nimble flocks of antelopes");
            sleep(1);
            print_mid("The pallah, oryx, quagga and wild-beest.");
            sleep(1);
            print_mid("O'ertakes the blesbok in its swiftest flight");
            sleep(1);
            print_mid("On zebra and the eland makes his feast. \'\n");
            sleep(1);
            print_mid("by Isaac McLellan");
            sleep(1);
            print_mid("____________________________________________________________________________________\n");
            pressEnterToContinue();
            if (doChoiceQues(Q3, CQ3, 4)==3)
            {
                conv(player,"Let's find a" bold "Lion!" bold_off);
                print_mid(" [ Suddently, you looking for a lion ]");
                sleep(1);
                print_mid(" [ It's took a decade to find such a lion in this tiny island... ]");
                sleep(3);
                print_mid("[ Finally! you found it, but lacking the courage to approach, then you hesitate for a while...");
                print_mid("However, it notices you and begins to walk toward you. ]");
                sleep(2);
                print_mid("[ Eventually, it poop out a piece of paper from its buttt. ]");
                conv(player,"Ehewww (tt ew sound)");

                print_mid("____________________________________________________________________________________\n");
                print_mid("Sheet of paper 5");
                print_mid("____________________________________________________________________________________\n");
                sleep(1);
                print_mid("\'A narrow fell** in the grass");
                sleep(1);
                print_mid("Occasionally rides");
                sleep(1);
                print_mid("You may have met him, — d*d you not,");
                sleep(1);
                print_mid("His notice sud**n is.");
                sleep(1);
                print_mid("The grass div*des as with a comb");
                sleep(1);
                print_mid("A sp**ted shaft is seen");
                sleep(1);
                print_mid("And ***n it closes at your feet");
                sleep(1);
                print_mid("And opens further *n. \'\n");
                sleep(1);
                print_mid("by Emily* Dickinson");
                print_mid("____________________________________________________________________________________\n");
                pressEnterToContinue();
                
                if (doChoiceQues(Q4, CQ4, 4)==2)
                {
                    conv(player,"I should looking for a snake this time.");
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
            }
        }
    }
    doOutro5(player);
    return 0;
}