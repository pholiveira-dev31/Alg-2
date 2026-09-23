#include <stdio.h>

int main(){
int a;
int *b;
int **c;
int ***d;

printf("Digite um valor: ");
scanf("%d",&a);

b=&a;
c=&b;
d=&c;

printf("Dobro: %d\n",(*b)*2);
printf("Triplo: %d\n",(**c)*3);
printf("Quadruplo: %d\n",(**d)*4);

return 0;
}