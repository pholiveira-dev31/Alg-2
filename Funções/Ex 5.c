#include <stdio.h>

int checaNumeroPerfeito(int valor){
    int k,somaDiv=0;

    for(k=1;k<valor;k++){
        if(valor%k==0)
            somaDiv = somaDiv+k;
    }

    if(somaDiv==valor)
        return 1;
    else
        return 0;
}

int main(){
    int num;

    printf("Digite um valor inteiro: ");
    scanf("%d",&num);

    if(checaNumeroPerfeito(num))
        printf("Eh um numero perfeito");
    else
        printf("Nao eh um numero perfeito");

    return 0;
}
