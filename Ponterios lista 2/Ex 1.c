#include <stdio.h>

int main(){
int a,b;

if(&a>&b)
printf("Maior endereco: %p\n",&a);
else
printf("Maior endereco: %p\n",&b);

return 0;
}