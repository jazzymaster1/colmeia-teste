#include <stdio.h>

void limpatela(){
printf("\e[1;1H\e[2J");
}

int main(){
        double arr[100000], r;
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

        for( int i = 0 ; i < quantos ; i++ ){
                scanf(" %lf", &arr[i]);
        }
        for( int i = 0 ; i < quantos ; i++ ){
                r+=arr[i];
        }
        r=r/quantos;

        printf("+----------------------------+\n");
        printf("| Aqui está sua média:       |\n");
        printf("+============================+\n");

        printf("%.2lf\n", r);
return 0;
}


