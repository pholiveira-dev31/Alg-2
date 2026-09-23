#include <stdio.h>

void swap(int *a,int *b){

    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

void ordenar_vetor(int *v,int tam){

    int *p1,*p2;

    for(p1=v;p1<v+tam-1;p1++){

        for(p2=v;p2<v+tam-1-(p1-v);p2++){

            if(*p2 > *(p2+1))
                swap(p2,p2+1);
        }
    }
}

int main(){

    int array[6]={5,2,8,1,3,4};
    int *pMostra;

    ordenar_vetor(array,6);

    for(pMostra=array;pMostra<array+6;pMostra++)
        printf("%d ",*pMostra);

    return 0;
}
