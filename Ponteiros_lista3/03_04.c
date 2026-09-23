#include <stdio.h>

void inverte_vetor(int *vetor,int tamanho){

    int *pInicio=vetor;
    int *pFim=vetor+tamanho-1;
    int temp;

    while(pInicio<pFim){

        temp=*pInicio;
        *pInicio=*pFim;
        *pFim=temp;

        pInicio++;
        pFim--;
    }
}

int main(){

    int v[5]={1,2,3,4,5};
    int *pt;

    inverte_vetor(v,5);

    for(pt=v;pt<v+5;pt++)
        printf("%d ",*pt);

    return 0;
}
