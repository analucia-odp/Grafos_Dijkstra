//---------------------------------------------------------------------
// Arquivo	: shortest_path.hpp
// Conteudo	: Definição da shortest path
// Autor	: Ana Lúcia Oliveira de Paula (analop@ufmg.br)
// Historico	: 2023-04-28 - arquivo criado
//---------------------------------------------------------------------
#ifndef SHORTEST_PATH_HPP
#define SHORTEST_PATH_HPP

#include <bits/stdc++.h> //heap
#include <cmath> //fabs
#include <tuple> // for tuple

#include "graph.hpp"

using namespace std;

class Shortest_Path : public Graph {
    public:
        Shortest_Path(int num_vertices);
        ~Shortest_Path();
        void shortest_path() override;
        void initialize_heap() override;

    private:
        vector<int> vertex; //vetor de pesos
        vector<tuple<int,int,int>> min_heap; //peso do vértice (dist), id do vértice e cor do vértice
};

#endif // SHORTEST_PATH_HPP