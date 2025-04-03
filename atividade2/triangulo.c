#include <stdio.h>

int main(int argc, char* argv[]){
    int area_triangulo;
    int base;
    int altura;

    //dados
    printf("digite a base(b)!: ");
    scanf("%d", &base);
    printf("digite a altura(h)!: ");
    scanf("%d", &altura);

    //calculo
    area_triangulo = base * altura / 2;
    printf("a area do triangulo eh: %2d\n", area_triangulo);
    return 0;
}
