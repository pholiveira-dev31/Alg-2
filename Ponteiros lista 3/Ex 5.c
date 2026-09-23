#include <stdio.h>

void extrair_estatisticas(int *vetor,int tamanho,int *min,int *max,float *media){

    int i,soma=0;

    *min=*vetor;
    *max=*vetor;

    for(i=0;i<tamanho;i++){

        if(*(vetor+i)<*min)
            *min=*(vetor+i);

        if(*(vetor+i)>*max)
            *max=*(vetor+i);

        soma=soma+*(vetor+i);
    }

    *media=(float)soma/tamanho;
}

int main(){

    int vetor[5]={5,8,2,10,4};
    int min,max;
    float media;

    extrair_estatisticas(vetor,5,&min,&max,&media);

    printf("Menor: %d\n",min);
    printf("Maior: %d\n",max);
    printf("Media: %.2f",media);

    return 0;
}