#include <stdio.h>

int main(int argc, char* argv[]){
    float imc;
    float altura;
    float peso;
    printf("digite sua altura!: ");
    scanf("%f", &altura);
    printf("digite seu peso!: ");
    scanf("%f", &peso);

    //imc
    imc = peso / (altura * altura);
    printf("O IMC eh: %2f\n", imc);

    return 0;
}