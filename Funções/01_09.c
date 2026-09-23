#include <stdio.h>

int geraFatorial(int num){
    int idx,fat=1;

    for(idx=1;idx<=num;idx++)
        fat=fat*idx;

    return fat;
}

float somaSerie(int max){
    int j;
    float resultado=1.0f;

    for(j=1;j<=max;j++){
        resultado = resultado + 1.0f/geraFatorial(j);
    }

    return resultado;
}

int main(){
    int valorN;

    printf("Valor de N: ");
    scanf("%d",&valorN);

    printf("Valor da serie S = %.2f",somaSerie(valorN));

    return 0;
}
