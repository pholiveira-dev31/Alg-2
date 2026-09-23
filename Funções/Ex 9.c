#include <stdio.h>

int fatorial(int n){
    int i,f=1;

    for(i=1;i<=n;i++)
        f=f*i;

    return f;
}

float calculo(int n){
    int i;
    float s=1;

    for(i=1;i<=n;i++){
        s = s + 1.0/fatorial(i);
    }

    return s;
}

int main(){
    int n;

    printf("Digite N: ");
    scanf("%d",&n);

    printf("S = %.2f",calculo(n));

    return 0;
}