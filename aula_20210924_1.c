#include<stdio.h>
#include<stdlib.h>

void ler_array(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(i == tamanho-1)
         printf("%d", vetor[i]);
        else
         printf("%d,", vetor[i]);
    }
}

int main(){
    
    int *v, n, i;
    printf("Qual o tamanho do vetor que deseja: ");
    scanf("%d", &n);
    
    v = (int *) calloc(n, sizeof(int));
    
    for(i = 0; i < n; i++){
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", &v[i]);
    }

    ler_array(v, n);
    
   // free(n);
        
    return 0;
}
