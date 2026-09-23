#include <stdio.h>

float media(){
    float n,soma=0;
    int cont=0;

    printf("Digite os valores positivos\n");
    printf("Digite 0 para parar\n");

    do{
        scanf("%f",&n);

        if(n>0){
            soma = soma+n;
            cont++;
        }

    }while(n!=0);

    return soma/cont;
}

int main(){
    printf("Media = %.2f",media());

    return 0;
}