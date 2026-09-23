#include <stdio.h>

struct FichaAluno{
int matricula;
char nomeAluno[50];
float n1;
float n2;
float n3;
};

int main(){
struct FichaAluno turma[5];
int i,posMaior=0;
float media,maiorMedia=0;

for(i=0;i<5;i++){
printf("Aluno %d\n",i+1);

printf("Matricula: ");
scanf("%d",&turma[i].matricula);

printf("Nome: ");
scanf(" %[^\n]",turma[i].nomeAluno);

printf("Nota 1: ");
scanf("%f",&turma[i].n1);

printf("Nota 2: ");
scanf("%f",&turma[i].n2);

printf("Nota 3: ");
scanf("%f",&turma[i].n3);

media=(turma[i].n1+turma[i].n2+turma[i].n3)/3;

if(media>maiorMedia){
maiorMedia=media;
posMaior=i;
}
}

printf("\nAluno com a maior media:\n");
printf("Nome: %s\n",turma[posMaior].nomeAluno);
printf("Notas: %.2f, %.2f, %.2f\n",turma[posMaior].n1,turma[posMaior].n2,turma[posMaior].n3);

return 0;
}
