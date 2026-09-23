#include <stdio.h>
#include <string.h>

int existe(char *a,char *b){
char *p,*q;

while(*a!='\0'){
p=a;
q=b;

while(*p==*q && *q!='\0'){
p++;
q++;
}

if(*q=='\0')
return 1;

a++;
}

return 0;
}

int main(){
char a[100],b[100];

printf("Primeira string: ");
fgets(a,100,stdin);

printf("Segunda string: ");
fgets(b,100,stdin);

a[strcspn(a,"\n")]='\0';
b[strcspn(b,"\n")]='\0';

if(existe(a,b))
printf("A segunda string existe na primeira\n");
else
printf("A segunda string nao existe na primeira\n");

return 0;
}