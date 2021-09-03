
#include <stdio.h>

int main(){
    
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("\tAntes\n");
    printf("Variável x = %d\n", x);
    printf("Valor do ponteiro p = %d\n", p);
    printf("O endereço do ponteiro *p = %d\n", *p);
    
    *p=15;
    
    printf("\tDepois\n");
    printf("Variável x = %d\n", x);
    printf("Valor do ponteiro p = %d\n", p);
    printf("O endereço do ponteiro *p = %d\n", *p);
    
    return 0;
}
