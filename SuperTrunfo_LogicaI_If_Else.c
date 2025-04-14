#include <stdio.h>

int main(){

     //Declaração de Variáveis: Cartas 1 e 2
     int turisticos1, turisticos2;
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

     //Comparação das Cartas - Apenas um Atributo (População) - Usando Lógica If-Else

     printf("Comparação das Cartas (Atributo: População):\n");
     printf("Carta 1 - %s: %lu Habitantes\n", cidade1, habitantes1);
     printf("Carta 2 - %s: %lu Habitantes\n", cidade2, habitantes2);

     if (habitantes1 > habitantes2){
      //Se resultado for verdadeiro, Imprime que a Carta 1 Vence
        printf("Resultado: Carta 1 - %s Venceu!\n", cidade1);
     } else{
      //Se resultado for falso, Imprime que a Carta 2 Vence
        printf("Resultado: Carta 2 - %s Venceu!\n", cidade2);
    }
     
     
  return 0;
}