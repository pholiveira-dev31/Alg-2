#include <stdio.h>

struct Atleta{
char nome[50];
char esporte[50];
int idade;
float altura;
};

int main(){
struct Atleta a[5];
int i,maisAlto=0,maisVelho=0;

for(i=0;i<5;i++){
printf("Atleta %d\n",i+1);

printf("Nome: ");
scanf(" %[^\n]",a[i].nome);

printf("Esporte: ");
scanf(" %[^\n]",a[i].esporte);

printf("Idade: ");
scanf("%d",&a[i].idade);

printf("Altura: ");
scanf("%f",&a[i].altura);
}

for(i=1;i<5;i++){
if(a[i].altura>a[maisAlto].altura)
maisAlto=i;

if(a[i].idade>a[maisVelho].idade)
maisVelho=i;
}

printf("Mais alto: %s\n",a[maisAlto].nome);
printf("Mais velho: %s\n",a[maisVelho].nome);

return 0;
}