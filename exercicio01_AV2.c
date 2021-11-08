#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int* bubbleSort(int *vetor, int tamanho){
    int indice, valor, auxiliar;
    for (indice=tamanho-1; indice>=1; indice--) {
        for (valor=0; valor<indice; valor++) {
            if (vetor[valor]>vetor[valor+1]) {
                auxiliar = vetor[valor];
                vetor[valor] = vetor[valor+1];
                vetor[valor+1] = auxiliar;
            }
        }
    }
    return vetor;
}

int* insertSort(int *vetor, int tamanho){
    int indice, valor, auxilar;
	for (indice=0; indice< tamanho-1; indice++){
        valor=indice+1;
        while (vetor[valor-1]>vetor[valor] && valor > 0){
            auxilar = vetor[valor-1];
            vetor[valor-1]=vetor[valor];
            vetor[valor]=auxilar;
            valor--;
        }
    }
    return vetor;
}

int* selectionSort(int *vetor, int tamanho){
    int indice, valor, auxilar;
    for (indice=0; indice < tamanho-1; indice++)
    {
        for (valor=indice+1; valor < tamanho; valor++)
        {
            if (vetor[indice] > vetor[valor])
            {
                auxilar = vetor[indice];
                vetor[indice] = vetor[valor];
                vetor[valor] = auxilar;
            }
        }
    }
    return vetor;
}

struct Estatistica{
   int tamanho;
   int* vetor;

   void tempoComBubbleSort() {    
    	clock_t horarioInicial, horarioFinal, tempoDeExecucao;   
    	horarioInicial = clock();
    	bubbleSort(vetor, tamanho);
    	horarioInicial = clock();
    	tempoDeExecucao =  horarioFinal - horarioInicial;
		printf("\nTempo de execucao com o bubble sort: %lf", ((double)tempoDeExecucao));
	}

   	void tempoComInsertSort() {    
    	clock_t horarioInicial, horarioFinal, tempoDeExecucao;   
    	horarioInicial = clock();
		insertSort(vetor, tamanho);
    	horarioInicial = clock();
    	tempoDeExecucao =  horarioFinal - horarioInicial;
		printf("\nTempo de execucao com o insert sort: %lf", ((double)tempoDeExecucao));
   	}

	void tempoComSelectionSort() {    
    	clock_t horarioInicial, horarioFinal, tempoDeExecucao;   
    	horarioInicial = clock();
    	selectionSort(vetor, tamanho);
    	horarioInicial = clock();
    	tempoDeExecucao =  horarioFinal - horarioInicial;
		printf("\nTempo de execucao com o selection sort: %lf", ((double)tempoDeExecucao));
	}
   
	void imprimeVetor(char momento[10]){
		printf("\nImprimindo itens %s\n",momento);
    		for(int i = 0; i < tamanho; i++){
       			if(i == tamanho-1)
         			printf("%d", vetor[i]);
        		else
         			printf("%d,", vetor[i]);
    		}
		}
};

int main(){
    
	setlocale(LC_ALL, "portuguese");
	int	d[12] ={2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
	int	e[12] = {2,4,6,8,10,12,1,3,5,7,9,11};
	int	f[10] = {8,9,7,9,3,2,3,8,4,6};
  	int g[10] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};
  	int opcao = 0;
  	
    Estatistica ea, eb, ec, ed, ee, ef, eg;
    do{
		printf("Digite uma opcao: \n0 Para Sair.\n1 para resposta da alternativa a)\n2 para resposta da alternativa b)\n3 para resposta da alternativa c) \n4 para resposta da alternativa d)\n5 para resposta da alternativa e)\n6 para resposta da alternativa f)\n7 para resposta da alternativa g)\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 0:
				exit(0);
				break;
			case 1:
				printf("\n--------------Inicio alternativa a)-------------");
				ea.tamanho = 6;
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.imprimeVetor("Antes");
				ea.tempoComBubbleSort();
				ea.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ea.tamanho = 6;
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.imprimeVetor("Antes");
				ea.tempoComInsertSort();
				ea.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ea.tamanho = 6;
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.imprimeVetor("Antes");
				ea.tempoComSelectionSort();
				ea.imprimeVetor("Depois");
				ea.limparVetor();
				printf("\n--------------Fim alternativa a)----------------");
			break;
			case 2:
				printf("\n--------------Inicio alternativa b)-------------");
				eb.tamanho = 6;
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.imprimeVetor("Antes");
				eb.tempoComBubbleSort();
				eb.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				eb.tamanho = 6;
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.imprimeVetor("Antes");
				eb.tempoComInsertSort();
				eb.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				eb.tamanho = 6;
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.imprimeVetor("Antes");
				eb.tempoComSelectionSort();
				eb.imprimeVetor("Depois");
				eb.limparVetor();
				printf("\n--------------Fim alternativa b)----------------");
			break;
			case 3:
				printf("\n--------------Inicio alternativa c)-------------");
				ec.tamanho = 6;
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.imprimeVetor("Antes");
				ec.tempoComBubbleSort();
				ec.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ec.tamanho = 6;
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.imprimeVetor("Antes");
				ec.tempoComInsertSort();
				ec.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ec.tamanho = 6;
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.imprimeVetor("Antes");
				ec.tempoComSelectionSort();
				ec.imprimeVetor("Depois");
				ec.limparVetor();
				printf("\n--------------Fim alternativa c)----------------");
			break;
			case 4:
				printf("\n--------------Inicio alternativa d)-------------");
				ed.tamanho = 12;
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.imprimeVetor("Antes");
				ed.tempoComBubbleSort();
				ed.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ed.tamanho = 12;
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.imprimeVetor("Antes");
				ed.tempoComInsertSort();
				ed.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ed.tamanho = 12;
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.imprimeVetor("Antes");
				ed.tempoComSelectionSort();
				ed.imprimeVetor("Depois");
				ed.limparVetor();
				printf("\n--------------Fim alternativa d)----------------");
				break;
			case 5:
				printf("\n--------------Inicio alternativa e)-------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComBubbleSort();
				ee.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComInsertSort();
				ee.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComSelectionSort();
				ee.imprimeVetor("Depois");
				ee.limparVetor();
				printf("\n--------------Fim alternativa e)----------------");
			break;
			case 6:
				printf("\n--------------Inicio alternativa f)-------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComBubbleSort();
				ee.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComInsertSort();
				ee.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.imprimeVetor("Antes");
				ee.tempoComSelectionSort();
				ee.imprimeVetor("Depois");
				ee.limparVetor();
				printf("\n--------------Fim alternativa f)----------------");
				break;
			case 7:
				printf("\n--------------Inicio alternativa g)-------------");
				eg.tamanho = 12;
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.imprimeVetor("Antes");
				eg.tempoComBubbleSort();
				eg.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				eg.tamanho = 12;
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.imprimeVetor("Antes");
				eg.tempoComInsertSort();
				eg.imprimeVetor("Depois");
				printf("\n------------------------------------------------");
				eg.tamanho = 12;
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.imprimeVetor("Antes");
				eg.tempoComSelectionSort();
				eg.imprimeVetor("Depois");
				eg.limparVetor();
				printf("\n--------------Fim alternativa g)----------------");
			break;
			default:
				printf("\nOPCAO INVALIDA!!!");
		}
    }while(opcao > -1 && opcao < 8);
    return 0;
}

