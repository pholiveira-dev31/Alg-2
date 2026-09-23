#include <stdio.h>

void imprimir(int *v,int tamanho){
int *p=v;

while(p<v+tamanho){
printf("%d\n",*p);
p++;
}
}

int main(){
int v[5]={10,20,30,40,50};

imprimir(v,5);

return 0;
}