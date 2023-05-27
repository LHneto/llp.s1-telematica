#include <stdio.h>


struct Dados {
    int codigo;
    float preco;
};

int main() {
    struct Dados produto; 

 
    printf("Digite o código do produto: ");
    scanf("%d", &produto.codigo);
    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);

    
    FILE *arquivo;
    arquivo = fopen("produtos.txt", "w"); 

    if (arquivo == NULL) {
        printf("Não foi possivel abrir o arquivo\n");
        return 1; 
    }

    fprintf(arquivo, "Código: %d\n", produto.codigo);
    fprintf(arquivo, "Preço: %.2f\n", produto.preco);

    fclose(arquivo); 

    printf("Os dados foram gravados com sucesso no arquivo 'produtos.txt'.\n");

    return 0;

}