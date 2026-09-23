#include <stdio.h>

struct Data{
int dia;
int mes;
int ano;
};

int main(){
struct Data dataA,dataB;
int totalA,totalB,diferenca;

printf("Data 1\n");
printf("Dia: ");
scanf("%d",&dataA.dia);
printf("Mes: ");
scanf("%d",&dataA.mes);
printf("Ano: ");
scanf("%d",&dataA.ano);

printf("Data 2\n");
printf("Dia: ");
scanf("%d",&dataB.dia);
printf("Mes: ");
scanf("%d",&dataB.mes);
printf("Ano: ");
scanf("%d",&dataB.ano);

totalA=dataA.ano*365+dataA.mes*30+dataA.dia;
totalB=dataB.ano*365+dataB.mes*30+dataB.dia;

diferenca=totalA-totalB;

if(diferenca<0)
diferenca=-diferenca;

printf("Dias decorridos entre as datas: %d\n",diferenca);

return 0;
}
