#include <stdio.h>

struct Pessoa{
char nome[50];
int idade;
char endereco[100];
};

int main(){
struct Pessoa p;

printf("Nome: ");
fgets(p.nome,50,stdin);

printf("Idade: ");
scanf("%d",&p.idade);
getchar();

printf("Endereco: ");
fgets(p.endereco,100,stdin);

printf("\nNome: %s",p.nome);
printf("Idade: %d\n",p.idade);
printf("Endereco: %s",p.endereco);

return 0;
}