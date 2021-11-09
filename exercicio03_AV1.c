#include<stdio.h> 
#include <string.h> 

#define STRMAX 20 

void invertePalavras (char *parametro1, char *parametro2) { 
	char strtemp[STRMAX];
	strcpy (strtemp, parametro1); 
	strcpy (parametro1, parametro2); 
	strcpy (parametro2, strtemp);
} 

int main () { 
	char primeiraPalavra[STRMAX], segundaPalavra[STRMAX]; 
	printf ("Digite uma palavra com no máximo 20 letras: "); 
	gets (primeiraPalavra); 
	printf ("Digite outra palavra com no máximo 20 letras: ");
	gets (segundaPalavra); 
	printf ("\nAntes da inversão a primeira palavra = %s e segunda palavra = %s", primeiraPalavra, segundaPalavra);
	invertePalavras(primeiraPalavra, segundaPalavra); 
	printf ("\nDepois da inversão a primeira palavra = %s e segunda palavra = %s", primeiraPalavra, segundaPalavra);
}
