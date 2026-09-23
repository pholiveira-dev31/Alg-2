#include <stdio.h>

struct Atleta{
char nome[50];
char esporte[50];
int idade;
float altura;
};

int main(){
struct Atleta a[5],aux;
int i,j;

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

for(i=0;i<4;i++){
for(j=i+1;j<5;j++){
if(a[i].idade<a[j].idade){
aux=a[i];
a[i]=a[j];
a[j]=aux;
}
}
}

printf("\nAtletas:\n");

for(i=0;i<5;i++){
printf("%s - %d anos\n",a[i].nome,a[i].idade);
}

return 0;
}