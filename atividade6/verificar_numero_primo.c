#include <stdio.h>

// criando função

int numero_primo(int numero){

    // verificação de numero primo
    
    if(numero <= 1){
        return 0;
    }
        
    for(int i = 2; i * i <= numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }
    return 1;
}
    
int main(int argc, char* argv[]){

    int numero;
    int primo;

    printf("Verificacao de numero primo!\n");
    printf("Digite 0 para fechar o programa!\n");

    do{
        printf("Digite um numero inteiro.\n");
        scanf("%d", &numero);

        if(numero == 0){
            printf("Encerrando Programa\n");
            break;
        }
        if(numero < 0){
            printf("Digite APENAS numeros postivos!\n");
            continue;
        }
    
    primo = numero_primo(numero);

    if(primo){
        printf("%d Eh um numero primo!\n", numero);
    }
    else{
        printf("%d Nao eh um numero primo!\n", numero);
    }
    }
    while(1);

    return 0;
}