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
   
    int tamanho = 3;
    
  
    int A[][3] = {{7, 5, 1}, {4, 2, 9}, {2, 9, 4}};
    int B[][3] = {{8, 6, 4}, {7, 5, 2}, {6, 3, 8}};
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
