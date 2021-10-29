#include <iostream>

typedef struct PILHA(){
    int dados[] = int[N];
    int topo;
}PILHA;

void inicializarPilha(PILHA *p){
    int i;
}

void empilhar(int dado, PILHA *p){
    if(p->topo == N){
        printf("Pilha vazia. \n");
        return;
    }else{
        p->topo--;
        return p->dados[p->topo];
    }
}

void desempilhar(PILHA *p){
    if(p->topo == N){
        printf("Pilha vazia. \n");
        return;
    }else{
        p->topo--;
        return p->dados[p->topo];
    }
}

void mostrarPilha(PILHA *p){
    printf("Imprimindo a pilha. \n");
    for(int i = p->topo; i > N; i--){
        printf("\n%d ", p->dados[i], "\n");
    }
    printf("\n");
}

int main()
{
    setLocale(LC_ALL, "portuguese");
    PILHA p1;
    inicializarPilha(&p1);
    mostrarPilha(&p1);
    printf("\n");
    system("pause");
    system("cls");
    empilhar(10, &p1);
    empilhar(20, &p1);
    empilhar(30, &p1);
    empilhar(40, &p1);
    mostrarPilha(&p1);
    printf("Desempilhando: %d\n", desempilhar(&p1));
    mostrarPilha(&p1);
    printf("Desempilhando: %d\n", desempilhar(&p1));
    mostrarPilha(&p1);
    printf("Desempilhando: %d\n", desempilhar(&p1));
    mostrarPilha(&p1);
    printf("\n");
    system("pause");
    system("cls");    
    return 0;
}
