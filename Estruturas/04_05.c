#include <stdio.h>

struct DataNasc{
int dia;
int mes;
int ano;
};

struct CadastroPessoa{
char nome[50];
struct DataNasc data;
};

int main(){
struct CadastroPessoa p[6];
int i,idNova=0,idVelha=0;

for(i=0;i<6;i++){
printf("Pessoa %d\n",i+1);

printf("Nome: ");
scanf(" %[^\n]",p[i].nome);

printf("Dia nasc: ");
scanf("%d",&p[i].data.dia);

printf("Mes nasc: ");
scanf("%d",&p[i].data.mes);

printf("Ano nasc: ");
scanf("%d",&p[i].data.ano);
}

for(i=1;i<6;i++){
// checa quem nasceu depois (mais nova)
if(p[i].data.ano>p[idNova].data.ano)
idNova=i;
else if(p[i].data.ano==p[idNova].data.ano && p[i].data.mes>p[idNova].data.mes)
idNova=i;
else if(p[i].data.ano==p[idNova].data.ano && p[i].data.mes==p[idNova].data.mes && p[i].data.dia>p[idNova].data.dia)
idNova=i;

// checa quem nasceu antes (mais velha)
if(p[i].data.ano<p[idVelha].data.ano)
idVelha=i;
else if(p[i].data.ano==p[idVelha].data.ano && p[i].data.mes<p[idVelha].data.mes)
idVelha=i;
else if(p[i].data.ano==p[idVelha].data.ano && p[i].data.mes==p[idVelha].data.mes && p[i].data.dia<p[idVelha].data.dia)
idVelha=i;
}

printf("Pessoa mais nova: %s\n",p[idNova].nome);
printf("Pessoa mais velha: %s\n",p[idVelha].nome);

return 0;
}
