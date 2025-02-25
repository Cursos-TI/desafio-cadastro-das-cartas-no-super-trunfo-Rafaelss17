#include <stdio.h>



int main() {
    char carta1[20], carta2[20];
    char cidade1[100], cidade2[100];
    float pib1, pib2;
    float area1, area2;
    int pontos_turristicos1, pontos_turristicos2;


    printf("Insira a carta da primeira cidade:\n");
    scanf("%s", &carta1);
    printf("Insira o Nome da primeira cidade:\n");
    scanf("%s",&cidade1);
    printf("Insira a Area da cidade:\n");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Insira a Quantidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos1);

    printf("Insira a carta da segunda cidade:\n");
    scanf("%s", &carta2);
    printf("Insira o Nome da segunda cidade:\n");
    scanf("%s",&cidade2);
    printf("Insira a Area da cidade:\n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Insira a Quantidade de pontos turristicos:\n");
    scanf("%d", &pontos_turristicos2);   
    printf("- carta: %s\n - cidade: %s\n - area: %f\n - pib: %f\n - pontos_turristicos: %d\n",carta1,cidade1,area1,pib1,pontos_turristicos1);
    printf("- carta: %s\n - cidade: %s\n - area: %f\n - pib: %f\n - pontos_turristicos: %d\n",carta2,cidade2,area2,pib2,pontos_turristicos2);
 
    return 0;
}
