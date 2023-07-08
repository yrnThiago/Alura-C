#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numeroSecreto = 42;
    int chute;

    printf("Qual eh o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);
}