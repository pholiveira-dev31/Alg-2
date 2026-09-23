#include <stdio.h>

#define PI 3.14

void calc_esfera(float r,float *a,float *v){

    *a = 4*PI*r*r;
    *v = (4.0/3.0)*PI*r*r*r;
}

int main(){
    float raio,area,vol;

    printf("Digite o raio: ");
    scanf("%f",&raio);

    calc_esfera(raio,&area,&vol);

    printf("Area calculada: %.2f\n",area);
    printf("Volume calculado: %.2f",vol);

    return 0;
}
