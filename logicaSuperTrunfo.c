#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){


int escolhaCarta;
srand(time(0));


char estado1[50], estado2[50];
int codigo_da_carta1, codigo_da_carta2;
char nome_da_cidade1[50], nome_da_cidade2[50];
int populacao1, populacao2;
float area_km2_1, area_km2_2;
float pib1, pib2;
int pontos_turisticos1, pontos_turisticos2;

// Entrada de dados para Carta 1

printf("\n\nCARTA 1\n\n");


printf("Estado 1: \n");
scanf(" %[^\n]", &estado1);

printf("Digite o Código da Carta: \n");
scanf("%d", &codigo_da_carta1);

getchar();

printf("Nome da cidade: \n");
scanf(" %[^\n]", nome_da_cidade1);

printf("População: \n");
scanf("%d", &populacao1);

printf("Àrea: \n");
scanf("%f", &area_km2_1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Números de pontos Turísticos: \n");
scanf("%d", &pontos_turisticos1);

// Entrada de dados para a Carta 2

printf("\n\nCARTA 2\n\n");


printf("Estado 2: \n");
scanf(" %[^\n]", estado2);

printf("Digite o Código da Carta: \n");
scanf("%d", &codigo_da_carta2);

getchar();

printf("Nome da cidade: \n");
scanf(" %[^\n]", nome_da_cidade2);

printf("População: \n");
scanf("%d", &populacao2);

printf("Àrea: \n");
scanf("%f", &area_km2_2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Números de pontos Turísticos: \n");
scanf("%d", &pontos_turisticos2);


// O Jogador escolhe a carta antes de saber os resultados


printf("\nEscolha sua carta (1 a 2): \n");
scanf("%d", &escolhaCarta);

float soma_carta1 = populacao1 + area_km2_1 + pib1 + pontos_turisticos1;
float soma_carta2 = populacao2 + area_km2_2 + pib2 + pontos_turisticos2;


// Exibição das somas após a escolha


printf("\nSoma totsl da Carta 1: %.2f\n", soma_carta1);
printf("\nSoma total da carta 2: %.2f\n", soma_carta2);


// Determine a carta vencendora


int carta_vencendora;
if (soma_carta1 > soma_carta2)
{
    printf("\nCarta 1 venceu este jogo! \n");
    carta_vencendora = 1;
}
else if (soma_carta1 < soma_carta2)
{
    printf("\nCarta 2 venceu este jogo! \n");
}

else

{

printf("\nEmpate!\n");
carta_vencendora = 0;

}

// Usando switch para verificar se o jogador acertou
switch (escolhaCarta)

{


case 1:

    if (carta_vencendora ==1)
    printf("**** Parabéns! Você escolheu a Carta vencedora! **** \n");
else if (carta_vencendora == 2)
    printf("**** Que pena! Sua Carta perdeu! ****\n");
else
    printf("**** Jogo Empatou! **** \n");
    break;


case 2:

    if (carta_vencendora == 2)
    printf("**** Parabéns! Você escolheu a Carta vencedora! **** \n");
else if (carta_vencendora == 1)
    printf("**** Que pena! Sua Carta perdeu! ****\n");
else
    printf("**** Jogo Empatou! **** \n");
break;

default:

printf("Opção invalida! Escolha 1 ou 2. \n");

    break;
}

return 0;

}



    