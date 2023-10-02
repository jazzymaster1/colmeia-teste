#include <stdio.h> //biblioteca para input e output padrão em C.

int N, i, soma; //declaração das variáveis N, i, e da soma.


int main(){
        printf("\033[H\033[J");
        printf("+-----------------------------------------+\n");
        printf("|Até onde desejas somar os números pares: |\n");
        printf("+=========================================|\n");
        scanf("%lli", &N); //scan de um decimal base 10 para a memória N.

        for(i=2; i<=N; i+=2){ //define i como 2, checa se i é menor ou igual a N, roda a
                      //função, e adiciona 2 em i; (somente pares)
                soma+=i; //adiciona o inteiro na soma

}
        printf("\033[H\033[J");
        printf("Soma dos pares de 1 até %lli:",N);
        printf("\n======================= %lli\n\n\n",soma); //output da soma dos números pares
        return 0; //programa performou da forma que deveria.
}

