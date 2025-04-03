#include <stdio.h>

int main(int argc, char* argv[]){
    int area_retangulo;
    int base;
    int altura;

    //dados
    printf("digite a base(b)!: ");
    scanf("%d", &base);
    printf("digite a altura(h)!: ");
    scanf("%d", &altura);

    //calculo
    area_retangulo = base * altura;
    printf("a area do rentangulo eh: %2d\n", area_retangulo);

    return 0;
}
