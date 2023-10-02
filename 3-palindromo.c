#include <stdio.h>
#include <string.h>

void limpatela(){           // função para limpar a tela :), dessa vez em
    printf("\033[H\033[J"); // qualquer dispositivo, apenas para demonstrar 
} 

void palindromo(char palavra[]){ //função palíndromo ;).

        int esquerda = 0;
        int direita = strlen(palavra) - 2;
        while(direita>esquerda){
        if(palavra[esquerda++]!=palavra[direita--]){
                printf("+--------------------+\n");
                printf("|NÃO é um palíndromo |\n");
                printf("+____________________+\n");
                return ;
        }
        }
                printf("+--------------------+\n");
                printf("|È um palíndromo     |\n");
                printf("+____________________+\n");
                return;
}

int main(){ //função operacional

        limpatela(); // chamando funçao da tela

        printf("+--------------------+\n");
        printf("|Digite uma palavra  |\n");
        printf("|apenas com letras   |\n");
        printf("|minusculas:         |\n");
        printf("+____________________+\n");

        char palavra[50]; // a maior palavra na lingua portuguesa tem 46 letras
        char z;
        // ja o maior palindromo, 11 apenas.

        /* scanf("%s", palavra); */
        do{
        if( z == 's' || z == 'S'){
        limpatela();
        printf("+--------------------+\n");
        printf("|Digite uma palavra  |\n");
        printf("|apenas com letras   |\n");
        printf("|minusculas:         |\n");
        printf("+____________________+\n");
        }

        fgets(palavra, 50, stdin); //fgets(string, tamanho, stream)
        palindromo(palavra);
        printf("\nTestar novamente: ( S ) ( N ): ");
        z = getchar(); // input do S ou N
        getchar();
        }while( z == 'S' || z == 's' ); 

return 0;

}