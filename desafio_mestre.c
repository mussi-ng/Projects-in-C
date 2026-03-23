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
    float area, PIB, per_capita, densidade, inverso_densidade, super_poder;
    

    // * Entrada 
    printf("\n=== CIDADE A ===\n");
    anotar_dados_Cidade_A(&populacao, &area, &PIB, Estado, nome_da_cidade, &carta, &pnts_turisticos); // chama a função

    // * Cálculo A
    per_capita = (float) (PIB * 1000000000.0f) / (float) populacao;
    densidade = (float) populacao / area;
    inverso_densidade = (1.0f / densidade) * 1000.0f;

    // * Cálculo do super super poder
    super_poder = (float) populacao + (float) pnts_turisticos + area + per_capita + inverso_densidade;

    
    //Cidade B
    char Estado2[50], nome_da_cidade2[50];
    int populacao2, carta2, pnts_turisticos2;
    float area2, PIB2, densidade2, per_capita2, inverso_densidade2, super_poder2; 

    // * Entrada Cidade B
    printf("\n=== CIDADE B ===\n");
    anotar_dados_Cidade_A(&populacao2, &area2, &PIB2, Estado2, nome_da_cidade2, &carta2, &pnts_turisticos2);

    // * Cálculo Cidade B
    per_capita2 = (float) (PIB2 * 1000000000.0f) / (float) populacao2;
    densidade2 = (float) populacao2 / area2;
    inverso_densidade2 = (1.0f / densidade2) * 1000.0f;

    // * Cálculo do super super poder
    super_poder2 = (float) populacao2 + (float) pnts_turisticos2 + area2 + per_capita2 + inverso_densidade2;

    
    //Comparação
    populacao > populacao2;
    area > area2;
    PIB > PIB2;
    pnts_turisticos > pnts_turisticos2;
    densidade > densidade2;
    per_capita > per_capita;
    super_poder > super_poder2;

    printf("\n--- RESULTADOS ---\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Número de pontos turísticos: Carta 1 venceu (%d)\n", pnts_turisticos > pnts_turisticos2);
    printf("A densidade populacional é de: Carta 1 venceu (%d)\n", densidade > densidade2);
    printf("O PIB per Capita: Carta 1 venceu (%d)\n", per_capita > per_capita2);
    printf("Super poder: Carta 1 venceu (%d)\n", super_poder > super_poder2);

    printf("\n");
    printf("Super Poder A: %.2f\n", super_poder);
    printf("Super Poder B: %.2f\n", super_poder2);
return 0;
}