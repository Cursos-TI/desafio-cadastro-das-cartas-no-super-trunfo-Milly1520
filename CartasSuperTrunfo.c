#include <stdio.h>

int main() {

    // Declaração de variáveis

    char Estado[2];
    char CodigoDaCarta[4];
    char Cidade[30];
    int Populacao, NumerodePontosTuristicos;
    float Area, PIB;
    

    // Solicitação das informações da carta 1 ao usuário

    printf ("Criando as Cartas do Super Trunfo:\n");
    printf("\n");
    printf("Carta 1\n");

    printf("Digite a letra inicial do estado:\n");
    scanf("%s", Estado);

    printf("Digite a cidade:\n");
    scanf("%s", Cidade);

    printf("Digite o código da carta:\n");
    scanf("%s", CodigoDaCarta);

    printf("Digite a população da cidade:\n");
    scanf("%d",  &Populacao);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a área (em km²):\n");
    scanf("%f", &Area);

    // Impressão das informações preenchidas pelo usuário referente a carta 1

    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Número de pontos turísticos: %d\n", NumerodePontosTuristicos);
    printf("PIB: %.2f\n", PIB);
    printf("Área (em km²): %.2f\n", Area);

    // Solicitação das informações da carta 2 ao usuário
    printf("\n");  
    printf("Carta 2\n");

    printf("Digite a letra inicial do estado:\n");
    scanf("%s", Estado);

    printf("Digite a cidade:\n");
    scanf("%s", Cidade);

    printf("Digite o código da carta:\n");
    scanf("%s", CodigoDaCarta);

    printf("Digite a população da cidade:\n");
    scanf("%d",  &Populacao);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    
    printf("Digite a área (em km²):\n");
    scanf("%f", &Area);
 
    // Impressão das informações preenchidas pelo usuário referente a carta 2
    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Número de pontos turísticos: %d\n", NumerodePontosTuristicos);
    printf("PIB: %.2f\n", PIB);
    printf("Área (em km²): %.2f\n", Area);




    return 0;
}
