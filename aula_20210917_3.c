#include <stdio.h>
#include <stdlib.h>

void preenche_array(int *reserva_memoria, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", reserva_memoria+i);
    }
}

void ler_array(int *reserva_memoria, int tamanho){
    for(int i = 0; i < tamanho; i++)
        printf("%d", reserva_memoria[i]);
}

int* retorna_array(int tamanho){
 int *vetor = calloc(tamanho, sizeof(int));
 return vetor;
}

int main()
{
    int tamanho = 3;
    int * vetor = retorna_array(tamanho);
    preenche_array(vetor, tamanho);
    ler_array(vetor, tamanho);
    printf("\n%d", vetor);
    
    return 0;
}
