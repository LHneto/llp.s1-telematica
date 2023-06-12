#include <stdio.h>

int main() {
    char nomeArquivo[100];
    char linha[100];
    int contadorLinhas = 0;
    FILE *arquivo;

    printf("Qual arquivo deseja abrir?: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1; 
    }
 
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        contadorLinhas++;
    }
    
    fclose(arquivo);

    printf("Este arquivo possui %d linhas de texto.\n", contadorLinhas);

    return 0; 
}
