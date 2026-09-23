#include <stdio.h>

void swap(int *a,int *b){

    int aux;

    aux=*a;
    *a=*b;
    *b=aux;
}

void ordenar(int *vetor,int tamanho){

    int *i,*j;

    for(i=vetor;i<vetor+tamanho-1;i++){

        for(j=vetor;j<vetor+tamanho-1-(i-vetor);j++){

            if(*j > *(j+1))
                swap(j,j+1);
        }
    }
}

int main(){

    int vetor[6]={5,2,8,1,3,4};
    int *p;

    ordenar(vetor,6);

    for(p=vetor;p<vetor+6;p++)
        printf("%d ",*p);

    return 0;
}