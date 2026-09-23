#include <stdio.h>

int somatorioAteN(int limite){
    int x,somaAcumulada=0;

    for(x=1;x<=limite;x++)
        somaAcumulada=somaAcumulada+x;

    return somaAcumulada;
}

int main(){
    int numero;

    printf("Digite o valor de N: ");
    scanf("%d",&numero);

    printf("Somatorio: %d",somatorioAteN(numero));

    return 0;
}
