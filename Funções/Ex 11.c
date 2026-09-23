#include <stdio.h>

void triangulo(float x,float y,float z){

    if(x+y>z && x+z>y && y+z>x){

        if(x==y && y==z)
            printf("Equilatero");

        else if(x==y || x==z || y==z)
            printf("Isosceles");

        else
            printf("Escaleno");
    }
    else
        printf("Nao forma triangulo");
}

int main(){
    float x,y,z;

    printf("Digite os tres lados: ");
    scanf("%f%f%f",&x,&y,&z);

    triangulo(x,y,z);

    return 0;
}