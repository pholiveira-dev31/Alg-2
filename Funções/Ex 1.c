#include <stdio.h>

float calculaVolumeEsfera(float raio){
    return (4.0/3.0) * 3.14 * raio * raio * raio;
}

int main(){
    float r;

    printf("Digite o raio: ");
    scanf("%f",&r);

    printf("Volume: %.2f",calculaVolumeEsfera(r));

    return 0;
}
