#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

  
    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1;
    }

  
    printf("Insira os caracteres que deseja salvar (Insira '0' para sair):\n");

    do {
        scanf(" %c", &caractere); 

        if (caractere != '0') {
            fputc(caractere, arquivo); 
        }
    } while (caractere != '0');

    fclose(arquivo);

    printf("Seu arquivo foi salvo com sucesso.\n");

    return 0; 
}
