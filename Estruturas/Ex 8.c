#include <stdio.h>

struct Data{
int dia;
int mes;
int ano;
};

int main(){
struct Data d1,d2;
int dias1,dias2,diferenca;

printf("Primeira data\n");
printf("Dia: ");
scanf("%d",&d1.dia);
printf("Mes: ");
scanf("%d",&d1.mes);
printf("Ano: ");
scanf("%d",&d1.ano);

printf("Segunda data\n");
printf("Dia: ");
scanf("%d",&d2.dia);
printf("Mes: ");
scanf("%d",&d2.mes);
printf("Ano: ");
scanf("%d",&d2.ano);

dias1=d1.ano*365+d1.mes*30+d1.dia;
dias2=d2.ano*365+d2.mes*30+d2.dia;

diferenca=dias1-dias2;

if(diferenca<0)
diferenca=diferenca*-1;

printf("Dias entre as datas: %d\n",diferenca);

return 0;
}