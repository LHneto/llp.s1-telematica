#include <stdio.h>

int main() {
    char arquivo[100];
    char caractere;
    FILE *fp;
    int contador = 0;
    char linha[100];
    
    printf("Insira o nome do arquivo: ");
    scanf("%s", arquivo);
    printf("Insira o caractere: ");
    scanf(" %c", &caractere);


    fp = fopen(arquivo, "r");


    if (fp == NULL) {
        printf("Erro.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), fp)) {
        char *ptr = linha;
        while (*ptr != '\0') {
            if (*ptr == caractere) {
                contador++;
            }
            ptr++;
        }
    }


    fclose(fp);

 
    printf("O caractere '%c' se repete %d vezes no arquivo.\n", caractere, contador);

    return 0;
}
