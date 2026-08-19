#include <stdio.h>

int main() {
    int notas;
    int media;
    int qntdalunos;

    printf("Qual é a soma da nota dos alunos? ");
    scanf("%d", &notas);

    printf("Qual é a quantidade de alunos? ");
    scanf("%d", &qntdalunos);

    media = notas / qntdalunos;

    printf("A média é: %d\n", media);

    return 0;
}