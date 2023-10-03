## Desafios e fontes.
Minha principal fonte quando tenho alguma dúvida de C, é checar o manual de referencia pra C GNU, que nunca falha em sua robustez. Fora este, quando algum erro insiste em ficar fora da minha linha de visão, sempre haverá alguém que encontrou o mesmo problema em algum post do reddit, algum pedido de ajuda no stackoverflow, ou até mesmo algum post nas profundezas de alguma "communiite" dedicada a programação no incrível Lemmy.

# 1 - Soma de Números Pare
Declaro as variáveis N, i, e soma; O algoritmo utiliza um loop a partir de 2, que repete enqunato N for maior ou igual ao i, que parte de 2 em 2, em cada repetição acrescentando i. No código, utilizei o regex \033[H\033[J, que serve para limpar a tela do terminal.

# 2 - Fatorial.
Outro regex printf("\e[1;1H\e[2J"); para limpar a tela do console. Dentro de uma função void, que foi chamada no main(). Utilizei um loop do tipo do-while para repetir a função conforme o usuário informar. No for(), multiplico a variavel fatorial pelo valor i ate input.

# 3 - Palíndromos.
Uso uma funcao void palindromo pra operacao, que por meio de um while junto a um if, detecto se a palavra dada eh um palindromo, defino a letra mais a direita da palavra como strlen(palavra) - 2, e uso o while para checar paralelamente os dois lados, e utilizando um if, detecto quando algum caracter espelhado eh diferente, mandando o output NAO e um palindromo, se nada acontecer, eh palindromo e o output, Eh um palindromo.

# 4 - Algoritmo de Bubble Sort.
Utilizo o algoritmo bubble sort para organizar os números do array, apesar de não ser um algoritmo muito eficiente para operações em grande escala, motivo seu O"2, ele faz seu papel pra listas pequenas. quantia armazena a quantidade de elementos que será organizada. for() para coletar do usuário os números a serem aplicados no algoritmo, e finalmente, aplico por meio de dois for() consecutivos, o algoritmo bubble, que compara dois elementos adjacentes e altera sua ordem caso necessário com ajuda do va para replicar o inteiro em outra posição.

# 5 - Média aritmética.
Função para determinar a média aritmética de tamanho determinado pelo usuário, a partir de um for() para captar os números utilizando um array, e um for para somar todos os numeros do array, depois com r=r/quantos; eu calculo a média e imprimo a mesma abaixo.


![Sem título](https://github.com/jazzymaster1/colmeia-teste/assets/141975423/27712e12-118f-4f64-9813-d945a78ddd05)
![ju79wa01t9mz](https://github.com/jazzymaster1/colmeia-teste/assets/141975423/39726553-6b49-4ed9-8c05-74eb9d681bd4)

