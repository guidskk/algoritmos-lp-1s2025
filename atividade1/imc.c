#include <stdio.h>

int main(int argc, char* argv[]){
    float imc;
    float altura;
    float peso;

    //dados 
    printf("digite sua altura!: ");
    scanf("%f", &altura);
    printf("digite seu peso!: ");
    scanf("%f", &peso);

    //imc
    imc = peso / (altura * altura);
    printf("O IMC eh: %.2f\n", imc);

    if(imc < 18.5){
        printf("baixo peso\n");
    }
     
    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal\n");
    }
    
    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso\n");
    }
    
    if(imc > 29.9 && imc <= 34.9){
        printf("obesidade I\n");
    }

    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade II\n");
    }

    if(imc > 39.9){
        printf("obesidade III\n");
    }

    return 0;
}