#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração de vetores
    int v1[50]={1, 2, 3, 4, 5};
    int v2[50]={2, 5, 7, 1, -9, 18};
    int v3[50];

    //declaração de variáveis
    int i, j, n1, n2, atual, existe, tam;

    n1 = 5;
    n2 = 6;
    tam = 0;

    for (i = 0; i < n1; i++){
        atual = v1[i];
        existe = 0;
        for (j=0; j < tam; j++){
            if (v3[j] == atual){
                existe = 1;
                break;
            }
        }
        if (existe == 0){
            v3[tam] = atual;
            tam++;
        }
    }

    for (i = 0; i < n2; i++){
        atual = v2[i];
        existe = 0;
        for (j=0; j < tam; j++){
            if (v3[j] == atual){
                existe = 1;
                break;
            }
        }
        if (existe == 0){
            v3[tam] = atual;
            tam++;
        }
    }

    for (i=0; i<tam; i++){
        printf("%d ", v3[i]);
    }

    return 0;
}
