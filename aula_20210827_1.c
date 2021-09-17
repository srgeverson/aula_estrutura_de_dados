#include <iostream>

using namespace std;

int main(){
    
    float total = 0, num = 0;
    int jabuticaba = 0;
    
    printf("\nDigite o valor da variável num: ");
    scanf("%f", &num);
    
    printf("\nDigite o valor da variável jabuticaba: ");
    scanf("%d", &jabuticaba);
    
    total = jabuticaba + num;
    
    printf("A soma entre %d e %f = %.2f", jabuticaba, num, total);

    return 0;
}
