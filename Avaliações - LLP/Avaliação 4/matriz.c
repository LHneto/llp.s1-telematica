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

void exibirMatriz(int** matriz, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int main() {
    int rows, cols;

    
    printf("Insira o número de linhas: ");
    scanf("%d", &rows);
    printf("Insira o número de colunas: ");
    scanf("%d", &cols);

   
    int** matrizA = criarMatriz(rows, cols);

    
    int** matrizB = criarMatriz(rows, cols);


    int** matrizC = criarMatriz(rows, cols);

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrizB[i][j] = 2;
            matrizC[i][j] = 3;
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrizA[i][j] = matrizB[i][j] + matrizC[i][j];
        }
    }


    printf("Matriz A:\n");
    exibirMatriz(matrizA, rows, cols);

    printf("Matriz B:\n");
    exibirMatriz(matrizB, rows, cols);

    printf("Matriz C:\n");
    exibirMatriz(matrizC, rows, cols);

    
    liberarMatriz(matrizA, rows);
    liberarMatriz(matrizB, rows);
    liberarMatriz(matrizC, rows);

    return 0;
}