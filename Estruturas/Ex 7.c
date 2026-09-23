#include <stdio.h>

struct Atleta{
char nome[50];
char esporte[50];
int idade;
float altura;
};

int main(){
struct Atleta vet[5],aux;
int i,j;

for(i=0;i<5;i++){
printf("Atleta %d\n",i+1);

printf("Nome: ");
scanf(" %[^\n]",vet[i].nome);

printf("Esporte: ");
scanf(" %[^\n]",vet[i].esporte);

printf("Idade: ");
scanf("%d",&vet[i].idade);

printf("Altura: ");
scanf("%f",&vet[i].altura);
}

for(i=0;i<4;i++){
for(j=i+1;j<5;j++){
if(vet[i].idade<vet[j].idade){
aux=vet[i];
vet[i]=vet[j];
vet[j]=aux;
}
}
}

printf("\nAtletas ordenados da maior idade p/ menor:\n");

for(i=0;i<5;i++){
printf("%s - %d anos\n",vet[i].nome,vet[i].idade);
}

return 0;
}
