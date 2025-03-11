#include <stdio.h> 


int main() { 
     
     char estado1[3], estado2[3];
     char codigo_da_carta1[50], codigo_da_carta2[50];
     char Cidade1[50], Cidade2[50];
     int Populacao1, Populacao2;
     float area_em_km1, area_em_km2;
     float PIB1, PIB2;
     int pontos_turisticos1, pontos_turisticos2;
     
     printf("Cadastro carta 1\n");

     printf("digite o estado1: \n");
     scanf("%s", &estado1);
    
     printf("digite o código da carta do estado1:\n");
     scanf("%s", &codigo_da_carta1);
    
     printf("digite a cidade do estado1:\n");
     scanf("%s", &Cidade1);
    
     printf("digite a populacão da cidade do estado1:\n");
     scanf("%d", &Populacao1);
    
     printf("digite a área em quilometros quadrados da cidade do estado1:\n");
     scanf("%f", &area_em_km1);
    
     printf("digite o PIB da cidade do estado1:\n");
     scanf("%f", &PIB1);
    
     printf("digite o numero de pontos turisticos da cidade doestado1:\n");
     scanf("%d", &pontos_turisticos1);


     printf("Cadastro carta 2\n");


     printf("digite o estado2:\n");
     scanf("%s", &estado2);
    
     printf("digite o código da carta do estado2:\n");
     scanf("%s", &codigo_da_carta2);
    
     printf("digite a cidade do estado2:\n");
     scanf("%s", &Cidade2);
    
     printf("digite a populacao da cidade do estado2:\n");
     scanf("%d", &Populacao2);
    
     printf("digite a área em quilometros quadrados da cidade do estado2:\n");
     scanf("%f", &area_em_km2);
    
     printf("digite o PIB da cidade do estado2:\n");
     scanf("%f", &PIB2);
    
     printf("digite o numero de pontos turisticos da cidade doestado2:\n");
     scanf("%d", &pontos_turisticos2);

     printf("         \n");
    
     printf("Estado: %s\n", estado1);
     printf("Codigo da carta: %s\n", codigo_da_carta1);
     printf("Cidade: %s\n", Cidade1);
     printf("Populacao: %d\n", Populacao1);
     printf("Área em quilometros quadrados: %.3f\n", area_em_km1);
     printf("PIB: %.3f\n", PIB1);
     printf("Pontos turísticos: %d\n", pontos_turisticos1);
    

     printf("       \n");
    
     printf("Estado: %s\n", estado2);
     printf("Código da carta: %s\n", codigo_da_carta2);
     printf("Cidade: %s\n", Cidade2);
     printf("Populacão: %d\n", Populacao2);
     printf("Área em quilometros quadrados: %.3f\n", area_em_km2);
     printf("PIB: %.3f\n", PIB2);
     printf("Pontos turísticos: %d\n", pontos_turisticos2);
    

  //  if(Populacao1 / area_em_km1 > Populacao2 / area_em_km2)
  //   {
  //   printf("estado A ganhou");
  //   } else {
  //    printf("estado B ganhou");
  //   }
     
    if(PIB1 / Populacao1 < PIB2 / Populacao2)
    {
     printf("estado B ganhou \n");
    } else { 
     printf("estado A ganhou");
    }
    
     
    
    
    
    
    
    
         }