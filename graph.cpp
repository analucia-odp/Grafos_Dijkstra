//---------------------------------------------------------------------
// Arquivo	: graph.cpp
// Conteudo	: Implementação do grafo
// Autor	: Ana Lúcia Oliveira de Paula (analop@ufmg.br)
// Historico	: 2023-04-28 - arquivo criado
//---------------------------------------------------------------------
#include "graph.hpp"
#include <iostream>

using namespace std;

Graph::Graph(int num_vertices)
{
    node_max = num_vertices;
    numberOfNodes = (2 * num_vertices) + 2; //dobro do número de vértices +2, pois começa a contagem da posição 2 do vetor
    graphs = new vector<node>[numberOfNodes];
}

void Graph::insertEdge(int v1, int v2, int weight)
{
    graphs[map_white(v1)].push_back(node{v2, weight, BLACK}); // coloro de preto, os vertices da partição que eu nao tenho interesse
    graphs[map_white(v2)].push_back(node{v1, weight, BLACK});

    graphs[map_black(v2)].push_back(node{v1, weight, WHITE}); //coloro de branco, os vertices que fazem parte do meu grafo original
    graphs[map_black(v1)].push_back(node{v2, weight, WHITE});
}

//mapeia os vértices brancos para uma posição que é o dobro do seu ID 
int Graph::map_white(int v){
    return v * 2;
}

//mapeia os vértices pretos para uma posição que é o dobro do seu ID mais 1
int Graph::map_black(int v){
    return (v*2 + 1);
}

Graph::~Graph()
{
    for (int i = 0; i < numberOfNodes; i++)
    {
        graphs[i].clear();
    }
    delete[] graphs;
}
