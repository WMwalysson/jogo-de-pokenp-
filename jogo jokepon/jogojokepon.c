#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolaJogador, escolhaComoutador;
    srand(time(0));

    printf("*** Jogo Jokepôn ***\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:");
    scanf("%d", &escolaJogador);

    escolhaComoutador = rand() % 3 + 1;
    switch (escolaJogador)
    {
    case 1:
        printf ("Jogador: Pedra - ");
        break;
        case 2:
        printf ("Jogador: Papel - ");
        break;
        case 3:
        printf ("Jogador: Tesoura - ");
        break;
    default:
    printf("Opção inválida\n");

        break;
    }

    switch (escolhaComoutador)
    {
    case 1:
        printf ("Computador: Pedra\n");
        break;
        case 2:
        printf ("Computador: Papel\n");
        break;
        case 3:
        printf ("Computador: Tesoura\n");
        break;
    }

    if (escolhaComoutador == escolaJogador)
    {
        printf("### Jogo empatou ###\n");
    } else if ((escolaJogador == 1) && (escolhaComoutador == 3) ||
              (escolaJogador == 2) && (escolhaComoutador == 1) ||
              (escolaJogador == 3) && (escolhaComoutador == 2))

    {
        printf("### Parabéns você ganhou ###\n");
    } else {
        printf("### Você perdeu ###");

    
    }
    
    
    

       
    return 0;


    }