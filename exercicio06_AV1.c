#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

struct Produto {
    char nome[30]; /* Nome do produto */
    int codigo; /* Codigo do produto */
    double preco; /* Preco do produto */
};

int main () {
    //Item a)
    struct Produto produtos[10];
			
	//Item  b)
	strcpy(produtos[0].nome, "Brigadeiro");
	produtos[0].codigo = 132005;
	produtos[0].preco = 0.20;
	
	strcpy(produtos[0].nome, "Acarajé");
	produtos[0].codigo = 15202;
	produtos[0].preco = 0.50;
	
	//Item c)
	struct Produto *ponteiroProdutos = (struct Produto *) malloc(10*sizeof(struct Produto));
	strcpy(ponteiroProdutos[0].nome, "Brigadeiro");
	ponteiroProdutos[0].codigo = 132005;
	ponteiroProdutos[0].preco = 0.20;
	
	strcpy(ponteiroProdutos[1].nome, "Acarajé");
	ponteiroProdutos[1].codigo = 15202;
	ponteiroProdutos[1].preco = 0.50;
	
	//Item d)
	for(int i = 0; i < 2; i++){
	    printf("\nO %dº produto tem nome %s, código %d e preço %.2f", i+1, ponteiroProdutos[i].nome, ponteiroProdutos[i].codigo, ponteiroProdutos[i].preco);
	}
	
	return 0; 
}
\\\\
