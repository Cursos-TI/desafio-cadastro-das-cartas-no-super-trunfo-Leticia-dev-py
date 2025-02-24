
#include <stdio.h> // Declarando biblioteca 


int main() { // Iniciando o código e declarando as variáveis 
   
    char CodigoDaCarta[5], CodigoDaCarta2[5], NomeDaCidade[10], NomeDaCidadade2[10], Estado[1], Estado2[1]; 
    float Area, Area2, PIB, PIB2;
    int Populacao, Populacao2, Pontos_Turisticos , Pontos_Turisticos2;

    // Pedindo as informações das duas cartas e recebendo guardando nas variáveis
    printf("\ninforme o estado da carta 1:\n"); 
    scanf(" %[^\n]", Estado);
    getchar();

    printf("\nInforme o codigo da carta 1:\n");
    scanf(" %[^\n]", CodigoDaCarta);
    getchar();

    printf("\nInforme o nome da cidade:\n");
    scanf(" %[^\n]", NomeDaCidade);
    getchar();

    printf("\nInforme a Populacao da cidade:\n");
    scanf("%u", &Populacao);

    printf("\nInforme a area da cidade (em km2):\n");
    scanf("%f", &Area);

    printf("\nInforme o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("\nInforme os Pontos turisticos da cidade:\n");
    scanf("%d", &Pontos_Turisticos);

    
    printf("\ninforme o estado da carta 2:\n");
    scanf(" %[^\n]", Estado2);
    getchar();

    printf("\nInforme o codigo da carta 2:\n");
    scanf(" %[^\n]", CodigoDaCarta2);
    getchar();

    printf("\nInforme o nome da cidade:\n");
    scanf(" %[^\n]", NomeDaCidadade2);
    getchar();

    printf("\nInforme a Populacao da cidade:\n");
    scanf("%u", &Populacao2);

    printf("\nInforme a area da cidade (em km2):\n");
    scanf("%f", &Area2);

    printf("\nInforme o PIB da cidade:\n");
    scanf("%f", &PIB2);

    printf("\nInforme os Pontos turisticos da cidade:\n");
    scanf("%d", &Pontos_Turisticos2);

    // Mostrando de forma organizada as informaçôes recebidas pelo sistema

    printf("\nCarta 1:\n");
    printf("\nEstado: %s\n", Estado);
    printf("\nCodigo: %s\n", CodigoDaCarta);
    printf("\nNome da Cidade: %s\n", NomeDaCidade);
    printf("\nPopulacao: %d\n", Populacao);
    printf("\nArea: %2.f km2\n", Area);
    printf("\nPIB: %2.f bilhoes de reais\n", PIB);
    printf("\nNumero de pontos turisticos: %d\n", Pontos_Turisticos);

    printf("\nCarta 2:\n");
    printf("\nEstado: %s\n", Estado2);
    printf("\nCodigo: %s\n", CodigoDaCarta2);
    printf("\nNome da Cidade: %s\n", NomeDaCidadade2);
    printf("\nPopulacao: %d\n", Populacao2);
    printf("\nArea: %2.f km2\n", Area2);
    printf("\nPIB: %2.f bilhoes de reais\n", PIB2);
    printf("\nNumero de pontos turisticos: %d\n", Pontos_Turisticos2);




    // Fim
    return 0;

}
