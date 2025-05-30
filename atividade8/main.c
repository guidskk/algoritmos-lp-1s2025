#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// struct do ponto

typedef struct ponto{
    float x;
    float y;
} ponto;

float calculo_distancia(ponto a, ponto b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main(int argc, char* argv[]){

    if(argc != 5){
        printf("Use somente 4 argumnetos\n", argv[0]);
        return 1;
    }

    ponto a, b;
    a.x = atoi(argv[1]);
    a.y = atoi(argv[2]);
    b.x = atoi(argv[3]);
    b.y = atoi(argv[4]);

    float distancia = calculo_distancia(a, b);

    printf("A distancia entre dois pontos eh: %.2f\n", distancia);

    return 0;
}