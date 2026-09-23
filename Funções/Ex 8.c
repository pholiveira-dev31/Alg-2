#include <stdio.h>

int soma(int n){
    int i,s=0;

    for(i=1;i<=n;i++)
        s=s+i;

    return s;
}

int main(){
    int n;

    printf("Digite n: ");
    scanf("%d",&n);

    printf("Soma = %d",soma(n));

    return 0;
}