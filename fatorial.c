#include <stdio.h>
#include <stdlib.h>


void limpatela(){
        printf("\e[1;1H\e[2J");
} //função para limpar o terminal do gnu-linux em C;


int main(){ 
unsigned long long input, fat=1;
char w; 
do{
        fat=1;
        limpatela(); //limpa o terminal;
        printf("Insira um inteiro entre (1 < x < 20):  ");
        scanf("%ld", &input);

        for(int i=1;i<=input;i++){ //loop
                fat=fat*i;
        }

        printf("!%llu = %llu\n", input,fat);
        printf("Tentar novamente? 'S' ou 'N': ");
        scanf(" %c", &w);
}
while(w == 's' || w == 'S'); //repetir (do) caso o usuário insira S
return 0;
} //pega um inteiro e utiliza de um loop for para encontrar o fatorial.
