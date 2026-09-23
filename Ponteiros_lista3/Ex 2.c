#include <stdio.h>

int *buscar(int *vetor,int tamanho,int x){

    int i;

    for(i=0;i<tamanho;i++){
        if(*(vetor+i)==x)
            return vetor+i;
    }

    return NULL;
}

int main(){
    int vetor[5]={10,20,30,40,50};
    int x;
    int *p;

    printf("Digite X: ");
    scanf("%d",&x);

    p=buscar(vetor,5,x);

    if(p!=NULL)
        printf("Encontrado: %d",*p);
    else
        printf("Nao encontrado");

    return 0;
}