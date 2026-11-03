#include <stdlib.h>
#include <stdio.h>

int main()
{

   int numb;
  
   printf("Choisissez un nombre entier : ");
   scanf("%d",&numb);

   if(numb == 42)
   {
      printf("Votre nobre est égal a 42 \n");
   }
    else if(numb < 42)
   {
	  printf("Votre nombre est inférieur a 42\n");
   }
     else if(numb > 42)
   {
	  printf("Votre nombre est supérieur a 42\n");
   }

    exit(0);
}