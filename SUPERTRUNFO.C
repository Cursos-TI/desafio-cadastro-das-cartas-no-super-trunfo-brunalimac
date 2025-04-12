#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    float area, populacao, pib;
    int numero_de_pontos_turisticos;
    char codigo[50], nome_da_cidade[50], codigo_da_carta[50], estado[20];

    printf("Carta 1\n");

    printf("Estado: \n");
    scanf(" %[^\n]", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);

    printf("População: \n");
    scanf("%f", &populacao);
    while ((getchar()) != '\n'); // Limpa entrada

    printf("Área: \n");
    scanf("%f", &area);
    printf("%.2f km²\n", area);

    printf("PIB (em trilhões): \n");
    scanf("%f", &pib);
    while ((getchar()) != '\n'); // Limpa entrada

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    // -----------------------------

    float area2, populacao2, pib2;
    int numero_de_pontos_turisticos2;
    char codigo2[50], nome_da_cidade2[50], codigo_da_carta2[50], estado2[50];

    printf("\nCarta 2\n");

    printf("Estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("População: \n");
    scanf("%f", &populacao2);
    while ((getchar()) != '\n');

    printf("Área: \n");
    scanf("%f", &area2);
    printf("%.2f km²\n", area2);

    printf("PIB (em trilhões): \n");
    scanf("%f", &pib2);
    while ((getchar()) != '\n');

    printf("Número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // --------- RESUMO ---------
    printf("\n=============================\n");
    printf("      RESUMO DAS CARTAS\n");
    printf("=============================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %.0f habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f trilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %.0f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f trilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
  if (area>area2){
        printf("carta 1 venceu\n");
        
        }
        else printf("carta 2 venceu\n");
        
    return 0;
}
