#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia um vetor de at� 50 n�meros
reais e calcule a m�dia destes valores*/

int main()
{
    float vetor[50], soma, media;
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

    //c�lculo da m�dia e output do resultado
    media = soma/n;
    printf("A media = %.2f", media);
    return 0;
}
