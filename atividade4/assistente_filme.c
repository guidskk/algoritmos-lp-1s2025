#include <stdio.h>

int main(int argc, char* argv[]){

    int filme, genero, tipo;

    printf("Escolhas de filmes\n");
    printf("Digite qual tipo de filme quer ver!:\n");
    printf("1 - leve\n2 - intenso\n");

    scanf("%d", &filme);

    if (filme ==1){
        printf("Digite qual tipo de filme quer ver!:\n");
        printf("1 - comedia\n2 - animacao\n");
        scanf("%d", &genero);

        if (genero ==1){
            printf("Recomendacao: Assista o 'filme As branquelas'!\n");
        } else if (genero ==2){
            printf("Recomendacao: Assista o filme 'toy story'!\n");
        } else{
            printf("Opcao Invalida!\n");
        }
    } else if (filme ==2){
        printf("digite qual tipo de filme quer ver!:\n");
        printf("1 - Terror\n2 - Acao\n");
        scanf("%d", &genero);

        if (genero ==1){
            printf("digite qual tipo de terror quer ver!\n");
            printf("1 - Psicologico\n2 - Subrenatural\n");
            scanf("%d", &tipo);

            if (tipo ==1){
                printf("recomendacao: Assista o filme 'Corra'!\n");
            } else if(tipo ==2){
                printf("recomendacao: Assista o filme 'Invocacao Do Mal'!\n");
            } else{
                printf("opcao invalida!\n");
            }
        } else if (filme ==2){
            printf("digite qual tipo de filme acao quer ver!\n");
            printf("1 - Super-Herois\n2 - Aventura Realista\n");
            scanf("%d", &genero);

            if (genero ==1){
                printf("Recomendacao: Assista o filme 'Vingadores Ultimato'!\n");
            } else if (genero ==2){
                printf("Recomendacao: Assista o filme 'Mad Max Estrada Da Furia'!\n");
            } else {
                printf("Opcao Invalida!\n");
            }
        }
    } else {
        printf("Opcao Invalida!\n");
    }

    return 0;
}