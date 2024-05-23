# Exercício – Quick Sort

1. Implementar a função SWAP
void swap ( int vetor[], int pos_1, int pos_2)
**Descrição**: A função recebe como parâmetro um vetor e
dois números inteiros, que indicam as posições que
devem ser trocadas no vetor.

2. Implementar a função PARTICIONA
Int particiona( int vetor[], int left, int right)
Descrição: A função recebe como parâmetro um vetor e
dois números indicando o intervalo onde ele deve
particionar o vetor. A posição da esquerda é escolhida
como pivô. Assim, ao executar esta função, o vetor fica
com duas partições. À esquerda, com os valores
menores que o pivô, que foi o número da esquerda,
passado como parâmetro. A outra partição, com os
valores maiores que o pivô. A função retorna a posição
que o pivô terminou dentro do vetor. Esta função utiliza a
função swap.

3. Implementar a função ORDENACAO_QUICK
void ordenacao_quick (int vetor[], int left, int right)
Descrição: Esta rotina recebe como parâmetro o vetor e
o intervalo que deve ser ordenado. Esta função deve ser
construída de forma recursiva. Ou seja, ela primeiro deve
ver se o intervalo é válido. Se não for, deve ser finalizada.
Se o intervalo é válido, ela deve particionar o vetor e
depois fazer duas chamadas recursivas. Uma para
ordenar o intervalo à esquerda do pivô e a outra para
ordenar o intervalo à direita do pivô.

**Conteúdo de apoio:** (https://joaoarthurbm.github.io/eda/posts/quick-sort/)
