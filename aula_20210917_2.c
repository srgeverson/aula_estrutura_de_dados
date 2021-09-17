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

int main()
{
    int n;
    printf("Qual o tamanho do vetor que deseja: ");
    scanf("%d", &n);
    int *vetor = calloc(n, sizeof(int));
    preenche_array(vetor, n);
    ler_array(vetor, n);
    
    free(n);
        
    return 0;
}
