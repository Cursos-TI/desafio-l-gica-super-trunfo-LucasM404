#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main(){
    //declaração de variaveis.
    char estado1, estado2, codigo1[5], codigo2[5], nome1[25], nome2[25];
    int popu1, popu2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;

    
    //leitura da primeira carta.
    printf("digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);
    printf("digite o código da primeira carta: \n");
    scanf("%s", codigo1);
    printf("digite a cidade da primeira carta: \n");
    scanf("%s", nome1);
    printf("digite a população da primeira carta: \n");
    scanf("%d", &popu1);
    printf("digite a area da primeira carta: \n");
    scanf("%f", &area1);
    printf("digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);
    printf("digite quantos pontos turisticos tem na primeira carta: \n");
    scanf("%d", &pontos1);

    //Calculo da dencidade populacional da primeira carta.
    densidade1 = (float)(popu1/area1);

    //calculo do PIB per capita da primeira carta
    percapita1 = (float)(pib1/popu1);

    //leitura da segunda carta.
    printf("----------------------------------------------------------------------------\n");
    printf("digite o estado da segunda carta: \n");
    scanf(" %c", &estado2);
    printf("digite o código da segunda carta: \n");
    scanf("%s", codigo2);
    printf("digite a cidade da segunda carta: \n");
    scanf("%s", nome2);
    printf("digite a população da segunda carta: \n");
    scanf("%d", &popu2);
    printf("digite a area da segunda carta: \n");
    scanf("%f", &area2);
    printf("digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);
    printf("digite quantos pontos turisticos tem na segunda carta: \n");
    scanf("%d", &pontos2);

    //calculo da densidade populacional da primeira carta
    densidade2 = (float)(popu2/area2);

    //calculo do PIB per capita da primeira carta
    percapita2 = (float)(pib2/popu2);

    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("      POPULAÇÃO: \n");
    printf("carta 1 %s: %d\n", nome1, popu1);
    printf("carta 2 %s: %d\n", nome2, popu2);

    //comparação das cartas para população.
    if (popu1 > popu2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (popu1 < popu2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!\n");
        }
    }
    
    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("           ÁREA:\n");
    printf("carta 1 %s: %.2f km²\n", nome1, area1);
    printf("carta 2 %s: %.2f km²\n", nome2, area2);

    //comparação das cartas para área.
    if (area1 > area2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (area1 < area2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!");
        }
    } 
    
    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("          PIB:\n");
    printf("carta 1 %s: %.2f R$\n", nome1, pib1);
    printf("carta 2 %s: %.2f R$\n", nome2, pib2);

    //comparação das cartas para PIB.
    if (pib1 > pib2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (pib1 < pib2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!");
        }
    } 

    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("  PONTOS TURISTICOS:\n");
    printf("carta 1 %s: %d \n", nome1, pontos1);
    printf("carta 2 %s: %d \n", nome2, pontos2);

    //comparação das cartas para área.
    if (pontos1 > pontos2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (pontos1 < pontos2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!");
        }
    }

    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("DENSIDADE POPULACIONAL:\n");
    printf("carta 1 %s: %.2f \n", nome1, densidade1);
    printf("carta 2 %s: %.2f \n", nome2, densidade2);

    //comparação das cartas para área.
    if (densidade1 < densidade2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (densidade1 > densidade2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!");
        }
    }

    //cabeçalho console.
    printf("----------------------------------------------------------------------------\n");
    printf("  PIB PER CAPITA:\n");
    printf("carta 1 %s: %.2f \n", nome1, percapita1);
    printf("carta 2 %s: %.2f \n", nome2, percapita2);

    //comparação das cartas para área.
    if (percapita1 > percapita2){
        printf("Carta 1 (%s) VENCEU!\n",nome1);
    }else{
        if (percapita1 < percapita2){
            printf("Carta 2 (%s) VENCEU!\n",nome2);
        }else{
             printf("EMPATE!");
        }
    }
    return 0;
}
