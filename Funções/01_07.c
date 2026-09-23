#include <stdio.h>

float calculaMediaValores(){
    float numEntrada,somaTotal=0;
    int qtd=0;

    printf("Digite numeros positivos (0 encerra):\n");

    do{
        scanf("%f",&numEntrada);

        if(numEntrada>0){
            somaTotal = somaTotal+numEntrada;
            qtd++;
        }

    }while(numEntrada!=0);

    return somaTotal/qtd;
}

int main(){
    printf("Resultado da media: %.2f",calculaMediaValores());

    return 0;
}
