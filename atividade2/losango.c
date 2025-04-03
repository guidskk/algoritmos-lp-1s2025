#include <stdio.h>

int main(int argc, char* argv[]){
    int area_losango;
    int diagonal_maior;
    int diagonal_menor;

    //dados
    printf("digite a diagonal maior(D)! ");
    scanf("%d", &diagonal_maior);
    printf("digite a diagonal menor(d)! ");
    scanf("%d", &diagonal_menor);

    //calculo
    area_losango = diagonal_maior * diagonal_menor /2;
    printf("a area do losango eh: %2d\n", area_losango);

    return 0;
}