#include <stdio.h>
#include <unistd.h> // for sleep

int is1q2()
{
    int q1,q1f;
    do
            {

                char ChoicesQuestion1[4][25] = {"One", "Two", "Three", "Four"};

                printf("Question2\n");
                for (int i = 0; i < 4; i++) // print choices
                {
                    printf("%d.%s \n", i + 1, ChoicesQuestion1[i]);
                }
                printf(" Your Answer is (number) : ");
                scanf("%d", &q1);
                if (q1 < 1 && q1 > 4)
                    continue; // check q1

                do
                {
                    switch (q1)
                    {
                    case 1:
                    {
                        printf("WRONG!\n\nQuestion2\n");
                        for (int i = 1; i < 4; i++) // print choices
                        {
                            printf("%d.%s \n", i, ChoicesQuestion1[i]);
                        }
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 2)
                        {
                            // another question function
                        }
                        else
                            return 0; // กระจกแตก
                    }
                    break;
                    case 2:
                    {
                        printf("WRONG!\n\nQuestion2\n");
                        printf("1.%s\n", ChoicesQuestion1[0]);
                        printf("2.%s\n", ChoicesQuestion1[2]);
                        printf("3.%s\n", ChoicesQuestion1[3]);
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 2)
                        {
                            // another question function
                        }
                        else
                            return 0; // กระจกแตก
                    }
                    break;
                    case 3:
                    {
                        // correct another funstion
                        return 1;
                    }
                    break;
                    case 4:
                    {
                        printf("WRONG!\n\nQuestion2\n");
                        for (int i = 0; i < 3; i++)
                        {
                            printf("%d.%s \n", i + 1, ChoicesQuestion1[i]);
                        }
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 3)
                        {
                            return 1;
                            // another question function
                        }
                        else
                            return 0; // กระจกแตก
                    }
                    break;
                    }
                } while (q1f >= 1 && q1f <= 3);

            } while (q1 >= 1 && q1 <= 4);

}

int is1cleansing()
{
    char choice1;
    int q1, q1f;
    do
    {

        printf("เลือกว่า จะชำระวิญญาณผีเสื้อสมุทรมั้ย"); // when condition is wrong it's repeated
        scanf(" %c", &choice1);
        if (choice1 == 'Y' || choice1 == 'y')
        {
            do
            {

                char ChoicesQuestion1[4][25] = {"One", "Two", "Three", "Four"};

                printf("Question1\n");
                for (int i = 0; i < 4; i++) // print choices
                {
                    printf("%d.%s \n", i + 1, ChoicesQuestion1[i]);
                }
                printf(" Your Answer is (number) : ");
                scanf("%d", &q1);
                if (q1 < 1 && q1 > 4)
                    continue; // check q1

                do
                {
                    switch (q1)
                    {
                    case 1:
                    {
                        printf("WRONG!\n\nQuestion1\n");
                        for (int i = 1; i < 4; i++) // print choices
                        {
                            printf("%d.%s \n", i, ChoicesQuestion1[i]);
                        }
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 2)
                        {
                            is1q2();//question 2 function
                        }
                        else
                            return 0; // กระจกแตก
                    }
                    break;
                    case 2:
                    {
                        printf("WRONG!\n\nQuestion1\n");
                        printf("1.%s\n", ChoicesQuestion1[0]);
                        printf("2.%s\n", ChoicesQuestion1[2]);
                        printf("3.%s\n", ChoicesQuestion1[3]);
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 2)
                        {
                            is1q2();
                        }
                        else
                            return 0;
                    }
                    break;
                    case 3:
                    {
                        is1q2();
                    }
                    break;
                    case 4:
                    {
                        printf("WRONG!\n\nQuestion1\n");
                        for (int i = 0; i < 3; i++)
                        {
                            printf("%d.%s \n", i + 1, ChoicesQuestion1[i]);
                        }
                        printf(" Your Answer is (number) : ");
                        scanf("%d", &q1f);
                        if (q1f == 3)
                        {
                            is1q2();//question 2 function
                        }
                        else
                            return 0;\
                    }
                    break;
                    }
                } while (q1f >= 1 && q1f <= 3);

            } while (q1 >= 1 && q1 <= 4);
        }
        else if (choice1 == 'N' || choice1 == 'n')
            return 0; 

    } while (choice1 != 'Y' && choice1 != 'y' && choice1 != 'N' && choice1 != 'n');
}

int main()
{
    int glass = 0;
    // background story
    printf("Story 1\n");
    sleep(1);
    printf("Story 2\n");

    //island 1 cleansing
    glass += is1cleansing();
    printf("%d", glass);

    return 0;
}
