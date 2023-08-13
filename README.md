<h1 align="center"> Grafos / Dijkstra</h1>

## Descrição
    Este presente trabalho tem como objetivo implementar uma solução para ajudar um empresário de sucesso com suas viagens. Esse empresário tem duas fobias que dificultam a execução de suas viagens. A primeira refere-se ao seu medo de viajar de avião (sendo necessário realizar todas suas viagens de carro). A segunda refere-se a fobia de números 
    ímpares. 
    Tendo em vista essas duas complicações, o empresário só viaja entre duas cidades adjacentes apenas se estrada conter comprimento par e, o caminho feito por ele entre a cidade em que ele está e a cidade que ele precisa ir também deve conter um número par de estradasdiferentes. Como ele faz muitas viagens, é necessário implementar uma solução que desenhe um caminho possível que atenda as restrições descritas e tenha o menor comprimento possível.

    Tal problema foi modelado em grafos e utilizou-se o algoritmo de dijkstra para calcular os menores caminhos.

  Esse projeto foi implementado como parte de um trabalho prático da disciplina Algoritmos.

## Observações
<b>A interface do sistema construído é do tipo console</b>

## Tecnologias utilizadas
O código foi desenvolvido no subsistema Windows para Linux (WSL) utilizando a 
linguagem C++ e o compilador GCC da GNU Compiler Collection. A máquina que foi 
desenvolvida esse trabalho contém o processador Intel(R) Core(TM) i5-8265U CPU @
1.60GHz 1.80 GHz e 8GB de memória RAM.

## Rodando o projeto
* Acesse o diretório;
* Utilizando um terminal, compile o programa utilizando o seguinte comando: <
make>;
* Com esse comando, será gerado o executável do programa.
* Proceda dessa maneira no terminal:
```
    ./tp01 < casoTeste01.txt
```
* Utilize o seguinte comando: "make clean" para remover o executável.
* Para avaliar automaticamente a solução em todos os casos de teste disponibilizados, basta executar o comando “make eval”, que ira testar a solução com todos os casos de teste.

## Entrada

O programa processa um caso de teste em cada execução. A primeira linha de um
cenário de teste é composta de dois número inteiros N e A, representando respectivamente o número
de cidades (2 ≤ N ≤ 10000) e o número de estradas conectando pares de cidades (1 ≤ A ≤ 100000).
Cada uma das próximas A linhas descreve uma estrada entre duas cidades, representadas pelo identificador de uma cidade de origem, um identificador de uma cidade de destino e o comprimento da estrada que liga diretamente as respectivas cidades. Os dois identificadores e o comprimento da estrada
são representados por inteiros positivos, a saber X1, X2 e D, os quais devem satisfazer as seguintes condiçoes: 1 ≤ X1, X2 ≤ N, X1 ̸= X2 e 0 < D ≤ 10000. Pode-se assumir que: (1) todas as estradas são de mão dupla; (2) a cidade de origem sempre recebe o identificador 1; e (3) a cidade de destino sempre recebe o identificador N

## Saida
O programa imprime uma linha com o tamanho do caminho mínimo satisfazendo as especificações do problema. Quando não existir tal caminho, o programa imprime −1.

## Colaboradores
Ana Lucia Oliveira de Paula

## Status do projeto
Finalizado (06/05/2023)
