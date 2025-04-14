#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

 //BASE DA CARTA 1
int carta1;
char estado1 [40];
char codigo1 [20];
char cidade1 [10];
int populacao1;
float area1;
float PIB1;
int Turistico1;
float densidade1;
float PIBpercapta1;

//BASE DA CARTA 2
int carta2;
char estado2 [40];
char codigo2 [20];
char cidade2 [10];
int populacao2;
float area2;
float PIB2;
int Turistico2;
float densidade2;
float PIBpercapta2;


//PESQUISA DA CARTA A
printf ("> REQUISITOS CARTA: 01\n");
printf("Digite o nome do estado:");
scanf("%s", &estado1);

printf("Digite o codigo:");
scanf ("%s", &codigo1);

printf("Digite o nome da Cidade:");
scanf ("%s", &cidade1);

printf("Digite o numero da população:");
scanf("%d", &populacao1);

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &area1);

printf("Digite o PIB:");
scanf ("%f", &PIB1);

printf("Digite o numero de ponto turísticos:");
scanf("%d", &Turistico1);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N1
printf("***Cartas do Super Trunfo***\n");

printf ("> DESCRICÃO CARTA: 01\n");
printf("Carta: %d \n", carta1);
printf("Estado: %s \n", estado1);
printf("Código: %c \n",codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Àrea: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais \n", PIB1);
printf("Número de Pontos Turísticos: %d \n", Turistico1);
printf("\n");

densidade1 = (populacao1 / area1);
PIBpercapta1 = (PIB1/populacao1);

printf("A Densisdade Populacional da carta 1 é: %.2f\n", densidade1);
printf("O PIB per Capita da carta 1 é: %.2f\n", PIBpercapta1); 

printf("\n");

//BASE DE CALCULO DENSIDADE P. E PIB PER CAPITA
float signedNumber1 = densidade1;
float unsignedNumber1 = PIBpercapta1;

printf("\n");
printf("O valor total entre Densidade Populacional e o PIB per Capita é: %.2f\n", signedNumber1 + unsignedNumber1);
printf("\n");


//PESQUISA DA CARTA 2
printf ("> REQUISITOS CARTA: 02\n");
printf("Digite o nome do estado:");
scanf("%s", &estado2);

printf("Digite o codigo:");
scanf ("%s", &codigo2);

printf("Digite o nome da Cidade:");
scanf ("%s", &cidade2);

printf("Digite o numero da população:");
scanf("%d", &populacao2);

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &area2);

printf("Digite o PIB:");
scanf ("%f", &PIB2);

printf("Digite o numero de ponto turísticos:");
scanf("%d", &Turistico2);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N2

printf ("> DESCRICÃO CARTA: 02\n");
printf("Carta: %d \n", carta2);
printf("Estado: %s \n", estado2);
printf("Código: %c \n",codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Àrea: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais \n", PIB2);
printf("Número de Pontos Turísticos: %d \n", Turistico2);
printf("\n");

densidade2 = (populacao2 / area2);
PIBpercapta2 = (PIB2/populacao2);

printf("A Densisdade Populacional da carta 2 é: %.2f\n", densidade2);
printf("O PIB per Capita da carta 2 é: %.2f\n", PIBpercapta2); 


//BASE DE CALCULO DENSIDADE P. E PIB PER CAPITA
float signedNumber2 = densidade2;
float unsignedNumber2 = PIBpercapta2;

printf("\n");
printf("O valor total entre Densidade Populacional e o PIB per Capita é: %.2f\n", signedNumber2 + unsignedNumber2);
printf("\n");



printf("COMPARAÇÃO DAS CARTAS 1 E 2:\n");

if (populacao1>populacao2) {
 printf("A cidade 1 tem maior população.\n"); }
else
{ printf("A cidade 2 tem maior população.\n");}

if (area1>area2) {
printf ("A Cidade 1 tem maior àrea em Km².\n"); }

else 
{ printf("A cidade 2 tem maior àrea em Km².\n"); }

if (PIB1 > PIB2) {
printf ("A Cidade 1 tem maior PIB.\n"); }

else
{ printf("A Cidade 2 tem maior PIB.\n");}

if (Turistico1 > Turistico2) {
printf ("A Cidade 1 tem maior numero de ponto turístico.\n"); }
    
else
{ printf("A Cidade 2 tem maior numero de ponto turístico.\n");}

if (densidade1 < densidade2)
{ printf ("A Cidade 1 tem à menor Desidade Populacional.\n"); }
else
{ ("A Cidade 2 tem à maior Desidade Populacional.\n"); }

printf("\n");

printf ("CIDADE VENCEDORA!\n");

int cidadeVencedora;

if (populacao1 > populacao2){
    printf("A Cidade 1 População: Venceu!\n", cidadeVencedora); }
else
{ printf ("A Cidade 2 População: Venceu!\n", cidadeVencedora);}

if (area1 > area2){
    printf("A Cidade 1 Área: Venceu!\n", cidadeVencedora); }
else
{ printf ("A Cidade 2 Área: Venceu!\n", cidadeVencedora);}

if (PIB1 > PIB2){
    printf("A Cidade 1 PIB: Venceu!\n", cidadeVencedora); }
else
{ printf ("A Cidade 2 PIB: Venceu!\n", cidadeVencedora);}

if (Turistico1 > Turistico2){
    printf("A Cidade 1 N° de ponto turísticos: Venceu!\n", cidadeVencedora); }
else
{ printf ("A Cidade 2 Venceu!\n", cidadeVencedora);}

if (densidade1 < densidade2)
{ printf ("A cidade 1 tem a menor Densidade: Venceu!\n", cidadeVencedora); }
else
{ printf ("A cidade 2 tem a menor Densidade: Venceu!\n", cidadeVencedora);}

printf("\n");

// MENU INTERATIVO
int opcao;

printf("*** MENU DE COMPARAÇÃO ***\n");
printf("Escolha um atributo para comprar as cartas:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("7. Sair\n");
printf("Digite sua opção: \n");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("Comparando População:\n");
        if (populacao1 > populacao2) {
            printf("A cidade 1 tem maior população.\n");
        } else if (populacao1 < populacao2) {
            printf("A cidade 2 tem maior população.\n");
        } else {
            printf("Empate! As cidades têm a mesma população.\n");
        }
        break;

    case 2:
        printf("Comparando Área:\n");
        if (area1 > area2) {
            printf("A cidade 1 tem maior área.\n");
        } else if (area1 < area2) {
            printf("A cidade 2 tem maior área.\n");
        } else {
            printf("Empate! As cidades têm a mesma área.\n");
        }
        break;

    case 3:
        printf("Comparando PIB:\n");
        if (PIB1 > PIB2) {
            printf("A cidade 1 tem maior PIB.\n");
        } else if (PIB1 < PIB2) {
            printf("A cidade 2 tem maior PIB.\n");
        } else {
            printf("Empate! As cidades têm o mesmo PIB.\n");
        }
        break;

    case 4:
        printf("Comparando Número de Pontos Turísticos:\n");
        if (Turistico1 > Turistico2) {
            printf("A cidade 1 tem mais pontos turísticos.\n");
        } else if (Turistico1 < Turistico2) {
            printf("A cidade 2 tem mais pontos turísticos.\n");
        } else {
            printf("Empate! As cidades têm o mesmo número de pontos turísticos.\n");
        }
        break;

    case 5:
        printf("Comparando Densidade Populacional:\n");
        if (densidade1 < densidade2) {
            printf("A cidade 1 tem menor densidade populacional.\n");
        } else if (densidade1 > densidade2) {
            printf("A cidade 2 tem menor densidade populacional.\n");
        } else {
            printf("Empate! As cidades têm a mesma densidade populacional.\n");
        }
        break;

    case 6:
        printf("Comparando PIB per Capita:\n");
        if (PIBpercapta1 > PIBpercapta2) {
            printf("A cidade 1 tem maior PIB per capita.\n");
        } else if (PIBpercapta1 < PIBpercapta2) {
            printf("A cidade 2 tem maior PIB per capita.\n");
        } else {
            printf("Empate! As cidades têm o mesmo PIB per capita.\n");
        }
        break;

    case 7:
        printf("Saindo do menu...\n");
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
}
printf("Fim do jogo! Obrigado por jogar.\n");

printf("\n");

int numeroJOgador, numeroComputador, resultado;
char tipodeComparacao;

// Gerar número aleatório
srand(time(0)); //iniador e numero aleatorios 
numeroComputador = rand() % 100 + 1; //Numero entre 1 e 100

// Inicio do jogo
printf ("Bem-Vindo ao Jogo Maior, Menor ou Igual!\n");
printf ("Você deve escolher um numero e o tipo de comparação.\n");
printf("P. População\n");
printf("A. Área\n");
printf("B. PIB\n");
printf("T. Número de Pontos Turísticos\n");
printf("D. Densidade Populacional\n");

printf("Escolha a comparação: ");
scanf("%c", &tipodeComparacao);

printf("\n");

printf("Digite seu numero (entre 1 e 100): ");
scanf ("%d", &numeroJOgador);

printf("\n");
// Exibir numero do computador
printf ("O número do computatdor é: %d\n" , &numeroComputador);

switch (tipodeComparacao)
{
case 'P':
case 'p':
printf ("Você escolheu a opção maior!\n");
 resultado = numeroJOgador > numeroComputador ? : 1 ; 0;
    break;

case 'A':
case 'a':
    printf ("Você escolheu a opção maior!\n");
     resultado = numeroJOgador > numeroComputador ? : 1 ; 0;
        break;

case 'B':
case 'b':
printf ("Você escolheu a opção igual!\n");
resultado = numeroJOgador  == numeroComputador ? : 1 ; 0;
    break;

case 'T':
case 't':
    printf ("Você escolheu a opção maior!\n");
     resultado = numeroJOgador > numeroComputador ? : 1 ; 0;
        break;

case 'D':
case 'd':
printf ("Você escolheu a opção Menor!\n");
resultado = numeroJOgador < numeroComputador ? : 1 ; 0;
    break;

default:
printf("Opção de jogo inválida!");

    break;
}
printf ("O número do computatdor é: %d e o do jogador é: %d\n", &numeroComputador, numeroJOgador);

if (resultado == 1)
{
   printf ("Parabéns, Você venceu!\n");
}else
{
    printf ("Infelizmente Você perdeu!\n");}


printf("Fim do jogo! Obrigado por jogar.\n");

return 0;
}
