#include <stdio.h>
#include <stdlib.h>


void limpatela(){ //função para limpar o terminal do gnu-linux em C;
        printf("\e[1;1H\e[2J");
} 


int main(){ // função principal
unsigned long long input, fat; // variáveis input e fat
char w; // char para desativar o loop do-while principal
do{
        fat=1; // para reiniciar o fat em 1 cada vez que o loop ocorrer
        limpatela(); //limpa o terminal;
        printf("Insira um inteiro entre (1 < x < 20):  ");
        scanf("%ld", &input); 

        for(int i=1;i<=input;i++){ // loop que multiplcica fat por ele mesmo vezes a quantidade de loops i 
                                   // até input
                fat=fat*i;
        }

        printf("!%llu = %llu\n", input,fat);
        printf("Tentar novamente? 'S' ou 'N': ");
        scanf(" %c", &w); 
}
while(w == 's' || w == 'S'); //repetir (do) caso o usuário insira S
return 0;
} //pega um inteiro e utiliza de um loop for para encontrar o fatorial.
