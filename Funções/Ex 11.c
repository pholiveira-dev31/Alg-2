#include <stdio.h>

void verificaTriangulo(float l1,float l2,float l3){

    if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){

        if(l1==l2 && l2==l3)
            printf("Triangulo Equilatero");

        else if(l1==l2 || l1==l3 || l2==l3)
            printf("Triangulo Isosceles");

        else
            printf("Triangulo Escaleno");
    }
    else
        printf("Nao eh um triangulo valido");
}

int main(){
    float a,b,c;

    printf("Digite os 3 lados: ");
    scanf("%f%f%f",&a,&b,&c);

    verificaTriangulo(a,b,c);

    return 0;
}
