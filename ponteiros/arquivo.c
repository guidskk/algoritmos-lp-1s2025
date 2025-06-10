#include <stdio.h>

/*
    MODOS DE ABERTURA DE ARQUIVO
    "r" -> para leitura 
    "w" -> cirar/sobrescrever e escrever um arquivo 
    "a" -> criar, se não existir, e adicionar ao final do arquivo
*/

int main(int argc, char* argv[]){

    FILE *sexta = fopen("sexta.txt", "w"); // criando arquivo

    if(sexta == NULL){
        printf("erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(sexta, "hello world!"); // escrevendo no arquivo

    fclose(sexta); // fechando o arquivo

    return 0;
}