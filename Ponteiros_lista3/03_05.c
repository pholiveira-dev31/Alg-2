#include <stdio.h>

void extrair_estatisticas(int *vetor,int tamanho,int *min,int *max,float *media){

    int idx,s=0;

    *min=*vetor;
    *max=*vetor;

    for(idx=0;idx<tamanho;idx++){

        if(*(vetor+idx)<*min)
            *min=*(vetor+idx);

        if(*(vetor+idx)>*max)
            *max=*(vetor+idx);

        s=s+*(vetor+idx);
    }

    *media=(float)s/tamanho;
}

int main(){

    int numeros[5]={5,8,2,10,4};
    int menorNum,maiorNum;
    float medResult;

    extrair_estatisticas(numeros,5,&menorNum,&maiorNum,&medResult);

    printf("Minimo: %d\n",menorNum);
    printf("Maximo: %d\n",maiorNum);
    printf("Media: %.2f",medResult);

    return 0;
}
