#include <stdio.h>
#include <stdlib.h>

//Enunciado do problema
/*Fa�a um programa que calcule o produto interno de dois vetoresuevde
mesmo tamanhonlidos do teclado.
O programa deve ler primeiramente o valor dene
em seguida develer duas sequ�ncias de mesmo tamanho de n�meros
reais e salvar cada sequ�ncia em umvetor. Suponha que o n�mero m�ximo de
elementos de uma sequ�ncia � 50.
O programadeve ent�o calcular o produto interno dos vetores lidos.
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
