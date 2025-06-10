#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    
    // criando argumentos na linha de comando

    int a, b, c;
    int numeros[argc-1];

    if(argc <= 3){
        printf("Informe 3 argumentos");
        return 1;
    }

    a = atoi(argv[1]); // valor minimo 
    b = atoi(argv[2]); // valor maximo
    c = atoi(argv[3]); // valor esperado

    if(a >= b){
        printf("O primeiro valor deve ser menor que o segundo!");
        return 1;
    }
    if(c < a || c > b){
        printf("O terceiro valor deve ser maior ou igual ao primeiro e menor ou igual ao segundo!");
        return 1;
    }

    // criando o sorteio

    srand(time(NULL));
    int sorteio = (rand() % (b - a + 1)) + a;

    const char *resultado;

    if(sorteio == c){
        resultado = "sorteado";
        printf("Seu numero foi sorteado!\n");
    }
    else{
        resultado = "nao sorteado";
        printf("Seu numero nao foi sorteado!\n");
       }

    printf("O numero sorteado eh: %d\n", sorteio);
    printf("O resultado eh: %s\n", resultado);

    // criando arquivo

    FILE *log = fopen("log.txt", "a");

    if(log == NULL){
        printf("ERRO ao abrir o arquivo!");
        return 1;
    }

    fprintf(log, "Numero minimo: %d\n", a);
    fprintf(log, "Numero maximo: %d\n", b);
    fprintf(log, "Numero esperado: %d\n", c);
    fprintf(log, "Numero sorteado: %d\n", sorteio);
    fprintf(log, "Resultado: %s\n\n", resultado);

    fclose(log);

    return 0;
}