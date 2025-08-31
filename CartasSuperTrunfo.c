#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoEstado1, codigoEstado2;
    char codigoCarta1[4], codigoCarta2[4]; // Variável com array para armazenar todos os caracteres inseridos
    char nomeEstado1[50], nomeEstado2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Obtenção dos dados da primeira carta
    printf("Digite o código do estado da sua carta: ");
    scanf(" %c", &codigoEstado1);

    printf("Digite o código do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta1);

    // Opção para caso for utilizar o nome do estado com espaço, utilizando o fgets:
    // getchar(); // Limpa o '\n' do buffer após o scanf acima

    // printf("Digite o nome do seu estado: ");
    // fgets(nomeEstado1, 50, stdin);
    // nomeEstado1[strcspn(nomeEstado1, "\n")] = 0;

    printf("Digite o nome do estado, sem espaços: ");
    scanf("%s", nomeEstado1);

    printf("Digite o número da população do seu estado: ");
    scanf("%d", &populacao1);

    printf("Digite a área, em km², do seu estado: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB do seu estado: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Obtenção dos dados da segunda carta
    printf("\nDigite o código do estado da sua nova carta: ");
    scanf(" %c", &codigoEstado2);

    printf("Digite o código do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    // Opção para caso for utilizar o nome do estado com espaço, utilizando o fgets:
    // getchar(); // Limpa o '\n' do buffer após o scanf acima

    // printf("Digite o nome do seu estado: ");
    // fgets(nomeEstado2, 50, stdin);
    // nomeEstado2[strcspn(nomeEstado2, "\n")] = 0;

    printf("Digite o nome do estado, sem espaços: ");
    scanf("%s", nomeEstado2);

    printf("Digite o número da população do seu estado: ");
    scanf("%d", &populacao2);

    printf("Digite a área, em km², do seu estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do seu estado: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da sua cidade: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Exibição dos dados obtidos da carta 1
    printf("\nCarta 1: \n");
    printf("Código do Estado: %c\n", codigoEstado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome do Estado: %s\n", nomeEstado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados obtidos da carta 2
    printf("\nCarta 2: \n");
    printf("Código do Estado: %c\n", codigoEstado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;
}
