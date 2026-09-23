#include <stdio.h>

float esfera(float r){
    return (4.0/3.0) * 3.14 * r * r * r;
}

int main(){
    float r;

    printf("Digite o raio: ");
    scanf("%f",&r);

    printf("Volume: %.2f",esfera(r));

    return 0;
}