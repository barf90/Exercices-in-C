#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Escreva um programa que leia um vetor de até 50 números reais e calcule o desvio padrão
destes valores.*/

int main()
{
    float vetor[50], soma, media, desvpad, conta;
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

    //cálculo da média
    media = soma/n;

    //calculo do desvio padrão
    soma=0;
    for (i=0; i<n;i++){
        soma += pow(vetor[i]-media,2);
    }
    desvpad = sqrt(soma/n);

    //output
    printf("\nDesvio padrao = +/- %.2f", desvpad);
    return 0;
}
