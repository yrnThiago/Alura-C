#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;


    while(1)
    {
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if (acertou)
        {
            printf("Parabens! voce acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
            printf("Jogue de novo, voce eh um bom jogador!\n");
            break;
        } 
        else if (maior){
            printf("Seu chute foi maior que o numero secreto!\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }

        tentativas++;

        double pontosperdidos = abs((chute - numerosecreto) / (double)2);
        pontos = pontos - pontosperdidos;
    }

    printf("Obrigado por jogar!");

}
