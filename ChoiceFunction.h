#include <stdio.h>
int choice1A2(char question[5][30]);
int choice2A2(char question[5][30]);
int choice3A2(char question[5][30]);
int choice4A2(char question[5][30]);
int choice1A1(char question[5][30]);
int choice2A1(char question[5][30]);
int choice3A1(char question[5][30]);
int choice4A1(char question[5][30]);

int choice1A2(char question[5][30])
{
    int answer,answer2;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1:
        {
            printf("correct\n");
            return 1;//correct return 1
            break;
        }
        case 2:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==1)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 3:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==1)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 4:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[3]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==1)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
    }
}

int choice2A2(char question[5][30])
{
    int answer,answer2;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[2]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==1)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 2:
        {
            printf("correct\n");//correct return 1
            return 1;
            break;
        }
        case 3:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==2)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 4:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[3]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==2)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
    }
}

int choice3A2(char question[5][30]) //back work here
{
    int answer,answer2;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[2]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==2)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 2:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==2)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 3:
        {
            printf("correct\n");
            return 1;//correct return 1
            break;
        }
        case 4:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[3]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==3)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
    }
}

int choice4A2(char question[5][30]) //back work here
{
    int answer,answer2;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[2]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==3)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 2:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[3]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==3)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 3:
        {
            printf("Incorrect!\n\n%s\n",question[0]);
            printf("1.%s\n", question[1]);
            printf("2.%s\n", question[2]);
            printf("3.%s\n", question[4]);
            do
            {
                printf("Answer : ");
                scanf("%d", &answer2);
                if(answer2<1||answer2>3)
                {
                    printf("Answer shold be between 1 to 3\n");
                    continue;
                }
                else if(answer2==3)
                {
                    printf("correct\n");
                    return 1;//correct return 1
                }
                else return 0;
            } while (answer2<1||answer2>3);
            break;
        }
        case 4:
        {
            printf("correct\n");//correct return 1
            return 1;
            break;
        }
    }
}

int choice1A1(char question[5][30])
{
    int answer;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1: return 1;
        case 2: return 0;
        case 3: return 0;
        case 4: return 0;
    }
}

int choice2A1(char question[5][30])
{
    int answer;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1: return 0;
        case 2: return 1;
        case 3: return 0;
        case 4: return 0;
    }
}

int choice3A1(char question[5][30])
{
    int answer;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1: return 0;
        case 2: return 0;
        case 3: return 1;
        case 4: return 0;
    }
}

int choice4A1(char question[5][30])
{
    int answer;
    printf("%s \n",question[0]); //print question
    for(int i=1;i<5;i++) //print choice
    {
        printf("%d.%s \n",i,question[i]);
    }
    do //check answer
    {
        printf("Answer : ");
        scanf("%d", &answer);
        if (answer<1||answer>4) printf("Answer shold be between 1 to 4\n");
    } while (answer<1||answer>4);
    switch(answer)
    {
        case 1: return 0;
        case 2: return 0;
        case 3: return 0;
        case 4: return 4;
    }
}