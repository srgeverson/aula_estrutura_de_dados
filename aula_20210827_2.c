#include <stdio.h>
#include <string.h>

int main(){
    
    float notas[10];
    char nomes[10][30];
    
    for(int i = 0; i < 10; i++){
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &nomes[i][30]);
    
        printf("\nDigite a nota do aluno: ");
        scanf("%f", &notas[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(notas[i] >= 7){
            printf("\nO Aluno %c foi aprovado com nota %.2f: ", nomes[i][30], notas[i]);
        }else{
            printf("\nO Aluno %c foi reprovado com nota %.2f: ", nomes[i][30], notas[i]);
        }
    }
    return 0;
}
