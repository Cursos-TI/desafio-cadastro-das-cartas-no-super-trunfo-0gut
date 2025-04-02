#include<stdio.h>

int main()
{
    char estado [50]; 
    char codigoCarta[50];
    char nomeCidade [50]; 
    unsigned long int populacao;
    float areaKm;
    float PIB;
    int PontosTuristicos;
    float densidadePopulacional;
    float PIBperCapita; 
    float SuperPoder1, SuperPoder2;
    
    
    
    printf("Digite o estado da carta: \n");
     scanf("%s", &estado);
    printf("Digite o codigo da carta: \n");
     scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCidade);
    printf("Digite o tamanho da populacao: \n");
     scanf("%d", &populacao);
    printf("Digite a area em km: \n");
     scanf("%f", &areaKm);
    printf("Digite o PIB:\n");
     scanf("%f", &PIB);
    printf("Digite o numero de pontos turisticos: \n");
     scanf("%d" , &PontosTuristicos);
    
    PIBperCapita = (float) populacao / PIB;
    densidadePopulacional= (float) populacao / areaKm;  
    SuperPoder1 = (float) populacao + PIB + PontosTuristicos + PIBperCapita +  1 / densidadePopulacional;
    
    
    printf("\nCARTA 1\n\n");
    printf("Estado: %s \nCodigo da carta: %s \nNome da cidade: %s \n", estado,codigoCarta,nomeCidade);
    printf("Tamanho da populacao: %d abitantes \nArea em km: %.2f Km \nPIB: R$ %.2f Bilhoes de Reais \nNumero de pontos turisticos: %d \n", populacao,areaKm,PIB, PontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per capita;R$ %.2f Reais\n", PIBperCapita);
    printf("O super poder é: %.2f \n", SuperPoder1);
    
    
    printf("\nDigite o estado da carta: \n");
     scanf("%s", &estado);
    printf("Digite o codigo da carta: \n");
     scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCidade);
    printf("Digite o tamanho da populacao: \n");
     scanf("%d", &populacao);
    printf("Digite a area em km: \n");
     scanf("%f", &areaKm);
    printf("Digite o PIB:\n");
     scanf("%f", &PIB);
    printf("Digite o numero de pontos turisticos: \n");
     scanf("%d" , &PontosTuristicos);
    
    PIBperCapita = (float) populacao / PIB;
    densidadePopulacional= (float) populacao / areaKm;  
    SuperPoder2 = (float) populacao + PIB + PontosTuristicos + PIBperCapita +  1 / densidadePopulacional;
    
    
    printf("\nCARTA 2\n\n");
    printf("Estado: %s \nCodigo da carta: %s \nNome da cidade: %s \n", estado,codigoCarta,nomeCidade);
    printf("Tamanho da populacao: %d abitantes \nArea em km: %.2f Km \nPIB: R$ %.2f Bilhoes de Reais \nNumero de pontos turisticos: %d \n", populacao,areaKm,PIB, PontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per capita;R$ %.2f Reais\n", PIBperCapita);
    printf("O super poder é: %.2f \n", SuperPoder2);
   
   printf("\nCARTA 1 %d \n", SuperPoder1 > SuperPoder2);
   printf("\nCARTA 2 %d \n", SuperPoder1 < SuperPoder2);

}