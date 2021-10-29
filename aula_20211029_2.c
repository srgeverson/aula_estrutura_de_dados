#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct PILHA{
    NO *topo;
}PILHA;

void inicializarPilha(PILHA *p){
    p->topo = 0;
}

void empilhar(PILHA *p){
    int dado;
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr == NULL){
        printf("Ero de alocação de nó. \n");
    }else{
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
}

void desempilhar(PILHA *p){
    NO* ptr = p->topo;
    int dado;
    if(ptr == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
        p->topo = ptr->prox;
        ptr->prox = NULL;
    }
}

void mostrarPilha(PILHA *p){
    NO *ptr = p->topo;
    printf("Imprimindo a pilha:\n");
    if(ptr == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
        while(ptr != NULL){
            printf("%d ", ptr->dado);
            ptr = ptr->prox;
        }
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
    if(p1 == NULL){
        printf("Erro de alocação de pilha. \n");
        exit(0);
    }else{
        inicializarPilha(p1);
        empilhar(10, p1);
        empilhar(20, p1);
        empilhar(30, p1);
        mostrarPilha(p1);
        printf("Tentando desempilhar - resultado: %d\n", desempilhar(p1));
        mostrarPilha(p1);
        printf("Tentando desempilhar - resultado: %d\n", desempilhar(p1));
        mostrarPilha(p1);
    }
    return 0;
}
