#include <stdio.h>
#include <stdlib.h>

//Enunciado do problema
/*Faça um programa que calcule o produto interno de dois vetoresuevde
mesmo tamanhonlidos do teclado.
O programa deve ler primeiramente o valor dene
em seguida develer duas sequências de mesmo tamanho de números
reais e salvar cada sequência em umvetor. Suponha que o número máximo de
elementos de uma sequência é 50.
O programadeve então calcular o produto interno dos vetores lidos.
*/

int main()
{
    float u[50], v[50], prod[50];
    int n;

    //Pegando os valores desejados tamanho e valores dos vetores
    printf("Tamano dos vetores: ");
    scanf("%d", &n);

    printf("Vetor 1\n");
    for (int i = 0; i<n; i++){
        printf("Vetor 1 pos[%d]: ", i);
        scanf("%f", &u[i]);
    }

    printf("Vetor 2\n");
    for (int i = 0; i<n; i++){
        printf("Vetor 1 pos[%d]: ", i);
        scanf("%f", &v[i]);
    }

    //Produto dos vetores e output do vetor prod
    for (int i = 0; i<n;i++){
            prod[i] = u[i] * v[i];
            printf("%.2f ", prod[i]);
    }
    return 0;
}
