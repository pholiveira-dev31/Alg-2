#include <stdio.h>

float efetuaConta(float num1,float num2,char operacao){
    if(operacao=='+')
        return num1+num2;
    else if(operacao=='-')
        return num1-num2;
    else if(operacao=='*')
        return num1*num2;
    else if(operacao=='/')
        return num1/num2;

    return 0;
}

int main(){
    float val1,val2;
    char op;

    printf("Valor 1: ");
    scanf("%f",&val1);

    printf("Valor 2: ");
    scanf("%f",&val2);

    printf("Operador (+, -, *, /): ");
    scanf(" %c",&op);

    printf("Resultado final: %.2f",efetuaConta(val1,val2,op));

    return 0;
}
