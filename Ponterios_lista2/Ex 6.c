#include <stdio.h>

int main(){
int v[5];
int *p;
int i;

p=v;

for(i=0;i<5;i++){
printf("Digite um valor: ");
scanf("%d",p+i);
}

for(i=0;i<5;i++){
printf("%d\n",*(p+i)*2);
}

return 0;
}