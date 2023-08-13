//---------------------------------------------------------------------
// Arquivo	: main.cpp
// Conteudo	: Arquivo principal, faz a leitura da entrada e chama os métodos e TADS necessários para execução da saída.
// Autor	: Ana Lúcia Oliveira de Paula (analop@ufmg.br)
// Historico	: 2023-04-28 - arquivo criado
//---------------------------------------------------------------------

#include <iostream>

#include "graph.hpp"
#include "shortest_path.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    
    int number_nodes;
    int number_edges;

    int ID1;
    int ID2;
    int edge_weight;

    try{
        cin >> number_nodes >> number_edges;
        if (number_nodes < 2 || number_nodes > 10000)
            throw "Número de cidades inválido!!";
        
        if (number_edges < 1 || number_edges > 100000)
            throw "Número de estradas inválido!!";
    }catch(const char* msg){
        cerr << "error: " << msg << endl;
    } //exceção para tratar casos inválidos em relação ao número de cidades e número de estradas.

    Graph * graph = new Shortest_Path(number_nodes);

    try{ //exceção para tratar casos inválidos em relação aos identificadores dos vértices e os pesos das arestas
        while (cin >> ID1){

            if (ID1 < 1)
                throw "O ID da cidade de origem deve ser um número positivo maior que 0!";
            
            cin >> ID2;
                if (ID2 > number_nodes)
                    throw "O ID da cidade de destino não pode ser maior que o número máximo de cidades!";
            
            if (ID1 == ID2)
                throw "Uma cidade não pode ter uma estrada para ela mesma!";

            cin >> edge_weight;
                if (edge_weight < 1 || edge_weight > 10000)
                    throw "Tamanho da estrada inválido!";
            
            graph->insertEdge(ID1, ID2, edge_weight); //insere os vértices e sua respectiva aresta enquanto a entrada for lida

         }
    }catch(const char* msg){
        cout << "error: " << msg << endl;
    }

    graph->shortest_path(); //procura o menor caminho

    delete graph;
    
    return 0;
}