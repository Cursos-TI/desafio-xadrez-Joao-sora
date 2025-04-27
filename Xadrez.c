#include <stdio.h>

// Movimento cavalo
void cavalo(int casas){

    for(int move = 1, cavalo = 1; move <= 1 && cavalo <= 2; move++, cavalo++) //for com estrutura avançada.
    {
        if(cavalo !=2 && move != 1) break; // condições extras para prevenir futuros erros.
        {
            while (cavalo <= 2 && move <= 1)
            {
                printf("Cima.\n");
                cavalo++;
            }
            printf("Direita.\n");
        }
    }
}
// Movimento torre
void torre(int casas){

    if (casas > 0)
    {
        printf("Direita\n");
        torre(casas - 1);
    }
}
// Movimento bispo 
void bispo(int casas){

    if (casas > 0) // Estrutura de recursividade e loops aninhados.
    {
        int casa = 1;
        while (casa <= 1)
        { int move = 1;
            printf("Cima - ");
            while (move <= 1)
            {
                printf("Direita\n");
                move++;
            }
            casa++;
        }
        bispo(casas - 1);
    }
}
// Movimento rainha
void rainha(int casas){

    if (casas > 0)
    {
        printf("Esquerda\n");
        rainha(casas  - 1);
    }
}
// Função principal
int main(){
    int movetorre = 5, movebispo = 5, moverainha = 8, movecavalo;

    printf("\nMovimento da Torre\n");
    torre(movetorre);

    printf("\nMovimento do bispo\n");
    bispo(movebispo);
 
    printf("\nMovimento Rainha\n");
    rainha(moverainha);

    printf("\nMovimento do Cavalo\n");
    cavalo(movecavalo);
    printf("\n");

    return 0;
}