#include <stdio.h>
#include <stdlib.h>

void pressEnterToContinue()
 {
     printf("Press Enter to Continue");
     while(getchar()!='\n');
     system("clear");
 }