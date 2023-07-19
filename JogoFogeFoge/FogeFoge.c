#include <stdio.h>
#include <stdlib.h>

char** mapa;
int linhas, colunas;

void liberamapa(){
    for (int i = 0; i < linhas; i++) {
        free(mapa[i]);
    }

    free(mapa);
}

void alocamapa(){
    mapa = malloc(sizeof(char*) * linhas);
    for (int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * colunas+1);
    }
}

void lemapa(){
    FILE *f;
    f = fopen("mapa.txt", "r");
    if (f == 0) {
        printf("Erro na leitura do mapa");
        exit(1);
    };

    fscanf(f, "%d %d", &linhas, &colunas);
    
    alocamapa();

    for (int i = 0; i <= 4; i++){
        fscanf(f, "%s", mapa[i]);
    }
    fclose(f);
}

int main(){
    
    lemapa();

    for (int i = 0; i <= 4; i++){
        printf("%s\n", mapa[i]);
    }

    liberamapa();

    return 0;
}