#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct pessoa{
	int Matricula;
	char Nome[30];
	float Nota;
};

pessoa* preencheLista(int tamanho){
    pessoa *pessoas = (pessoa *) calloc(tamanho, sizeof(pessoa));
    for(int i = 0; i < tamanho; i++){
        printf("Informe a matr�cula da %d� pessoa: ", i+1);
        scanf("%d", &pessoas[i].Matricula);
        printf("Informe o nome da %dª pessoa: ", i+1);
        scanf("%s", &pessoas[i].Nome);
        printf("Informe a nota da %dª pessoa: ", i+1);
        scanf("%f", &pessoas[i].Nota);
    }
    return pessoas;
}

void imprimirLista(pessoa *pessoas, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("\nOs dados da  %d� pessoa s�o: matr�cula = %d, nome = %s e nota = %f", i+1, pessoas[i].Matricula, pessoas[i].Nome, pessoas[i].Nota);
    }
}

pessoa* ordenarPorMatricula(pessoa *pessoas, int tamanho){
    printf("Ordena��o por Matr�cula: ");
	int indice, valor, auxilar;
	for (indice=0; indice < tamanho-1; indice++){
        for (valor=indice+1; valor < tamanho; valor++){
	        if (pessoas[indice].Matricula > pessoas[valor].Matricula){
	            auxilar = pessoas[indice].Matricula;
	            pessoas[indice].Matricula = pessoas[valor].Matricula;
	            pessoas[valor].Matricula = auxilar;
	        }
	    }
	}
    return pessoas;
}

pessoa* ordenarPorNome(pessoa *pessoas, int tamanho){
    printf("Ordena��o por Nome: ");
	int indice, valor;
	char auxilar[30];
	for (indice=0; indice < tamanho-1; indice++){
        for (valor=indice+1; valor < tamanho; valor++){
	        if (strcmp(pessoas[indice].Nome, pessoas[valor].Nome) > 0){
	            strcpy(auxilar,pessoas[indice].Nome);
	            strcpy(pessoas[indice].Nome, pessoas[valor].Nome);
	            strcpy(pessoas[valor].Nome, auxilar);
	        }
	    }
	}
    return pessoas;
}

pessoa* ordenarPorNota(pessoa *pessoas, int tamanho){
    printf("Ordena��o por Nota: ");
    int indice, valor, auxilar;
	for (indice=0; indice < tamanho-1; indice++){
        for (valor=indice+1; valor < tamanho; valor++){
	        if (pessoas[indice].Nota > pessoas[valor].Nota){
	            auxilar = pessoas[indice].Nota;
	            pessoas[indice].Nota = pessoas[valor].Nota;
	            pessoas[valor].Nota = auxilar;
	        }
	    }
	}
    return pessoas;
}

int main(){
	int quantidade = 0;
	int opcaoDeOrdenacao = 0;
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &quantidade);
    pessoa *pessoas = preencheLista(quantidade);
    imprimirLista(pessoas, quantidade);
    printf("\nEscolha uma op��o para ordenar a lista de pessosas: \n1 - Matr�cula\n2 - Nome\n3 - Nota\n0 - Para sair\n");
    scanf("%d", &opcaoDeOrdenacao);
        switch(opcaoDeOrdenacao){
            case 1:
                imprimirLista(ordenarPorMatricula(pessoas, quantidade), quantidade);
            break;
            case 2:
                imprimirLista(ordenarPorNome(pessoas, quantidade), quantidade);
            break;
            case 3:
                imprimirLista(ordenarPorNota(pessoas, quantidade), quantidade);
            break;
			default:
				printf("\nOP��O INV�LIDA!!!");
		}
	return 0;
}

