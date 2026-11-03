#include <stdlib.h>
#include <stdio.h>

int main()
{

   char mot[50];

   printf("Choisissez un mot\n");
   scanf("%s",mot);

   int count = 0;
   while(count < 5)
   {
    printf("%d : %s\n",count,mot);
    count = count + 1;
   }

    exit(0);
}