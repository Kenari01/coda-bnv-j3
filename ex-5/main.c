#include <stdlib.h>
#include <stdio.h>

int main()
{

   char symbole;
    int nombre;

    printf("Choisissez un symbole (+ ou -) : ");
    scanf(" %c", &symbole);

    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    if (symbole == '+')
    {
        // De 0 jusqu'au nombre
        for (int i = 0; i <= nombre; i++)
        {
            printf("%d\n", i);
        }
    }
    else if (symbole == '-')
    {
        // Du nombre jusqu'à 0
        for (int i = nombre; i >= 0; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Symbole non reconnu\n");
    }

    exit(0);
}