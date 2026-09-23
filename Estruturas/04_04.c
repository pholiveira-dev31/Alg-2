#include <stdio.h>

struct RegHora{
int h;
int m;
int s;
};

int main(){
struct RegHora lista[5];
int i,maiorPos=0;

for(i=0;i<5;i++){
printf("Horario %d\n",i+1);

printf("Horas: ");
scanf("%d",&lista[i].h);

printf("Minutos: ");
scanf("%d",&lista[i].m);

printf("Segundos: ");
scanf("%d",&lista[i].s);
}

for(i=1;i<5;i++){
if(lista[i].h>lista[maiorPos].h)
maiorPos=i;
else if(lista[i].h==lista[maiorPos].h && lista[i].m>lista[maiorPos].m)
maiorPos=i;
else if(lista[i].h==lista[maiorPos].h && lista[i].m==lista[maiorPos].m && lista[i].s>lista[maiorPos].s)
maiorPos=i;
}

printf("Maior horario digitado: %02d:%02d:%02d\n",lista[maiorPos].h,lista[maiorPos].m,lista[maiorPos].s);

return 0;
}
