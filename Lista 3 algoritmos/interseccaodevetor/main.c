#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1[50], v2[50], v3[50];
    int n, n2, i, k, cont;

    //input dos valores
    printf("Digite o tamanho do Vetor 1: ");
    scanf("%d", &n);

    for (i=0;i<n;i++){
        printf("Vetor 1 posicao [%d]: ", i);
        scanf("%f", &v1[i]);
    }

    printf("Digite o tamanho do Vetor 2: ");
    scanf("%d", &n2);

    for (i=0;i<n;i++){
        printf("Vetor 2 posicao [%d]: ", i);
        scanf("%f", &v2[i]);
    }

    //Pegando a intersecção
    cont=0;
    for (i=0;i<n;i++){
        for (k=0;k<n2;k++){
            if (v1[i] == v2[k]){
                v3[cont++]=v1[i];
            }
        }
    }

    //output dos valores
    for(i=0;i<cont;i++){
        printf("%.0f ", v3[i]);
    }


    return 0;
}
