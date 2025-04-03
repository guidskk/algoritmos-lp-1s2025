#include <stdio.h>

 int main(int argc, char* argv[]){
     int area_quadrado;
     int lado;

     //dados
     printf("digite o lado(l)!: ");
     scanf("%d", &lado);

     //calculo
    area_quadrado = lado * lado;
     printf("a area do quadrado eh: %2d\n", area_quadrado);
     
     return 0;
}  