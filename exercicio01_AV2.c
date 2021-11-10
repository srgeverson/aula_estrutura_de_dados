#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct TesteDeMesa{
   int tamanho;
   int* vetor;

	void bubbleSort(){
		printf("\nBubble Sort");
	    int indice, valor, auxiliar;
	    for (indice=tamanho-1; indice>=1; indice--) {
	        for (valor=0; valor<indice; valor++) {
	            if (vetor[valor]>vetor[valor+1]) {
	                auxiliar = vetor[valor];
	                vetor[valor] = vetor[valor+1];
	                vetor[valor+1] = auxiliar;
	            }
	        }
	        printf("\n%dº iteração->", indice);
	        imprimir();
	    }
	}

	void insertSort(){
		printf("\nInsert Sort");
	    int indice, valor, auxilar;
		for (indice=0; indice< tamanho-1; indice++){
	        valor=indice+1;
	        while (vetor[valor-1]>vetor[valor] && valor > 0){
	            auxilar = vetor[valor-1];
	            vetor[valor-1]=vetor[valor];
	            vetor[valor]=auxilar;
	            valor--;
	        }
	    	printf("\n%dº iteração->", 1+indice);
	        imprimir();
	    }
	}
	
	void selectionSort(){
		printf("\nSelection Sort");
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
	        printf("\n%dº iteração->", 1+indice);
	        imprimir();
		}
	}
	
	void imprimir(){
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
  	int opcao = 0;
  	
    TesteDeMesa ea, eb, ec, ed, ee, ef, eg;
    do{
		printf("\nDigite uma opcao: \n0 Para Sair.\n1 para resposta da alternativa a)\n2 para resposta da alternativa b)\n3 para resposta da alternativa c) \n4 para resposta da alternativa d)\n5 para resposta da alternativa e)\n6 para resposta da alternativa f)\n7 para resposta da alternativa g)\n");
		scanf("%d", &opcao);
    	system("@cls||clear");
		switch(opcao){
			case 0:
				exit(0);
				break;
			case 1:
				printf("\n--------------Inicio alternativa a)-------------");
				ea.tamanho = 6;
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.bubbleSort();
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.insertSort();
				ea.vetor = new int[6]{2,4,6,8,10,12};
				ea.selectionSort();
				printf("\n--------------Fim alternativa a)----------------");
			break;
			case 2:
				printf("\n--------------Inicio alternativa b)-------------");
				eb.tamanho = 6;
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.bubbleSort();
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.insertSort();
				eb.vetor = new int[6]{11,9,7,5,3,1};
				eb.selectionSort();
				printf("\n--------------Fim alternativa b)----------------");
			break;
			case 3:
				printf("\n--------------Inicio alternativa c)-------------");
				ec.tamanho = 6;
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.bubbleSort();
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.insertSort();
				ec.vetor = new int[6]{5, 7, 2, 8, 1, 6};
				ec.selectionSort();
				printf("\n--------------Fim alternativa c)----------------");
			break;
			case 4:
				printf("\n--------------Inicio alternativa d)-------------");
				ed.tamanho = 12;
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.bubbleSort();
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.insertSort();
				ed.vetor = new int[12]{2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
				ed.selectionSort();
				printf("\n--------------Fim alternativa d)----------------");
				break;
			case 5:
				printf("\n--------------Inicio alternativa e)-------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.bubbleSort();
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.insertSort();
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.selectionSort();
				printf("\n--------------Fim alternativa e)----------------");
			break;
			case 6:
				printf("\n--------------Inicio alternativa f)-------------");
				ee.tamanho = 12;
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.bubbleSort();
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.insertSort();
				ee.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				ee.selectionSort();
				printf("\n--------------Fim alternativa f)----------------");
				break;
			case 7:
				printf("\n--------------Inicio alternativa g)-------------");
				eg.tamanho = 12;
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.bubbleSort();
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.insertSort();
				eg.vetor = new int[12]{2,4,6,8,10,12,1,3,5,7,9,11};
				eg.selectionSort();
				printf("\n--------------Fim alternativa g)----------------");
			break;
			default:
				printf("\nOPCAO INVALIDA!!!");
		}
    }while(opcao > -1 && opcao < 8);
    return 0;
}

