#include <stdio.h>
#include <math.h>

void equacaoBhaskara(float a,float b,float c){
    float d,x1,x2;

    d = b*b - 4*a*c;

    if(d < 0){
        printf("Nao existem raizes reais\n");
    }
    else if(d == 0){
        x1 = -b/(2*a);
        printf("Raiz unica: %.2f\n",x1);
    }
    else{
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        printf("X1 = %.2f\n",x1);
        printf("X2 = %.2f\n",x2);
    }
}

int main(){
    float coefA,coefB,coefC;

    printf("Digite a, b e c: ");
    scanf("%f%f%f",&coefA,&coefB,&coefC);

    equacaoBhaskara(coefA,coefB,coefC);

    return 0;
}
