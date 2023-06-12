#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    char linha[100];
    int contadorVogais = 0;
    int contadorConsoantes = 0;
    FILE *arquivo;

    printf("Qual arquivo você deseja abrir? ");
    scanf("%s", nomeArquivo);

    
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1; 
    }

    
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        for (int i = 0; linha[i] != '\0'; i++) {
            char caractere = tolower(linha[i]); 

            if (isalpha(caractere)) {
                if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                    contadorVogais++;
                } else {
                    contadorConsoantes++;
                }
            }
        }
    }

    
    fclose(arquivo);

    printf("Este arquivo possui %d vogais e %d consoantes.\n", contadorVogais, contadorConsoantes);

    return 0; 
}
