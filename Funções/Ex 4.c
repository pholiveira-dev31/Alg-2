#include <stdio.h>

int calcDiasVida(int ano,int mes,int dia){
    return (ano*365) + (mes*30) + dia;
}

int main(){
    int qtdAnos,qtdMeses,qtdDias;

    printf("Anos: ");
    scanf("%d",&qtdAnos);

    printf("Meses: ");
    scanf("%d",&qtdMeses);

    printf("Dias: ");
    scanf("%d",&qtdDias);

    printf("Total em dias: %d",calcDiasVida(qtdAnos,qtdMeses,qtdDias));

    return 0;
}
