#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de vetores
    int v1[50]={1, 2, 3, 4, 5}, v2[50]={2, 5, 7, 1, -9, 18}, v3[50];

    //declaração de variáveis
    int i, j, k, n1, n2, tam;

    n1 = 5;
    n2 = 6;

    if (n1 > n2){
        for (i=0; i<n1; i++){
            for (j=0;j<n2; j++){
                for (k=0; k<n1;k++){
                    if (v1[i] == v2[j] || v1[i] != v2[j]){
                        v3[i] = v1[i];
                        v3[i] = v2[j];
                    }
                }
            }
        }
    }

    if (n2 > n1){
        for (j=0; j<n2; j++){
            for (i=0;i<n1; i++){
                for (k=0; k<n2;k++){
                    if (v1[i] == v2[j] || v1[i] != v2[j]){
                        v3[i] = v1[i];
                        v3[i] = v2[j];
                    }
                }
            }
        }
    }
    tam = sizeof(v3);
    for (i=0; i<tam; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}
