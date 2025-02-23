#include <stdio.h>

int main() {

    // Declaração de variáveis carta 1

    char Estado[2];
    char CodigoDaCarta[4];
    char Cidade[30];
    int Populacao, NumerodePontosTuristicos;
    float Area, PIB;
    float DensidadePopulacional = Populacao / Area;
    float PIBPerCapita = PIB / Populacao;

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
    scanf("%d",  &Populacao);


    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos);
    
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a area (em km²):\n");
    scanf("%f", &Area);
   

    // Declaração de variáveis carta 2

    char Estado2[2];
    char CodigoDaCarta2[4];
    char Cidade2[30];
    int Populacao2, NumerodePontosTuristicos2;
    float Area2, PIB2;
    float DensidadePopulacional2 = Populacao2 / Area2;
    float PIBPerCapita2 = PIB2 / Populacao2;

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
    scanf("%d",  &Populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &NumerodePontosTuristicos2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    
    printf("Digite a area (em km²):\n");
    scanf("%f", &Area2);

        // Impressão das informações preenchidas pelo usuário referente a carta 1

    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Número de pontos turísticos: %d\n", NumerodePontosTuristicos);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Área (em km²): %.2f\n", Area);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita);
 
         // Impressão das informações preenchidas pelo usuário referente a carta 2

    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %d\n", Populacao2);
    printf("Número de pontos turísticos: %d\n", NumerodePontosTuristicos2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área (em km²): %.2f\n", Area2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBPerCapita2);



    return 0;
}
