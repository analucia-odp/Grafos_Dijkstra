//---------------------------------------------------------------------
// Arquivo	: graph.hpp
// Conteudo	: Definição da classe grafo
// Autor	: Ana Lúcia Oliveira de Paula (analop@ufmg.br)
// Historico	: 2023-04-28 - arquivo criado
//---------------------------------------------------------------------
#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>

#define INF 0x3f3f3f3f

#define WHITE 0
#define BLACK 1

using namespace std;

struct node{
    int ID;
    int edge_weight;
    int color; // 0 - branco ,  1 - preto
};

class Graph {
    public:
        Graph(int num_vertices);
        virtual ~Graph();

        void insertEdge(int v1, int v2, int weight);
        int map_white(int v);
        int map_black(int v);

        virtual void shortest_path(){};
        virtual void initialize_heap(){};

    protected:
        vector<node> *graphs;
        int numberOfNodes;
        int node_max;
};

#endif // GRAPH_HPP