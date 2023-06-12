#include <stdio.h>
#include <ctype.h>

int main() {
    char arquivoEntrada[100];
    char arquivoSaida[100];
    FILE *fpEntrada;
    FILE *fpSaida;
    char ch;

    
    printf("Insira o nome do arquivo de entrada: ");
    scanf("%s", arquivoEntrada);

    
    fpEntrada = fopen(arquivoEntrada, "r");

    
    if (fpEntrada == NULL) {
        printf("Erro.\n");
        return 1;
    }


    printf("Insira o nome do arquivo de saída: ");
    scanf("%s", arquivoSaida);

   
    fpSaida = fopen(arquivoSaida, "w");

    
    if (fpSaida == NULL) {
        printf("Erro.\n");
        return 1;
    }

    
    while ((ch = fgetc(fpEntrada)) != EOF) {
        char lowercaseCh = tolower(ch);
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            ch = '*';
        }
        fputc(ch, fpSaida);
    }


    fclose(fpEntrada);
    fclose(fpSaida);

    printf("Arquivo criado com sucesso.\n");

    return 0;
}
