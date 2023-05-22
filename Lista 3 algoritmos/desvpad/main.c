#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Escreva um programa que leia um vetor de at� 50 n�meros reais e calcule o desvio padr�o
destes valores.*/

int main()
{
    float vetor[50], soma, media, desvpad, conta;
    int i, n;

    //input
    printf("Digite o tamanho do vetor (max. = 50): ");
    scanf("%d", &n);

    //tratando erro do usu�rio
    while (n>50){
        printf("Valor invalido! Digite o tamanho do vetor (max. = 50): ");
        scanf("%d", &n);
    }

    //valores desejados pelo usu�rio e soma
    for (i=0; i<n; i++){
        printf("Valor [%d]: ", i+1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    //c�lculo da m�dia
    media = soma/n;

    //calculo do desvio padr�o
    soma=0;
    for (i=0; i<n;i++){
        soma += pow(vetor[i]-media,2);
    }
    desvpad = sqrt(soma/n);

    //output
    printf("\nDesvio padrao = +/- %.2f", desvpad);
    return 0;
}
