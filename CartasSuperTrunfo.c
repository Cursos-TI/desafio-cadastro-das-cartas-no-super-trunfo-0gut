#include<stdio.h>

int main()
{
    char estado [59];
    char codigoCarta[50];
    char nomeCidade[50];
    int populacao;
    float areaKm;
    float PIB;
    int PontosTuristicos;
    
    
    
    printf("Digite o nome do estado: \n");
     scanf("%s", &estado);
    printf("Digite o código da carta: \n");
     scanf("%s", &codigoCarta);
    printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCidade);
    printf("Digite o tamanho da população: \n");
     scanf("%d", &populacao);
    printf("Digite a área em km: \n");
     scanf("%f", &areaKm);
    printf("Digite o PIB:\n");
     scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos: \n");
     scanf("%d" , &PontosTuristicos);
    
    printf("\nCARTA 1\n\n");
    printf("Estado:%s \nCodigo da carta:%s \nNome da cidade:%s \n", estado,codigoCarta,nomeCidade);
    printf("Tamanho da população: %d abitantes \nArea em km: %.2f Km \nPIB: R$ %.2f  reais \nNumero de pontos turísticos: %d \n", populacao,areaKm,PIB, PontosTuristicos);
    
    char estado2 [59];
    char codigoCarta2[50];
    char nomeCidade2[50];
    int populacao2;
    float areaKm2;
    float PIB2;
    int PontosTuristicos2;
    
    
    
    printf("\nDigite o nome do estado: \n");
     scanf("%s", &estado2);
    printf("Digite o código da carta: \n");
     scanf("%s", &codigoCarta2);
    printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCidade2);
    printf("Digite o tamanho da população: \n");
     scanf("%d", &populacao2);
    printf("Digite a área em km: \n");
     scanf("%f", &areaKm2);
    printf("Digite o PIB:\n");
     scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
     scanf("%d" , &PontosTuristicos2);
    
    printf("\nCARTA 2\n\n");
    printf("Estado:%s \nCodigo da carta:%s \nNome da cidade:%s \n", estado2,codigoCarta2,nomeCidade2);
    printf("Tamanho da população: %d abitantes \nArea em km: %.2f Km \nPIB: R$ %.2f reais  \nNumero de pontos turísticos: %d \n", populacao2,areaKm2,PIB2, PontosTuristicos2);
    
} 