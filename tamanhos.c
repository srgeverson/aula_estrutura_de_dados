#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int a = sizeof(int);
    
    printf("Tamanho da variável a em (bytes) = %d\n", a);
    
    int b = sizeof(float);
    
    printf("Tamanho da variável b em (bytes) = %d\n", b);

    return 0;
}
