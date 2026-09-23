#include <stdio.h>

struct FichaAtleta{
char nome[50];
char modalidade[50];
int idade;
float altura;
};

int main(){
struct FichaAtleta a[5];
int i,iAlto=0,iVelho=0;

for(i=0;i<5;i++){
printf("Atleta %d\n",i+1);

printf("Nome: ");
scanf(" %[^\n]",a[i].nome);

printf("Esporte: ");
scanf(" %[^\n]",a[i].modalidade);

printf("Idade: ");
scanf("%d",&a[i].idade);

printf("Altura: ");
scanf("%f",&a[i].altura);
}

for(i=1;i<5;i++){
if(a[i].altura>a[iAlto].altura)
iAlto=i;

if(a[i].idade>a[iVelho].idade)
iVelho=i;
}

printf("Mais alto: %s\n",a[iAlto].nome);
printf("Mais velho: %s\n",a[iVelho].nome);

return 0;
}
