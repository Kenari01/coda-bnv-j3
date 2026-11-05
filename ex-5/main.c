#include <stdlib.h>
#include <stdio.h>

int main()
{
    char symbole;
    int nombre;

    printf("Choisissez un symbole (+ ou -) : ");
    scanf(" %c", &symbole);

    printf("Saisissez un nombre différent de 0 : ");
    scanf("%d", &nombre);

    if (symbole == '+')
    {
        int count = 0;
        while (count <= nombre)
        {
            printf("%d\n", count);
            count = count + 1;
        }
    }
    else if (symbole == '-')
    {
        int count = nombre;
        while (count >= 0)
        {
            printf("%d\n", count);
            count = count - 1;
        }
    }
    else
    {
        printf("Symbole non reconnu\n");
    }

    

    exit(0);
    
}
