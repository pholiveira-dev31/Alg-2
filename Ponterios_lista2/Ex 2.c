#include <stdio.h>

int main(){
int a,b;

printf("Digite a: ");
scanf("%d",&a);

printf("Digite b: ");
scanf("%d",&b);

if(&a>&b)
printf("Conteudo: %d\n",a);
else
printf("Conteudo: %d\n",b);

return 0;
}