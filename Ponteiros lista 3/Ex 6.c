#include <stdio.h>

int *busca_subvetor(int *vetor,int tam_v,int *sub,int tam_s){

    int i,j;

    for(i=0;i<=tam_v-tam_s;i++){

        for(j=0;j<tam_s;j++){

            if(*(vetor+i+j)!=*(sub+j))
                break;
        }

        if(j==tam_s)
            return vetor+i;
    }

    return NULL;
}

int main(){

    int vetor[7]={1,2,3,4,5,6,7};
    int sub[3]={3,4,5};

    int *p;

    p=busca_subvetor(vetor,7,sub,3);

    if(p!=NULL)
        printf("Subvetor encontrado: %d",*p);
    else
        printf("Subvetor nao encontrado");

    return 0;
}