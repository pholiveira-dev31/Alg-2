#include <stdio.h>

int *procura_num(int *vet,int tam,int num){

    int k;

    for(k=0;k<tam;k++){
        if(*(vet+k)==num)
            return vet+k;
    }

    return NULL;
}

int main(){
    int dados[5]={10,20,30,40,50};
    int valor;
    int *ptr;

    printf("Digite o valor X: ");
    scanf("%d",&valor);

    ptr=procura_num(dados,5,valor);

    if(ptr!=NULL)
        printf("Valor encontrado: %d",*ptr);
    else
        printf("Valor nao encontrado no vetor");

    return 0;
}
