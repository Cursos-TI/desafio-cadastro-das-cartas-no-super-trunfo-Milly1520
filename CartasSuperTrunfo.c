#include <stdio.h>

int main() {

    // Declaração de variáveis carta 1

    char Estado[2];
    char CodigoDaCarta[4];
    char Cidade[30];
    int NumerodePontosTuristicos;
    unsigned long int Populacao;
    float Area, PIB;

    // Solicitação das informações da carta 1 ao usuário

    printf ("Criando as Cartas do Super Trunfo:\n");
    printf("\n");
    printf("Carta 1\n");

    printf("Digite a letra inicial do estado:\n");
    scanf("%s", Estado);

    printf("Digite a cidade:\n");
    scanf("%s", Cidade);

    printf("Digite o codigo da carta:\n");
    scanf("%s", CodigoDaCarta);
    
    
    printf("Digite a populacao da cidade:\n");
    scanf("%lu",  &Populacao);


    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a area (em km²):\n");
    scanf("%f", &Area);
 
    float DensidadePopulacional = Populacao / (unsigned long int) Area;
    float PIBPerCapita = (unsigned long int) PIB / Populacao;
    float SuperPoder = Populacao + NumerodePontosTuristicos + PIB + Area + DensidadePopulacional + PIBPerCapita;

    // Declaração de variáveis carta 2

    char Estado2[2];
    char CodigoDaCarta2[4];
    char Cidade2[30];
    int NumerodePontosTuristicos2;
    unsigned long int Populacao2;
    float Area2, PIB2;

    // Solicitação das informações da carta 2 ao usuário

    printf("\n");  
    printf("Carta 2\n");

    printf("Digite a letra inicial do estado:\n");
    scanf("%s", Estado2);

    printf("Digite a cidade:\n");
    scanf("%s", Cidade2);

    printf("Digite o codigo da carta:\n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite a populacao da cidade:\n");
    scanf("%lu",  &Populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a area (em km²):\n");
    scanf("%f", &Area2);

    float DensidadePopulacional2 = Populacao2 / (unsigned long int) Area2;
    float PIBPerCapita2 = (unsigned long int) PIB2 / Populacao2;
    float SuperPoder2 = Populacao2 + NumerodePontosTuristicos2 + PIB2 + Area2 + PIBPerCapita2 + DensidadePopulacional2;

        // Impressão das informações preenchidas pelo usuário referente a carta 1

    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %lu\n", Populacao);
    printf("Pontos turísticos: %d\n", NumerodePontosTuristicos);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Área (em km²): %.2f\n", Area);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita);
    printf("Super Poder: %2f\n", SuperPoder);

         // Impressão das informações preenchidas pelo usuário referente a carta 2

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %lu\n", Populacao2);
    printf("Pontos turísticos: %d\n", NumerodePontosTuristicos2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área (em km²): %.2f\n", Area2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita2);
    printf("Super Poder: %2f\n", SuperPoder2);

    printf("\n");

    printf("Comparação de Cartas\n");

    printf("População: %d\n", Populacao > Populacao2);
    printf("Pontos turísticos: %d\n", NumerodePontosTuristicos > NumerodePontosTuristicos2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Área (em km²): %d\n", Area > Area2);
    printf("Densidade Populacional: %d\n", DensidadePopulacional < DensidadePopulacional2);
    printf("PIB Per Capita: %d\n", PIBPerCapita > PIBPerCapita2);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2);


    return 0;
}
