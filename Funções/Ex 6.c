#include <stdio.h>

char conceito(float nota){
    if(nota <= 4.9)
        return 'D';
    else if(nota <= 6.9)
        return 'C';
    else if(nota <= 8.9)
        return 'B';
    else
        return 'A';
}

int main(){
    float nota;

    printf("Digite a nota: ");
    scanf("%f",&nota);

    printf("Conceito: %c",conceito(nota));

    return 0;
}