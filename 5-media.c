#include <stdio.h>

void limpatela(){ // funcao pra limpar a tela do console
printf("\e[1;1H\e[2J");
}

int main(){ // funcao principal
        double arr[100000], r; // arr: os números na operação // r: quantidade de números a serem calculados
        int quantos;

        limpatela();

        printf("+----------------------------+\n");
        printf("| Deseja calcular a média de |\n");
        printf("| quantos números ?          |\n");
        printf("+============================+\n");
        scanf("%d", &quantos);

        printf("+----------------------------+\n");
        printf("| Deseja calcular a média de |\n");
        printf("| quantos números ?          |\n");
        printf("+============================+\n");

        for( int i = 0 ; i < quantos ; i++ ){ // for para pegar o input do usuário
                scanf(" %lf", &arr[i]);
        }
        for( int i = 0 ; i < quantos ; i++ ){ // for para encontrar o resultado antes de dividir pela quantidade
                r+=arr[i];
        }
        r=r/quantos; // soma dos números, dividida pela quantidade, média;

        printf("+----------------------------+\n");
        printf("| Aqui está sua média:       |\n");
        printf("+============================+\n");

        printf("%.2lf\n", r); // printf da média, em formato de double;
return 0;
}


