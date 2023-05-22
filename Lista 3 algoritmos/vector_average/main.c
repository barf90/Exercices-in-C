#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um vetor de até 50 números
reais e calcule a média destes valores*/

int main()
{
    float vetor[50], soma, media;
    int i, n;

    //input
    printf("Digite o tamanho do vetor (max. = 50): ");
    scanf("%d", &n);

    //tratando erro do usuário
    while (n>50){
        printf("Valor invalido! Digite o tamanho do vetor (max. = 50): ");
        scanf("%d", &n);
    }

    //valores desejados pelo usuário e soma
    for (i=0; i<n; i++){
        printf("Valor [%d]: ", i+1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    //cálculo da média e output do resultado
    media = soma/n;
    printf("A media = %.2f", media);
    return 0;
}
