#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i;
    
    int *p, *p1;
    
    p=(int *) malloc(5 * sizeof(int));
    
    p1=(int *) calloc(5, sizeof(int));
    
    printf("calloc \t\t malloc\n");
    
    for(int i = 0; i < 5; i++){
    printf("p1[%d] = %d \t", i,p1[i]);

    printf("p[%d] = %d \n", i,p[i]);
    }
    return 0;
}
