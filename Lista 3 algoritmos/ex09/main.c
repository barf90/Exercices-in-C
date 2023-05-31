#include <stdio.h>
#include <stdlib.h>

//Enunciado do problema
/*Escreva um programa que leia uma sequência de números
inteiros e os salva em um vetor.Assuma que o tamanho máximo da sequência é 50.
Em seguida o programa deve lerum outro número inteiroC.
O programa deve então encontrar dois números de posições2
distintas do vetor cuja multiplicação sejaCe imprimi-los.
Caso não existam tais números,o programa deve informar isto.
Exemplo: Sevetor=[2,4,5,10,7]eC= 35então o programa deve
imprimir “5 e 7". SeC=1então o programa deve imprimir “Não existem tais números".
*/


int main()
{
    int v[50];
    int i, n, C;

    //Input
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    printf("Valor possivel do produto de dois valores do vetor: ");
    scanf("%d", &C);

    for (i = 0; i < n; i++){
        printf("Valor [%d]: ", i);
        scanf("%d", &v[i]);
    }

    //calculo dos produtos de dois em dois e output dos resultados
    int cont = 0;
    for (i=0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int produto = v[i] * v[j];
            if (produto == C){
                printf("%d x %d = %d\n", v[i], v[j], C);
                cont++;
            }
        }
    }
    if (cont == 0){
        printf("Nao existem tais numeros");
    }

    return 0;
}
