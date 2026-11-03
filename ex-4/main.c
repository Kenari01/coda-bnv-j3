#include <stdlib.h>
#include <stdio.h>

int main()
{

   int numb;
  
   printf("Choisissez un nombre entier : ");
   scanf("%d",&numb);

   int count = 0;
   while(count < numb)
   {
    printf("%d\n",count);
    count = count + 1;
   }

    exit(0);
}