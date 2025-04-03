#include <stdio.h>

int main(int argc, char* argv[]){
   int area_trapezio;
   int base_maior;
   int base_menor;
   int altura;
   
   //dados
   printf("digite a base maior(B)!: ");
   scanf("%d", &base_maior);
   printf("digite a base menor(b)!: ");
   scanf("%d", &base_menor);
   printf("digite a altura(h)!: ");
   scanf("%d", &altura);

   //calculo
   area_trapezio = (base_maior + base_menor) * altura / 2;
   printf("a area do trapezio eh: %2d\n", area_trapezio);

   return 0;
}