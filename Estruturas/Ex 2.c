#include <stdio.h>
#include <math.h>

struct Ponto{
float x;
float y;
};

struct Retangulo{
struct Ponto superior;
struct Ponto inferior;
};

int main(){
struct Retangulo r;
float largura,altura,area,perimetro,diagonal;

printf("X superior esquerdo: ");
scanf("%f",&r.superior.x);

printf("Y superior esquerdo: ");
scanf("%f",&r.superior.y);

printf("X inferior direito: ");
scanf("%f",&r.inferior.x);

printf("Y inferior direito: ");
scanf("%f",&r.inferior.y);

largura=fabs(r.inferior.x-r.superior.x);
altura=fabs(r.superior.y-r.inferior.y);

area=largura*altura;
perimetro=2*(largura+altura);
diagonal=sqrt(largura*largura+altura*altura);

printf("Area: %.2f\n",area);
printf("Perimetro: %.2f\n",perimetro);
printf("Diagonal: %.2f\n",diagonal);

return 0;
}