#include <stdio.h>
#define pi 3.14

int main(int argc, char* argv[]){
    float area_circulo;
    float raio;

    //dados
    printf("digite o raio(r)!: ");
    scanf("%f", &raio);

    //calculo
    area_circulo = pi * raio * raio;
    printf("a area do circulo eh: %2f\n", area_circulo);

    return 0; 
}