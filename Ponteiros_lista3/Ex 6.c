#include <stdio.h>

int *busca_subvetor(int *vetor,int tam_v,int *sub,int tam_s){

    int a,b;

    for(a=0;a<=tam_v-tam_s;a++){

        for(b=0;b<tam_s;b++){

            if(*(vetor+a+b)!=*(sub+b))
                break;
        }

        if(b==tam_s)
            return vetor+a;
    }

    return NULL;
}

int main(){

    int vPrincipal[7]={1,2,3,4,5,6,7};
    int vMenor[3]={3,4,5};

    int *pAchado;

    pAchado=busca_subvetor(vPrincipal,7,vMenor,3);

    if(pAchado!=NULL)
        printf("Achei a sequencia a partir de: %d",*pAchado);
    else
        printf("Sequencia nao encontrada");

    return 0;
}
