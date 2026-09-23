#include <stdio.h>

int perfeito(int n){
    int i,soma=0;

    for(i=1;i<n;i++){
        if(n%i==0)
            soma = soma+i;
    }

    if(soma==n)
        return 1;
    else
        return 0;
}

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(perfeito(n))
        printf("Perfeito");
    else
        printf("Nao perfeito");

    return 0;
}