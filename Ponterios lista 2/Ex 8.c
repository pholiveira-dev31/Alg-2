	#include <stdio.h>

void preencher(int *v,int tamanho,int valor){
int *p=v;

while(p<v+tamanho){
*p=valor;
p++;
}
}

int main(){
int v[5];
int i,valor;

printf("Digite um valor: ");
scanf("%d",&valor);

preencher(v,5,valor);

for(i=0;i<5;i++)
printf("%d\n",v[i]);

return 0;
}