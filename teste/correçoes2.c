#include <stdio.h>

int main() {

 // Abaixo printf para definir qual carta está sendo cadastrada - Nivel Novato
  printf("*** CARTA B01 ***\n");
   

  // Abaixo definição de variáveis para cada atributo da carta - Nivel Novato
  char Estado[1] = "B";
  char CodigodaCarta[03] = "B01";
  char Cidade[20] = "Fortaleza";
  int Populacao = 2428678;
  float Area = 312.3;
  float PIB = 74.4;
  int PontosTuristicos = 17;
  //Inserindo novas variáveis - Nivel Aventureiro
  float DensidadePopulacional = Populacao / Area;
  float PibPerCapta = Populacao / PIB;

  // Abaixo solicitação de entrada de dados para cada atributo da carta - Nivel Novato
  printf("Digite o Estado: ");
  scanf("%s", Estado);
  printf("Digite o Codigo da Carta: ");
  scanf("%s", CodigodaCarta);
  printf("Digite o Nome da cidade: ");
  scanf("%s", Cidade);
  printf("Digite a Populacao: ");
  scanf("%d", &Populacao);
  printf("Digite a Area: ");
  scanf("%f", &Area);
  printf("Digite o PIB: ");
  scanf("%f", &PIB);
  printf("Digite o Numero de Pontos Turisticos:  \n");
  scanf("%d", &PontosTuristicos);

  // Abaixo exibição dos dados da carta - Nivel Novato
  printf("Estado: %s\n", Estado);
  printf("Codigo da Carta: %s\n", CodigodaCarta);
  printf("Nome da Cidade: %s\n", Cidade);
  printf("Populacao: %d\n", Populacao);
  printf("Area: %.2f\n", Area);
  printf("PIB: %.2f\n", PIB);
  printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);
  //inserindo novas funcionalidade de divisão e exibição - Nivel Aventureiro
  printf("A Densidade populaçional é: %.2f \n", DensidadePopulacional);
  printf("O Pib Per Capta é de: %.2f \n", PibPerCapta);


  
  return 0;
}
