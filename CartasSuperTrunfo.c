#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char capturaCaractere; //Variável utilizada para capturar um caractere do buffer do teclado
    
    //Variáveis que armazenam os valores digitados da carta 1
    char estado;
    char codigoDaCarta[3];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;
    
    printf("Inserindo dados da Carta 1: \n");    
    printf("Estado: \n");
    scanf("%c", &estado);
    
    printf("Código: \n");
    scanf("%2s", codigoDaCarta);
    
    printf("Nome da Cidade: \n");
    scanf("%c", &capturaCaractere);
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin);
    
    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos);

    //Variáveis que armazenam os valores digitados da carta 2
    char estado2;
    char codigoDaCarta2[3];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    
    scanf("%c", &capturaCaractere); //Captura caractere do teclado
    int numeroDePontosTuristicos2;
    printf("Inserindo dados da Carta 2: \n");    
    printf("Estado: \n");
    scanf("%c", &estado2);
    
    printf("Código: \n");
    scanf("%2s", codigoDaCarta2);
    
    printf("Nome da Cidade: \n");
    scanf("%c", &capturaCaractere);
    fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
        
    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);
    
    //Imprime no terminal os valores da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigoDaCarta);
    printf("Nome da Cidade: %s", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", numeroDePontosTuristicos);

    //Imprime no terminal os valores da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigoDaCarta2);
    printf("Nome da Cidade: %s", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos2);

    return 0;
}
