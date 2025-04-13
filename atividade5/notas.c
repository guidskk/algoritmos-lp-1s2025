#include <stdio.h>

int main(int argc, char* argv[]){

    int alunos;
    int i, k, aprovados = 0, reprovados = 0;
    float media;
    float soma = 0.0;
    float nota_maior, nota_menor;
    
    printf("Digite o numero de alunos!: \n");
    scanf("%d", &alunos);

    float notas[alunos];

    printf("Alunos: %d", alunos);
       
    for(int i = 0; i < alunos; i++){
        printf("\nDigite as notas dos alunos! %d:", i);
        scanf("%f", &notas[i]);
        (notas[i] < 0.0 || notas[i] > 10.0);
        if(notas[i] < 0.0){
            printf("Nota invalida!\n");
            printf("\nRepita a nota! %d:", i);
            scanf("%f", &notas[i]);
        } else if(notas[i] > 10.0){
            printf("Nota invalida!\n");
            printf("\nRepita a nota! %d:", i);
            scanf("%f", &notas[i]);
        }
    } 

    for(int i = 0; i < alunos; i++){
        printf("\nNota do aluno %d: %2.f", i, notas[i]);
    } 

     printf("\ndigite a posicao do aluno para ver a nota!:", alunos - 1);
     scanf("%d", &k);

     if(k >= 0 && k < alunos){
        printf("Nota do aluno na posicao! %d: %.2f\n", k, notas[k]);
     } else {
        printf("Posicao invalida!\n");
     }
    
    nota_maior = nota_menor = notas[0];

    for(i = 0; i < alunos; i++){
        soma += notas[i];
        if(notas[i] > nota_maior) nota_maior = notas[i];
        if(notas[i] < nota_menor) nota_menor = notas[i];
    }

    for(i = 0; i < alunos; i++){
        if(notas[i] >= 6.0) aprovados++;
        if(notas[i] < 6.0) reprovados++;
    }
        
    media = soma / alunos; 

    printf("Media geral dos alunos!: %.2f\n", media);
    printf("Maior nota! %.2f\n", nota_maior);
    printf("Menor nota! %.2f\n", nota_menor);
    printf("Alunos aprovados! %d\n", aprovados);
    printf("Alunos reprovados! %d\n", reprovados);

    return 0;
}