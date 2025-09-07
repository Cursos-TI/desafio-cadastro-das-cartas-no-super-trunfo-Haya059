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

    //Gerando as novas variáveis da carta 1 solicitadas pelo desafio do nível Aventureiro
    //Mesmo populacao1 sendo um int, não há necessidade de converter em float explicita ou implicitamente porque ao fazer uma operação com um float, o valor se torna float
    //pib1 está sendo multimplicado por bilhão para o resultado aparecer em reais
    float densidadePopulacional1 = populacao1 / area1;
    float pibperCapita1 = (pib1 * 1000000000) / populacao1;
    float superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibperCapita1 + ( 1.0 / densidadePopulacional1);

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

    //Gerando as novas variáveis da carta 2 solicitadas pelo desafio do nível Aventureiro
    //Mesmo populacao2 sendo um int, não há necessidade de converter em float explicita ou implicitamente porque ao fazer uma operação com um float, o valor se torna float
    //pib2 está sendo multimplicado por bilhão para o resultado aparecer em reais
    float densidadePopulacional2 = populacao2 / area2;
    float pibperCapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibperCapita2 + ( 1.0 / densidadePopulacional2);
    
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
    //Exibição dos dados obtidos da carta 1 do nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados obtidos da carta 2
    printf("\nCarta 2: \n");
    printf("Código do Estado: %c\n", codigoEstado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    //Exibição dos dados obtidos da carta 2 do nível Aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    int comparacaoPopulacao = populacao1 > populacao2;
    int comparacaoArea = area1 > area2;
    int comparacaoPib = pib1 > pib2;
    int comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    int comparacaoPibPerCapita = pibperCapita1 > pibperCapita2;
    int comparacaoSuperPoder = superPoder1 > superPoder2;

    printf("Comparação de Cartas: \n");
    printf("(Se carta 1 vencer: 1. Se carta 2 vencer: 0)\n");
    printf("1 - População: %d\n - Carta 1 Venceu", comparacaoPopulacao);
    printf("2 - Área: %d\n - Carta 1 Venceu", comparacaoArea);
    printf("3 - PIB: %d\n - Carta 1 Venceu", comparacaoPib);
    printf("4 - Pontos Turísticos: %d\n - Carta 1 Venceu", comparacaoPontosTuristicos);
    printf("5 - Densidade Populacional: %d\n - Carta 2 Venceu", comparacaoDensidadePopulacional);
    printf("6 - PIB per Capita: %d\n - Carta 1 Venceu", comparacaoPibPerCapita);
    printf("7 - Super Poder: %d\n - Carta 1 Venceu", comparacaoSuperPoder);
    
    return 0;
}
