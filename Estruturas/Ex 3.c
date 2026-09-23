#include <stdio.h>

struct Aluno{
int matricula;
char nome[50];
float nota1;
float nota2;
float nota3;
};

int main(){
struct Aluno a[5];
int i,maior=0;
float media,maiorMedia=0;

for(i=0;i<5;i++){
printf("Aluno %d\n",i+1);

printf("Matricula: ");
scanf("%d",&a[i].matricula);

printf("Nome: ");
scanf(" %[^\n]",a[i].nome);

printf("Nota 1: ");
scanf("%f",&a[i].nota1);

printf("Nota 2: ");
scanf("%f",&a[i].nota2);

printf("Nota 3: ");
scanf("%f",&a[i].nota3);

media=(a[i].nota1+a[i].nota2+a[i].nota3)/3;

if(media>maiorMedia){
maiorMedia=media;
maior=i;
}
}

printf("\nAluno com maior media:\n");
printf("Nome: %s\n",a[maior].nome);
printf("Nota 1: %.2f\n",a[maior].nota1);
printf("Nota 2: %.2f\n",a[maior].nota2);
printf("Nota 3: %.2f\n",a[maior].nota3);

return 0;
}