#include <stdio.h>

struct Hora{
int hora;
int minuto;
int segundo;
};

int main(){
struct Hora h[5];
int i,maior=0;

for(i=0;i<5;i++){
printf("Hora %d\n",i+1);

printf("Hora: ");
scanf("%d",&h[i].hora);

printf("Minuto: ");
scanf("%d",&h[i].minuto);

printf("Segundo: ");
scanf("%d",&h[i].segundo);
}

for(i=1;i<5;i++){
if(h[i].hora>h[maior].hora)
maior=i;
else if(h[i].hora==h[maior].hora && h[i].minuto>h[maior].minuto)
maior=i;
else if(h[i].hora==h[maior].hora && h[i].minuto==h[maior].minuto && h[i].segundo>h[maior].segundo)
maior=i;
}

printf("Maior hora: %02d:%02d:%02d\n",h[maior].hora,h[maior].minuto,h[maior].segundo);

return 0;
}