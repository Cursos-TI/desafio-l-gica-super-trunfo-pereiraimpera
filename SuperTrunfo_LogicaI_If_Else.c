#include <stdio.h>

int main(){

     //Declaração de Variáveis: Cartas 1 e 2
     int turisticos1, turisticos2, opcao;
     unsigned long int habitantes1, habitantes2; // unsigned long int para armazenar valores maiores ( somente numeros positivos )
     float area1 = 0.0, area2 = 0.0;
     float pib1 = 0.000, pib2 = 0.000;
     float pibpercapita1 = 0.0, pibpercapita2 = 0.0;
     float densidadepopulacao1 = 0.0, densidadepopulacao2 = 0.0;
     double superpoder1 = 0.000, superpoder2 = 0.0;
     char est1, est2;
     char codcarta1[4], codcarta2[4];
     char cidade1[20], cidade2[20];

     //Apresentação inicial
     printf("Bem Vindos ao Jogo Super-Trunfo\n");
     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Cadastrando Carta 1
     printf("Vamos Cadastrar a Primeira Carta!\n");
     printf("Super-Trunfo\n");
     printf("Tecle uma letra de A a H, para definir o Estado: \n");
     scanf(" %c", &est1); 
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta1); 
     printf("Digite o nome de uma Cidade para este Estado: \n");
     scanf("%s", cidade1); 
     printf("Digite a População da Cidade: \n");
     scanf("%lu", &habitantes1); 
     printf("Digite a área em km²: \n");
     scanf("%f", &area1); 
     printf("Digite o PIB da Cidade (Em Bilhões): \n");
     scanf("%f", &pib1); 
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos1); 

     printf("---------------------------------\n");

     //Cadastrando Carta 2
     printf("Vamos Cadastrar a Segunda Carta!\n");
     printf("Super-Trunfo\n");
     printf("Tecle uma letra de A a H, para definir o Estado: \n");
     scanf(" %c", &est2); 
     printf("Repita a letra com um número de 1 a 4: \n");
     scanf("%s", codcarta2); 
     printf("Digite o nome de uma Cidade para este Estado: \n");
     scanf("%s", cidade2); 
     printf("Digite a População da Cidade: \n");
     scanf("%lu", &habitantes2); 
     printf("Digite a área em km²: \n");
     scanf("%f", &area2); 
     printf("Digite o PIB da Cidade (Em Bilhões): \n");
     scanf("%f", &pib2); 
     printf("Digite a quantidade de Pontos Turísticos: \n");
     scanf("%d", &turisticos2); 

     //Espaçamento para exibição das Cartas
     printf("---------------------------------\n");
     printf("---------------------------------\n");

     //Calculo para Densidade Populacional e PIB per Capita (Carta 1)
     densidadepopulacao1 = (float)habitantes1 / area1;
     pibpercapita1 = (pib1 * 1000000000.0) / (float)habitantes1; //PIB sendo * 1000000000 para converter para reais
     
     //Calculo para SuperPoder (Carta 1)
     //Soma dos atributos habitantes, area, pib, turisticos, pibpercapita e (inversão da densidade populacional 1/densidadepopulacao)
     superpoder1 = (float)habitantes1 + area1 + (pib1*1000000000.0) + (float)turisticos1 + pibpercapita1 + (1.0 / densidadepopulacao1);

     //Exibindo Carta 1
     printf("Carta Nº 1\n");
     printf("Estado: %c\n", est1);
     printf("Código da Carta: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %lu\n", habitantes1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f Bilhões de Reais\n", pib1);
     printf("Pontos Turísticos: %d\n", turisticos1);
     printf("Densidade Populacional: %.2f Hab/km²\n", densidadepopulacao1);
     printf("PIB per Capita: %.2f Reais\n", pibpercapita1);
     printf("Super-Poder: %.2f\n", superpoder1);
     

     printf("---------------------------------\n"); // Espaçamento entre as Cartas

     //Calculo para Densidade Populacional e PIB per Capita (Carta 2)
     densidadepopulacao2= (float)habitantes2 / area2;
     pibpercapita2 = (pib2 * 1000000000.0) / (float)habitantes2; //PIB sendo * 1000000000 para converter para reais

     //Calculo para SuperPoder (Carta 2)
     //Soma dos atributos habitantes, area, pib, turisticos, pibpercapita e (inversão da densidade populacional 1/densidadepopulacao)
     superpoder2 = (float)habitantes2 + area2 + (pib2 * 1000000000.0) + (float)turisticos2 + pibpercapita2 + (1.0 / densidadepopulacao2);

     //Exibindo Carta 2
     printf("Carta Nº 2\n"); 
     printf("Estado: %c\n", est2);
     printf("Código da Carta: %s\n", codcarta2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %lu\n", habitantes2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f Bilhões de Reais\n", pib2);
     printf("Pontos Turísticos: %d\n", turisticos2);
     printf("Densidade Populacional: %.2f Hab/km²\n", densidadepopulacao2);
     printf("PIB per Capita: %.2f Reais\n", pibpercapita2);
     printf("Super-Poder: %.2f\n", superpoder2);
     

     printf("---------------------------------\n");

     //Comparação das Cartas 
     printf("Vamos Comparar as Cartas!\n");
     printf("1. População\n");
     printf("2. Área\n");
     printf("3. PIB\n");
     printf("4. Pontos Turísticos\n");
     printf("5. Densidade Populacional\n");
     printf("6. PIB per Capita\n");
     printf("7. Super-Poder\n");
     printf("Escolha uma Opção: ");
     scanf("%d", &opcao);

 switch (opcao) {

    //Comparando População  
    case 1:
        printf("*** Você Escolheu População ***\n");
        printf("Carta 1 : %s: %lu Habitantes\n", cidade1, habitantes1);
        printf("Carta 2 : %s: %lu Habitantes\n", cidade2, habitantes2);
        if (habitantes1 == habitantes2) {
            printf("### Houve um Empate! ###\n");
        } else if (habitantes1 > habitantes2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando Área
    case 2:
        printf("*** Você Escolheu Área ***\n");
        printf("Carta 1 : %s: %.2f km²\n", cidade1, area1);
        printf("Carta 2 : %s: %.2f km²\n", cidade2, area2);
        if (area1 == area2) {
            printf("### Houve um Empate! ###\n");
        } else if (area1 > area2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando PIB
    case 3:
        printf("*** Você Escolheu PIB ***\n");
        printf("Carta 1 : %s: %.2f Bilhões de Reais\n", cidade1, pib1);
        printf("Carta 2 : %s: %.2f Bilhões de Reais\n", cidade2, pib2);
        if (pib1 == pib2) {
            printf("### Houve um Empate! ###\n");
        } else if (pib1 > pib2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando Pontos Turísticos
    case 4:
        printf("*** Você Escolheu Pontos Turísticos ***\n");
        printf("Carta 1 : %s: %d Pontos Turísticos\n", cidade1, turisticos1);
        printf("Carta 2 : %s: %d Pontos Turísticos\n", cidade2, turisticos2);
        if (turisticos1 == turisticos2) {
            printf("### Houve um Empate! ###\n");
        } else if (turisticos1 > turisticos2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando Densidade Populacional
    case 5:
        printf("*** Você Escolheu Densidade Populacional ***\n");
        printf("Carta 1 : %s: %.2f Habitantes/km²\n", cidade1, densidadepopulacao1);
        printf("Carta 2 : %s: %.2f Habitantes/km²\n", cidade2, densidadepopulacao2);
        if (densidadepopulacao1 == densidadepopulacao2) {
            printf("### Houve um Empate! ###\n");
        } else if (densidadepopulacao1 < densidadepopulacao2) {
            printf("### Carta 1 Venceu! ###\n");
        } else { 
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando PIB per Capita
    case 6:
        printf("*** Você Escolheu PIB per Capita ***\n");
        printf("Carta 1 : %s: %.2f Bilhões de Reais\n", cidade1, pibpercapita1);
        printf("Carta 2 : %s: %.2f Bilhões de Reais\n", cidade2, pibpercapita2);
        if (pibpercapita1 == pibpercapita2) {
            printf("### Houve um Empate! ###\n");
        } else if (pibpercapita1 > pibpercapita2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    //Comparando Super-Poder
    case 7:
        printf("*** Você Escolheu Super-Poder ***\n");
        printf("Carta 1 : %s: %.2f\n", cidade1, superpoder1);
        printf("Carta 2 : %s: %.2f\n", cidade2, superpoder2);
        if (superpoder1 == superpoder2) {
            printf("### Houve um Empate! ###\n");
        } else if (superpoder1 > superpoder2) {
            printf("### Carta 1 Venceu! ###\n");
        } else {
            printf("### Carta 2 Venceu! ###\n");
        }
        break;

    default:
        printf("Opção Inválida!\n");
        printf("Tente Novamente!\n");
        break;
}

    return 0;
   
}