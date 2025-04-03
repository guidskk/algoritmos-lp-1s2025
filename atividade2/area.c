#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(int argc, char* argv[]){

    char opcao;
    float raio, diagonal_maior, diagonal_menor, lado, base_maior, base_menor, altura, base, A;

    printf("area.c\n");
    printf("escolha uma opcao: \n");
    printf("c - circulo\n");
    printf("l - losango\n");
    printf("q - quadrado\n");
    printf("r - retangulo\n");
    printf("t - triangulo\n");
    printf("z - trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){

        case 'c':
           printf("circulo\n");
           printf("digite o valor do raio(r)! ");
           scanf("%f", &raio);
           A = pi * raio * raio;
           break;
        case 'l':
            printf("losango\n");
            printf("digite a diagonal maior(D)! ");
            scanf("%f", &diagonal_maior);
            printf("digite a diagonal menor(d)! ");
            scanf("%f", &diagonal_menor);
            A  = (diagonal_maior * diagonal_menor)/2;
            break;
        case 'q':
            printf("quadrado\n");
            printf("digite o lado(l)! ");
            scanf("%f", &lado);
            A = lado * lado;
            break;
        case 'r':
            printf("retangulo\n");
            printf("digite a base(b)! ");
            scanf("%f", &base);
            printf("digite a altura(h)! ");
            scanf("%f", &altura);
            A = base * altura;
            break;
        case 't':
            printf("triangulo\n");
            printf("digite a base(b)! ");
            scanf("%f", &base);
            printf("digite a altura(h)! ");
            scanf("%f", &altura);
            A = base * altura / 2;
            break;
        case 'z':
            printf("trapezio\n");
            printf("digite a base maior(B)! ");
            scanf("%f", &base_maior);
            printf("digite a base menor(b)! ");
            scanf("%f", &base_menor);
            printf("digite a altura(h)! ");
            scanf("%f", &altura);
            A = (base_maior + base_menor) * altura / 2;
            break;
        default:
            printf("opcao invalida\n");
            A = 0;
            break;
    }
     printf("A = %2f\n", A);
     return 0;  
}
