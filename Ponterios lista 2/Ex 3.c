#include <stdio.h>

int main(){
float v[10];
int i;

for(i=0;i<10;i++){
printf("%p\n",&v[i]);
}

return 0;
}