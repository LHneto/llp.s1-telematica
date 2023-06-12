#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char arquivo[100];
    FILE *fp;
    int contador[ALPHABET_SIZE] = {0};
    char ch;

    
    printf("Insira o nome do arquivo: ");
    scanf("%s", arquivo);

    
    fp = fopen(arquivo, "r");

    
    if (fp == NULL) {
        printf("Erro.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            contador[ch - 'a']++;
        }
    }

    
    fclose(fp);

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        char letra = 'a' + i;
        printf("A letra '%c' aparece %d vez(es).\n", letra, contador[i]);
    }

    return 0;
}
