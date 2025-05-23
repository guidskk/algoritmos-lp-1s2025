#include <stdio.h>
 
/**
Declaração de função 
A função tem por objetivo: ler um valor dentre 2 opções valida
A função deve retornar o valor valido lido 
**/

int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2, char* texto_adicional){

    // Codigo da funcao

    int opcao_valida;

    do{
        printf("%s\nEscolha uma opcao:\n%d - %s\n%d - %s\n", texto_adicional, opcao1, texto_opcao1, opcao2, texto_opcao2);
        scanf("%d", &opcao_valida);
    }
    while(opcao_valida != opcao1 && opcao_valida != opcao2);

    return opcao_valida;
}

int main(int argc, char* argv[]){
    
    int opcao;
    int resposta;

    opcao = ler_valor_valido(1, 0, "Iniciar Quiz", "Sair", "");

    if(opcao == 1){
        resposta = ler_valor_valido(1, 2, "Rio de janeiro", "Brasilia", "Qual eh a capital do Brasil?");

        if(resposta == 2){
            printf("Voce Acertou!");
        }
        else{
            printf("Voce Errou!");
        }

        resposta = ler_valor_valido(3, 4, "Moscow", "Brasilia", "Qual eh a capital da Russia?");

        if("resposta == 3"){
            printf("Voce Acertou!");
        }
        else{
            printf("Voce Errou!");
        }
    }

    return 0;
}