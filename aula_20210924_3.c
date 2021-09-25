#include<stdio.h>
#include<stdlib.h>

int** retorna_matriz(int linhas, int colunas){
    //int *linhas = (int *) calloc(linhas, sizeof(int));
    //int *colunas = (int *) calloc(colunas, sizeof(int));
    int** matriz[linhas][colunas];
    for(int l = 0; l < linhas; l++){
        for(int c = 0; c < colunas; c++){
            printf("Informe a linha %d e a coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    return matriz;
}

void imprime_matriz(int **matriz){
    //int *linhas = (int *) calloc(linhas, sizeof(int));
    //int *colunas = (int *) calloc(colunas, sizeof(int));
    int** matriz[linhas][colunas];
    for(int l = 0; l < linhas; l++){
        for(int c = 0; c < colunas; c++){
            printf("Informe a linha %d e a coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    return matriz;
}

int main(){
    int l,c;
    
    printf("Quantidade de linhas: ");
    scanf("%d", &l);
    
    printf("Quantidade de colunas: ");
    scanf("%d", &c);
    
    imprime_matriz(retorna_matriz(l, c));
    
    //libera_memoria(imprime_vetor(retorna_ponteiro(n), n));
        
    return 0;
}
