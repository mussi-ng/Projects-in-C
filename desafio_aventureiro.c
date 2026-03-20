#include <stdio.h>
#include <string.h>

//Função para a entrada de dados das cidades
void anotar_dados_Cidade_A(    
    int *populacao, 
    float *area,
    float *PIB,
    char Estado[],
    char nome_da_cidade[],
    int *carta, 
    int *pnts_turisticos
) { 
  
    
    printf("\n***Cálculo de Densidade e PIB per Capita**\n");

    printf("Escreva o número da carta: ");
    scanf ("%d", carta);
    
    printf("Escreva o Estado: ");
    getchar ();
    fgets (Estado, 50, stdin);
    Estado[strcspn(Estado, "\n")] = '\0';

    printf("Escreva o nome da cidade: ");
    fgets (nome_da_cidade, 50, stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

    printf("Escreva a população: ");
    scanf ("%d", populacao);

    printf("Escreva a área (em km²): ");
    scanf ("%f", area);

    printf("Escreva o PIB (em bilhões de reais): ");
    scanf ("%f", PIB);

    printf("Escreva o número de pontos turísticos: ");
    scanf ("%d", pnts_turisticos);
}



int main() {
    //Cidade A
    char Estado[50], nome_da_cidade[50];
    int populacao, carta, pnts_turisticos;
    float area, PIB, densidade, per_capita;

    //Cidade B
    char Estado2[50], nome_da_cidade2[50];
    int populacao2, carta2, pnts_turisticos2;
    float area2, PIB2, densidade2, per_capita2;

    // * Entrada Cidade A
    printf("\n=== CIDADE A ===\n");
    anotar_dados_Cidade_A(&populacao, &area, &PIB, Estado, nome_da_cidade, &carta, &pnts_turisticos); // chama a função

    // * Entrada Cidade B
    printf("\n=== CIDADE B ===\n");
    anotar_dados_Cidade_A(&populacao2, &area2, &PIB2, Estado2, nome_da_cidade2, &carta2, &pnts_turisticos2);

    // * Cálculo Cidade A
    densidade = (float) populacao / area;
    per_capita = (float) (PIB * 1000000000) / (float) populacao;
    
    // * Cálculo Cidade B
    densidade2 = (float) populacao2 / area2;
    per_capita2 = (PIB2 * 1000000000) / (float) populacao2;

    printf("\n");

    printf("\n--- RESULTADOS CIDADE A ---\n");
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %c%02d\n", Estado[0],carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", pnts_turisticos);
    printf("A densidade populacional é de: %.2f hab/km²\n", densidade);
    printf("O PIB per Capita: %.2f reais\n", per_capita);

    printf("\n");

    printf("\n--- RESULTADOS CIDADE B ---\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %c%02d\n", Estado2[0],carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pnts_turisticos2);
    printf("A densidade populacional é de: %.2f hab/km²\n", densidade2);
    printf("O PIB per Capita: %.2f reais\n", per_capita2);

return 0;
}