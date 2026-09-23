#include <stdio.h>

struct Data{
int dia;
int mes;
int ano;
};

struct Pessoa{
char nome[50];
struct Data nascimento;
};

int main(){
struct Pessoa p[6];
int i,maisNova=0,maisVelha=0;

for(i=0;i<6;i++){
printf("Pessoa %d\n",i+1);

printf("Nome: ");
scanf(" %[^\n]",p[i].nome);

printf("Dia: ");
scanf("%d",&p[i].nascimento.dia);

printf("Mes: ");
scanf("%d",&p[i].nascimento.mes);

printf("Ano: ");
scanf("%d",&p[i].nascimento.ano);
}

for(i=1;i<6;i++){
if(p[i].nascimento.ano>p[maisNova].nascimento.ano)
maisNova=i;
else if(p[i].nascimento.ano==p[maisNova].nascimento.ano && p[i].nascimento.mes>p[maisNova].nascimento.mes)
maisNova=i;
else if(p[i].nascimento.ano==p[maisNova].nascimento.ano && p[i].nascimento.mes==p[maisNova].nascimento.mes && p[i].nascimento.dia>p[maisNova].nascimento.dia)
maisNova=i;

if(p[i].nascimento.ano<p[maisVelha].nascimento.ano)
maisVelha=i;
else if(p[i].nascimento.ano==p[maisVelha].nascimento.ano && p[i].nascimento.mes<p[maisVelha].nascimento.mes)
maisVelha=i;
else if(p[i].nascimento.ano==p[maisVelha].nascimento.ano && p[i].nascimento.mes==p[maisVelha].nascimento.mes && p[i].nascimento.dia<p[maisVelha].nascimento.dia)
maisVelha=i;
}

printf("Mais nova: %s\n",p[maisNova].nome);
printf("Mais velha: %s\n",p[maisVelha].nome);

return 0;
}