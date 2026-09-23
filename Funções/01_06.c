#include <stdio.h>

char obterConceitoAluno(float valorNota){
    if(valorNota <= 4.9f)
        return 'D';
    else if(valorNota <= 6.9f)
        return 'C';
    else if(valorNota <= 8.9f)
        return 'B';
    else
        return 'A';
}

int main(){
    float notaFinal;

    printf("Nota do aluno: ");
    scanf("%f",&notaFinal);

    printf("Conceito obtido: %c",obterConceitoAluno(notaFinal));

    return 0;
}
