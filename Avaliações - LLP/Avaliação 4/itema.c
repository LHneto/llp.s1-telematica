#include <stdio.h>
#include <stdlib.h>


int** criarMatriz(int rows, int cols) {
    int** matriz = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matriz[i] = (int*)malloc(cols * sizeof(int));
    }
    return matriz;
}

void liberarMatriz(int** matriz, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matriz[i]);
    }
    free(matriz);
}


int main() {
    int rows, cols;

  
    printf("Digite o número de linhas: ");
    scanf("%d", &rows);
    printf("Digite o número de colunas: ");
    scanf("%d", &cols);

   
    int** matrizA = criarMatriz(rows, cols);

   
    int** matrizB = criarMatriz(rows, cols);

   
    int** matrizC = criarMatriz(rows, cols);

   
    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }


    printf("A matriz C é:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    liberarMatriz(matrizA, rows);
    liberarMatriz(matrizB, rows);
    liberarMatriz(matrizC, rows);

    return 0;
}
