#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    char linha[100];
    int contadorVogais = 0;
    FILE *arquivo;

    
    printf("Qual arquivo deseja abrir? ");
    scanf("%s", nomeArquivo);

   
    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro.\n");
        return 1; 
    }

    
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        for (int i = 0; linha[i] != '\0'; i++) {
            char caractere = tolower(linha[i]); 

            if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
                contadorVogais++;
            }
        }
    }

    
    fclose(arquivo);

    printf("Este arquivo possui %d letras vogais.\n", contadorVogais);

    return 0; 
}
