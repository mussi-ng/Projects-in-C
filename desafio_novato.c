#include <stdio.h> 
#include <string.h>
    int main () {
        char estado;
        int codigo_da_carta;
        char nome_da_cidade[50];
        int  populacao;
        float area;
        float PIB; 
        int pnts_turisticos;

//Estado 2
        char estado_2;
        char codigo_da_carta_2[50];
        char nome_da_cidade_2[50];
        int  populacao_2;
        float area_2;
        float PIB_2; 
        int pnts_turisticos_2;


//Entrada de dados do estado 1 
        printf("Digite o Estado: ");
        scanf ("%c", &estado);

        printf("Digite o código carta: ");
        scanf ("%i", &codigo_da_carta);

        printf("Digite o nome da cidade: ");
        getchar();
        fgets(nome_da_cidade, 50, stdin);
        nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

        printf("Digite a população da cidade: ");
        scanf ("%d", &populacao);

        printf("Digite a área da cidade (em km²)): ");
        scanf ("%f", &area);
    
        printf("Digite o PIB da cidade (em bilhão de reais): ");
        scanf ("%f", &PIB);
        
        printf("Digite a quantidade de pontos turísticos da cidade: ");
        scanf ("%d", &pnts_turisticos);


//Entrada de dados do estado 2
/*        printf("Anote os dados da Carta 02: \n");
        
        printf("Digite o Estado: ");
        scanf ("%c", &estado_2);

        printf("Digite o nome da cidade: ");
        getchar();
        fgets(nome_da_cidade, 50, stdin);
        nome_da_cidade_2[strcspn(nome_da_cidade_2, "\n")] = '\0';

        printf("Digite a população da cidade: ");
        scanf ("%d", &populacao2);

        printf("Digite a área da cidade (em km²)): ");
        scanf ("%f", &area_2);
    
        printf("Digite o PIB da cidade (em bilhão de reais): ");
        scanf ("%f", &PIB_2);
        
        printf("Digite a quantidade de pontos turísticos da cidade: ");
        scanf ("%d", &pnts_turisticos_2);
*/

//Saída de dados da carta 1
        printf("\n");
        printf("Carta %02i: \n",codigo_da_carta);
        
        printf("Estado: %c \n", estado);
        printf("Código da Carta: %c%02i\n",estado, codigo_da_carta);
        printf("Cidade: %s\n", nome_da_cidade);
        printf("População: %i\n",populacao);
        printf("Área: %f\n",area);
        printf("PIB: %f\n", PIB);
        printf("Número de pontos turísticos: %i\n",pnts_turisticos);



    }