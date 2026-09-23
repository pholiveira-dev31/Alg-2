#include <stdio.h>
#include <math.h>

struct Ponto{
float x;
float y;
};

struct Retangulo{
struct Ponto supEsq;
struct Ponto infDir;
};

int main(){
struct Retangulo ret;
float base,altura,area,perimetro,diagonal;

printf("X superior esquerdo: ");
scanf("%f",&ret.supEsq.x);

printf("Y superior esquerdo: ");
scanf("%f",&ret.supEsq.y);

printf("X inferior direito: ");
scanf("%f",&ret.infDir.x);

printf("Y inferior direito: ");
scanf("%f",&ret.infDir.y);

base=fabs(ret.infDir.x-ret.supEsq.x);
altura=fabs(ret.supEsq.y-ret.infDir.y);

area=base*altura;
perimetro=2*(base+altura);
diagonal=sqrt(base*base+altura*altura);

printf("Area: %.2f\n",area);
printf("Perimetro: %.2f\n",perimetro);
printf("Diagonal: %.2f\n",diagonal);

return 0;
}
