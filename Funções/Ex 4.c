#include <stdio.h>

int idadeDias(int anos,int meses,int dias){
    return anos*365 + meses*30 + dias;
}

int main(){
    int a,m,d;

    printf("Anos: ");
    scanf("%d",&a);

    printf("Meses: ");
    scanf("%d",&m);

    printf("Dias: ");
    scanf("%d",&d);

    printf("Idade em dias: %d",idadeDias(a,m,d));

    return 0;
}