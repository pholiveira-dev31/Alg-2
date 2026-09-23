#include <stdio.h>

struct DadosPessoa{
char nome[50];
int idade;
char endereco[100];
};

int main(){
struct DadosPessoa p;

printf("Informe o nome: ");
fgets(p.nome,50,stdin);

printf("Informe a idade: ");
scanf("%d",&p.idade);
getchar();

printf("Informe o endereco: ");
fgets(p.endereco,100,stdin);

printf("\n--- DADOS ---\n");
printf("Nome: %s",p.nome);
printf("Idade: %d\n",p.idade);
printf("Endereco: %s",p.endereco);

return 0;
}
