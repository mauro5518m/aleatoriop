#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int aleatorio(int min, int max)
{
    return min + rand() % (max - min + 1);
}

int main()
{
    int numero_secreto;
    int tentativa;

 
    srand(time(NULL));

    numero_secreto = aleatorio(1, 100);

    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("Tente adivinhar o numero entre 1 e 100\n");

    do
    {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        if(tentativa > numero_secreto)
        {
            printf("Muito alto!\n");
        }
        else if(tentativa < numero_secreto)
        {
            printf("Muito baixo!\n");
        }
        else
        {
            printf("Parabens! Voce acertou o numero!\n");
        }

    } while(tentativa != numero_secreto);

    return 0;
}
