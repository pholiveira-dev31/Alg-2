#include <stdio.h>

struct pessoa{
char nome[50];
int idade;
char endereco[100];
};

int main(){
struct pessoa a;

printf("Nome: ");
fgets(a.nome,50,stdin);

printf("Idade: ");
scanf("%d",&p.idade);
getchar();

printf("Endereco: ");
fgets(a.endereco,100,stdin);

printf("\nNome: %s",a.nome);
printf("Idade: %d\n",a.idade);
printf("Endereco: %s",a.endereco);

return 0;
}
