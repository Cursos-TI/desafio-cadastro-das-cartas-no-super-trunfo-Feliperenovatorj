#include <stdio.h>


int main(){
printf("Desafio Super Trunfo - Países\n");
printf("Cadastro das Cartas\n");

int codigo, turisticos;
char nome[20];
float populacao, area, PIB;

printf("escreva o codígo da cidade");
scanf("%d", &codigo);

printf("escreva o nome da cidade");
scanf("%s", &nome);

printf("escreva a população da cidade\n");
scanf("%f", &populacao);

printf("escreva a área da cidade\n");
scanf("%f", &area);

printf("escreva o PIB da cidade\n");
scanf("%f", &PIB);

printf("escreva a quantidades de ponto turísticos\n");
scanf("%d", &turisticos);

printf("Codígo da cidade: %d - Nome da Cidade: %s\n", codigo, nome);
printf("População: %f - Aréa da Cidade: %f - PIB: %f\n", populacao, area, PIB);
printf("Pontos Turísticos: %d", turisticos);




}