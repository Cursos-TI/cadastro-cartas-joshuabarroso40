#include <stdio.h>
#include <string.h>

char estado[3];
/* NOTE QUE QUANDO QUEREMOS INSERIR UMA STRING COM MAIS DE UMA LETRA DEVEMOS 
DEFINIR NESSES COCHETES O TAMANHO*/
char num[10];        // código, ex: "A01"
char cidade[50];     // nome da cidade
int populacao;
float area;
float pib;
int pontosturisticos;

char estado1[3];
char num1[10];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

int main(){
    printf("dados da primeira carta\n");

    printf("insira a sigla do estado de A a H: ");
    scanf("%s", estado);

    printf("insira o codigo de 01 a 04: ");
    scanf("%s", num);

    printf("insira a cidade: ");
    scanf("%s", cidade);

    printf("insira a população: ");
    scanf("%d", &populacao);

    printf("insira a area: ");
    scanf("%f", &area);

    printf("insira o pib: ");
    scanf("%f", &pib);

    printf("insira a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    printf("\ndados da segunda carta\n");

    printf("insira a sigla do estado de A a H: ");
    scanf("%s", estado1);

    printf("insira o codigo de 01 a 04: ");
    scanf("%s", num1);

    printf("insira a cidade: ");
    scanf("%s", cidade1);

    printf("insira a população: ");
    scanf("%d", &populacao1);

    printf("insira a area: ");
    scanf("%f", &area1);

    printf("insira o pib: ");
    scanf("%f", &pib1);

    printf("insira a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // ---- Saída formatada ----
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", num);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", num1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    return 0;
}
