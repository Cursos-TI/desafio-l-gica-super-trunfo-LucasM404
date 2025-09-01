#include <stdio.h>

int main(){  
    //declaração de variaveis.
    char estado1, estado2, codigo1[5], codigo2[5], nome1[25], nome2[25];
    int popu1, popu2, pontos1, pontos2, opcao1, opcao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, resultado1, resultado2, soma1, soma2;

    
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

    //Soma dos atributos da primeira carta.
    soma1 = (float)(popu2 + area2 + pib2 + pontos2 + percapita2 + densidade1);

    //Soma dos atributos da segunda carta.
    soma2 = (float)(popu2 + area2 + pib2 + pontos2 + percapita2 + densidade2);

    //escolha do primeiro atributo a ser comparado.
    printf("----------------------------------------------------------------------------\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turisticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capita.\n");
    printf("Escolha o Primeiro Atributo a ser Comparado: ");
    scanf("%d", &opcao1);

    //escolha do segundo atributo a ser comparado.
    printf("----------------------------------------------------------------------------\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Pontos turisticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capita.\n");
    printf("Escolha o Primeiro Atributo a ser Comparado: ");
    scanf("%d", &opcao2);

    printf("----------------------------------------------------------------------------\n");
    
    //comparação conforme a escolha.
    switch (opcao1){
    case 1:
        printf("__Atributo 1: Populção__\n");
        printf("Carta 1: %s : %d\n", nome1, popu1);
        printf("Carta 2: %s : %d\n", nome2, popu2);
        resultado1 = popu1 > popu2 ? 1 : 0;
        break;
    case 2:
        printf("__Atributo 1: Área__\n");
        printf("Carta 1: %s : %.2f\n", nome1, area1);
        printf("Carta 2: %s : %.2f\n", nome2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("__Atributo 1: PIB__\n");
        printf("Carta 1: %s : %.2f\n", nome1, pib1);
        printf("Carta 2: %s : %.2f\n", nome2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("__Atributo 1: Área__\n");
        printf("Carta 1: %s : %d\n", nome1, pontos1);
        printf("Carta 2: %s : %d\n", nome2, pontos2);
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;
    case 5:
        printf("__Atributo 1: Densidade Populacional__\n");
        printf("Carta 1: %s : %.2f\n", nome1, densidade1);
        printf("Carta 2: %s : %.2f\n", nome2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("__Atributo 1: PIB Per Capita__\n");
        printf("Carta 1: %s : %.2f\n", nome1, percapita1);
        printf("Carta 2: %s : %.2f\n", nome2, percapita2);
        resultado1 = percapita1 > percapita2 ? 1 : 0;
        break;
    default:
        printf("Opção Invalida, Tente Novamente!\n");
        break;
    }
    
    if(opcao1 != opcao2){
    switch (opcao2){
    case 1:
        printf("__Atributo 2: População__\n");
        printf("Carta 1: %s : %.2f\n", nome1, popu1);
        printf("Carta 2: %s : %.2f\n", nome2, popu2);
        resultado2 = popu1 > popu2 ? 1 : 0;
        break;
    case 2:
        printf("__Atributo 2: Área__\n");
        printf("Carta 1: %s : %.2f\n", nome1, area1);
        printf("Carta 2: %s : %.2f\n", nome2, area2);
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("__Atributo 2: PIB__\n");
        printf("Carta 1: %s : %.2f\n", nome1, pib1);
        printf("Carta 2: %s : %.2f\n", nome2, pib2);
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("__Atributo 2: Pontos Turisticos__\n");
        printf("Carta 1: %s : %d\n", nome1, pontos1);
        printf("Carta 2: %s : %d\n", nome2, pontos2);
        resultado2 = pontos1 > pontos2 ? 1 : 0;
        break;
    case 5:
        printf("__Atributo 2: Densidade Populacional__\n");
        printf("Carta 1: %s : %.2f\n", nome1, densidade1);
        printf("Carta 2: %s : %.2f\n", nome2, densidade2);
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("__Atributo 2: PIB Per Capita__\n");
        printf("Carta 1: %s : %.2f\n", nome1, percapita1);
        printf("Carta 2: %s : %.2f\n", nome2, percapita2);
        resultado2 = percapita1 > percapita2 ? 1 : 0;
        break;
    default:
        printf("Opção Invalida, Tente Novamente!\n");
        break;
        }
    }else{
        printf ("Você escolheu dois atributos iguais, Tente Novamente!");
    }
    printf("----------------------------------------------------------------------------\n");

    if (resultado1 == 1 && resultado2 == 1){
    printf("***Carta 1 VENCEU!!***\n");
    }else if(resultado1 == 0 && resultado2 == 0){
    printf("***Carta 2 VENCEU!!***\n");
    }else{
    printf("***EMPATE!!***");
    }
}
