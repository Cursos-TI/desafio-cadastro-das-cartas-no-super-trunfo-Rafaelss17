#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char A1, A2, A3, A4 [20];
    char cidade1, cidade2, cidade3, cidade4[100];
    float PIB;
    float area;
    int pontos_turristicos;

// PRIMEIRA CIDADE

    printf("Codigo da primeira cidade:\n");
    scanf("%s", &A1);
    printf("Nome da primeira cidade:\n");
    scanf("%s",&cidade1);
    printf("Area da cidade:\n");
    scanf("%f", &area);
    printf("PIB da cidade:\n");
    scanf("%f", &PIB);
    printf("Quantidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos);
    
// SEGUNDA CIDADE


    printf("Codigo da segunda cidade:\n");
    scanf("%s", &A2);
    printf("Insira o nome da segunda cidade:\n");
    scanf("%s", &cidade2);
    printf("Infome a area da cidade:\n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:\n");
    scanf("%f", &PIB);
    printf("Informa a qauntidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos);

//TERCEIRA CIDADE 

    printf("Digite o codigo terceira cidade:\n");
    scanf("%s", &A3);
    printf("Insira o nome da terceira cidade:\n");
    scanf("%s", &cidade3);
    printf("Infome a area da cidade:\n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:\n");
    scanf("%f", &PIB);
    printf("Informa a qauntidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos);

    //QUARTA CIDADE

    printf("Digite o codigo quarta cidade:\n");
    scanf("%s", &A4);
    printf("Insira o nome da quarta cidade:\n");
    scanf("%s", &cidade4);    
    printf("Infome a area da cidade:\n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade:\n");
    scanf("%f", &PIB);
    printf("Informa a quantidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
