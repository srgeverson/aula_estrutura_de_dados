#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *v, n, i;
    printf("Qual o tamanho do vetor que deseja: ");
    scanf("%d", &n);
    
    v = (int *) calloc(n, sizeof(int));
    
    for(i = 0; i < n; i++){
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i = 0; i < n; i++){
        if(i==n-1)
         printf("%d", v[i]);
        else
         printf("%d,", v[i]);
    }
        
    
    free(n);
        
    return 0;
}
