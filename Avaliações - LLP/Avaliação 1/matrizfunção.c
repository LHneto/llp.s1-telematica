#include <stdio.h>

void calcularSomaMatriz(int tamanho, int (*A)[tamanho], int (*B)[tamanho], int (*C)[tamanho]) {
    int i, j;
    
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            (*(*(C + i) + j)) = (*(*(A + i) + j)) + (*(*(B + i) + j));
        }
    }
}

int main() {

    int tamanho = 4;
  
    int A[][4] = {{7, 5, 1, 8}, {4, 2, 9, 6}, {2, 9, 4, 1}, {10, 4, 9, 7}};
    int B[][4] = {{8, 6, 4, 9}, {7, 5, 2, 3}, {6, 3, 8, 7}, {5, 8, 3, 2}};
    int C[tamanho][tamanho];
    
    calcularSomaMatriz(tamanho, &A, &B, &C);
    
    int i, j;
    printf("Matriz soma C:\n");
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
