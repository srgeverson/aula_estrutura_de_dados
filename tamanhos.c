#include<stdio.h>
#include<stdlib.h>

struct ponto{
    int x, y;
};

int main(){
    
    int a = sizeof(int);
    
    printf("Tamanho da variável a em (bytes) = %d\n", a);
    
    int b = sizeof(float);
    
    printf("Tamanho da variável b em (bytes) = %d\n", b);

    printf("Tamanho da variável ponto em (bytes) = %d\n", sizeof(struct ponto));

    return 0;
}
