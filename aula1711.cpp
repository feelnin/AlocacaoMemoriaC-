#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {

int opcao, LINHAS, COLUNAS;

setlocale(LC_ALL, "Portuguese");

printf("** Matriz de ponteiros na memória **\n\n");

printf("Quantidade de linhas e colunas: \n");
scanf("%d %d", &LINHAS, &COLUNAS);
printf("\n");

printf("Escolha entre as opções abaixo o tipo de variável que seja utilizar para compôr a matriz: \n");
printf("(1): Int \n");
printf("(2): Float \n");
printf("(3): Char \n");
scanf("%d", &opcao);

switch(opcao) {

case 1:

int **matriz;

matriz = (int**)malloc(LINHAS * sizeof(int*));

for(int i = 0; i < LINHAS; i++) {

matriz[i] = (int*)malloc(COLUNAS * sizeof(int));

}

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("Matriz[%d][%d] = ", i, j);
scanf("%d", &matriz[i][j]);

}

}

printf("\n");
printf("Matriz[%d][%d]\n", LINHAS, COLUNAS);
printf("\n");

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("%d\t", matriz[i][j]);

}

printf("\n");

}

// Liberando o espaço de memória

for(int i = 0; i < LINHAS; i++) {

free(matriz[i]); // Libera cada linha

}

free(matriz); // Libera o vetor de ponteiros

break;

case 2:

float **matrizFloat;

matrizFloat = (float**)malloc(LINHAS * sizeof(float*));

for(int i = 0; i < LINHAS; i++) {

matrizFloat[i] = (float*)malloc(COLUNAS * sizeof(float));

}

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("matrizFloat[%d][%d] = ", i, j);
scanf("%f", &matrizFloat[i][j]);

}

}

printf("\n");
printf("matrizFloat[%d][%d]\n", LINHAS, COLUNAS);
printf("\n");

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("%f\t", matrizFloat[i][j]);

}

printf("\n");

}

// Liberando o espaço de memória

for(int i = 0; i < LINHAS; i++) {

free(matrizFloat[i]); // Libera cada linha

}

free(matrizFloat); // Libera o vetor de ponteiros

break;

case 3:

char **matrizChar;

matrizChar = (char**)malloc(LINHAS * sizeof(char*));

printf("Quantidade de linhas e colunas: \n");
scanf("%d %d", &LINHAS, &COLUNAS);
printf("\n");

for(int i = 0; i < LINHAS; i++) {

matrizChar[i] = (char*)malloc(COLUNAS * sizeof(char));
}

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("Matriz[%d][%d] = ", i, j);
scanf("%s", &matrizChar[i][j]);

}

}

printf("\n");
printf("matrizChar[%d][%d]\n", LINHAS, COLUNAS);
printf("\n");

for(int i = 0; i < LINHAS; i++) {

for(int j = 0; j < COLUNAS; j++) {

printf("%c", matrizChar[i][j]);

}

printf("\n");

}

// Liberando o espaço de memória

for(int i = 0; i < LINHAS; i++) {

free(matrizChar[i]); // Libera cada linha

}

free(matrizChar); // Libera o vetor de ponteiros

break;

}

return 0;
}

