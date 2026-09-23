#include <stdio.h>

#define PI 3.14

void calcular_esfera(float raio,float *area,float *volume){

    *area = 4*PI*raio*raio;
    *volume = (4.0/3.0)*PI*raio*raio*raio;
}

int main(){
    float raio,area,volume;

    printf("Digite o raio: ");
    scanf("%f",&raio);

    calcular_esfera(raio,&area,&volume);

    printf("Area = %.2f\n",area);
    printf("Volume = %.2f",volume);

    return 0;
}