#include <stdio.h>

void limpatela(){
printf("\e[1;1H\e[2J");}


int main(){
	limpatela();
	int quantia, qnt, bolha, var; // quantia é quantos numeros tera a lista
																																// qnt é uma variavel temporaria pra processar for
																																// bolha é a variavel da operacao sorting
																																// var é a variavel que guarda o valor
	int arr[1000000];

	printf("+-----------------------------------+\n");
	printf("|Quantos Inteiros Deseja Organizar: |\n");
	printf("|===================================|\n");
	scanf("%d", &quantia);

	printf("+-----------------------------------+\n");
	printf("|Agora por favor, insira os inteiros|\n");
	printf("|===================================|\n");


	for( qnt = 0 ; qnt < quantia ; qnt++ ){
		scanf("%d", &arr[qnt]);
	}
	for( qnt = 0 ; qnt < quantia-1 ; qnt++ ){
	for( bolha = 0; bolha < quantia - qnt - 1; bolha++ ){
	if( arr[bolha] > arr[bolha+1]){ // anterior eh maior que posterior
		var = arr[bolha]; // guarda o valor
		arr[bolha] = arr[bolha+1]; // coloca o anterior no lugar do posterior 
		arr[bolha+1] = var; // coloca o posterior no lugar do anterior
	}}}

	printf("+-----------------------------------+\n");
	printf("|Aqui está sua sequência numérica:  |\n");
	printf("|===================================|\n");
	printf("|{");

	for( qnt = 0 ; qnt < quantia ; qnt++ ){
	printf("%d ", arr[qnt]);
	}
	printf("}|\n");
	return 0;
}











