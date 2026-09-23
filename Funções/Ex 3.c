#include <stdio.h>

void converteTempo(int totalSeg){
    int horas,minutos,segundos;

    horas = totalSeg/3600;
    totalSeg = totalSeg%3600;

    minutos = totalSeg/60;
    segundos = totalSeg%60;

    printf("%d h, %d m e %d s",horas,minutos,segundos);
}

int main(){
    int segEntrada;

    printf("Informe os segundos: ");
    scanf("%d",&segEntrada);

    converteTempo(segEntrada);

    return 0;
}
