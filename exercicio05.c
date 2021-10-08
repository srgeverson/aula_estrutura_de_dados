#include<stdio.h> 
#include<stdlib.h>

float **alocaMatriz (int linha, int coluna) { 
	float **matriz;

	matriz = (float **) calloc (linha, sizeof(float *)); 
	if (matriz == NULL) { 
		printf ("Nao tem memória"); 
		return (NULL); 
	}
	for (int i = 0; i < linha; i++ ) { 
		matriz[i] = (float*) calloc (coluna, sizeof(float)); 
		if (matriz[i] == NULL) { 
			printf ("Falta memoria"); 
			return (NULL); 
		} 
	} 
	return (matriz); 
}

float **lerMatriz(int linha, int coluna, float **matriz){ 
	for (int l = 0; l < linha; l++) 
		for (int c = 0; c < coluna; c++) {
			printf("\nLinha = %d, e coluna = %d\n", l + 1, c + 1);
			scanf("%f", &matriz[l][c]);
		} 
	return (matriz);
}

void liberarMatriz(int linha, float **matriz) {  
	for (int i = 0; i < linha; i++)
		free (matriz[i]); 
		
	free (matriz);
}

void imprimirMatriz(int linha, int coluna, float **matriz){ 
	for (int l = 0; l < linha; l++) 
		for (int c = 0; c < coluna; c++) 
			printf("\nLinha = %d, e coluna = %d o valor é = %f", l, c, matriz[l][c]); 
}

float **multiplicaMatrizes(int linha, int coluna, float **matriz1, float **matriz2) { 
	float **matrizResultado = (float **) calloc (linha, sizeof(float *)); 
	for(int l = 0; l < linha; l++) {
		matrizResultado[l] = (float*) calloc (coluna, sizeof(float)); 
		for(int c = 0; c < coluna; c++)
			matrizResultado[l][c] = matriz1[l][c] * matriz2[l][c];
	} 
	return (matrizResultado);
} 

int main () { 
	int linhaMatriz1 = 0, colunaMatriz1 = 0, linhaMatriz2 = 0, colunaMatriz2 = 0; 
	do{
		do{
	    	printf ("Digite a quantidade de linhas da matriz 1: "); 
	    	scanf ("%d", &linhaMatriz1);
	    	printf ("Digite a quantidade de colunas da matriz 1: "); 
	    	scanf ("%d", &colunaMatriz1);
		}while(linhaMatriz1 <= 0 || colunaMatriz1 <= 0);
	
		do{
	    	printf ("Digite a quantidade de linhas da matriz 2: "); 
	    	scanf ("%d", &linhaMatriz2);
	    	printf ("Digite a quantidade de colunas da matriz 2: "); 
	    	scanf ("%d", &colunaMatriz2);
		}while(linhaMatriz2 <= 0 || colunaMatriz2 <= 0);
		
	}while(linhaMatriz1 != linhaMatriz2 || colunaMatriz1 != colunaMatriz2);
	
	float **matriz1 = alocaMatriz(linhaMatriz1, colunaMatriz1);
	lerMatriz(linhaMatriz1, colunaMatriz1, matriz1);
	
	float **matriz2 = alocaMatriz(linhaMatriz2, colunaMatriz2);
	lerMatriz(linhaMatriz2, colunaMatriz2, matriz2);
	
	printf ("\nDados da matriz1: "); 
	imprimirMatriz( linhaMatriz1, colunaMatriz1, matriz1);
	printf ("\nDados da matriz2: ");
	imprimirMatriz( linhaMatriz1, colunaMatriz1, matriz2);
	
	float **matrizResultado = multiplicaMatrizes(linhaMatriz1, colunaMatriz1, matriz1, matriz2);
	printf ("\nDados da matriz resultado: ");
	imprimirMatriz( linhaMatriz1, colunaMatriz1, matrizResultado);
			
	return 0; 
}

