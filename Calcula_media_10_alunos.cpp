#include <iostream>

using namespace std;

int main(){
    
    float notas[10], nota;
    char nomes[10], nome;
    
    for(int i = 0; i < 10; i++){
        printf("\nDigite o nome do %dº aluno: ",i);
        scanf("%c", &nomes[i]);
    
        printf("\nDigite a nota do aluno %c: ", nomes[i]);
        scanf("%.2f", &nota);
        notas[i] = nota;
    }
    
    for(int i = 0; i < 10; i++){
        if(notas[i] >= 7){
            printf("\nO Aluno %c foi aprovado com nota %.2f: ", nomes[i], notas[i]);
        }else{
            printf("\nO Aluno %c foi reprovado com nota %.2f: ", nomes[i], notas[i]);
        }
    }
    return 0;
}