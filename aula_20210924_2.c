#include<stdio.h>
#include<stdlib.h>

int* retorna_ponteiro(int tamanho){
    printf("\nPreenchendo a lista de itens!\n");
    int *vetor = (int *) calloc(tamanho, sizeof(int));
    for(int i = 0; i < tamanho; i++){
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int* imprime_vetor(int *vetor, int tamanho){
    printf("\nImprimindo itens!\n");
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho-1)
         printf("%d", vetor[i]);
        else
         printf("%d,", vetor[i]);
    }
    return vetor;    
}

void libera_memoria(int *vetor){
    printf("\nLimpando memória!");
    free(vetor);
}

int main(){
    int n;
    
    printf("Qual o tamanho do vetor que deseja: ");
    scanf("%d", &n);
    
    libera_memoria(imprime_vetor(retorna_ponteiro(n), n));
        
    return 0;
}
