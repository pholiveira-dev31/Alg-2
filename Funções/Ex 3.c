#include <stdio.h>

void tempo(int segundos){
    int h,m,s;

    h = segundos/3600;
    segundos = segundos%3600;

    m = segundos/60;
    s = segundos%60;

    printf("%d horas %d minutos %d segundos",h,m,s);
}

int main(){
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d",&segundos);

    tempo(segundos);

    return 0;
}