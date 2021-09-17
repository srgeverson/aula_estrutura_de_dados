#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v, n, i;
    printf("Qual o tamanho do vetor que deseja: ");
    scanf("%d", &n);
    
    /*Aloca um vetor de n posições inteiros*/
    v = (int *) calloc(n, sizeof(int));
    
    for(i = 0; i < n; i++){
        printf("Informe o %dº elemento: ", i+1);
        /*Armazena o valor no vetor na posição i*/
        scanf("%d", &v[i]);
    }
    
    for(i = 0; i < n; i++)
        printf("%d", v[i]);
    
    free(n);
        

    return 0;
}
