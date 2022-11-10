#include <stdio.h>
#include <stdlib.h>
main() {
/*
	int * ponteiro;
	int valor = 10;
	ponteiro = &valor;
	printf("endereco = %x ", &valor);
	printf("\n endereco: %x", ponteiro);
	printf("\n endereco: %d", *ponteiro);
*/
	int linha, coluna;
	int **mat;
	printf("\n Matriz de ponteiros na memoria");
	printf("\n Quantidade de linhas: ");
	scanf(" %d", &linha);
	printf("\n Quantidade de colunas: ");
	scanf(" %d", &coluna);
	// alocar na memoria espaço dinamicamente
	mat = (int**) malloc(sizeof(int*)*linha);
	
	// alocar na memoria espaço para coluna
	for(int indice = 0; indice < linha; indice ++)
	{
		mat[indice] = (int*)malloc(sizeof(int*)*coluna);
	}
	
	// preencher elementos na matriz
	for (int indiceLinha = 0; indiceLinha<coluna;indiceLinha++)
	{
		for(int indiceColuna = 0; indiceColuna<linha; indiceColuna++){
			printf("Matriz [%d][%d]= ", indiceLinha, indiceColuna);
			scanf("%d", &mat[indiceLinha][indiceLinha]);
		}
	}
		// exibir elementos na matriz
	for (int indiceLinha = 0; indiceLinha<coluna;indiceLinha++)
	{
		for(int indiceColuna = 0; indiceColuna<linha; indiceColuna++)
		{
			printf("\n Matriz [%d][%d]= %d", indiceLinha, indiceColuna, mat[indiceLinha][indiceColuna]);
		}
	
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char** argv) {
	return 0;
}
*/

