//---------------------------------------------------------------------
// Arquivo	: shortest_path.cpp
// Conteudo	: Implementação da classe auxiliar para achar o menor caminho, usando djikstra
// Autor	: Ana Lúcia Oliveira de Paula (analop@ufmg.br)
// Historico	: 2023-04-28 - arquivo criado
//---------------------------------------------------------------------
#include "shortest_path.hpp"

Shortest_Path::Shortest_Path(int num_vertices) : Graph(num_vertices) {}

void Shortest_Path::initialize_heap()
{
    for (int i = 0; i < numberOfNodes; i++)
    {
        vertex.push_back(INF); //todas as posições do vetor de pesos serão iniciliazadas com INF
    }

    vertex[map_white(1)] = 0; //exceto a posição correspondente ao vértice de origem

    min_heap.push_back({0, 1, WHITE}); // coloco no heap o vertice de origem com peso 0
    make_heap(min_heap.begin(), min_heap.end());
}

void Shortest_Path::shortest_path()
{

    this->initialize_heap();

    while (!min_heap.empty())
    {

        int weight = get<0>(min_heap.front()); // peso (chave)
        int id_heap = get<1>(min_heap.front());     // id vertice
        int color = get<2>(min_heap.front()); //cor do vértice

        pop_heap(min_heap.begin(), min_heap.end());

        min_heap.pop_back();

        id_heap = color == WHITE ? map_white(id_heap) : map_black(id_heap);

        for (auto it : graphs[id_heap])
        {

            if (it.edge_weight % 2 == 0) //verifica se a aresta do vértice tem peso par
            {
                int length = fabs(weight) + it.edge_weight;
                int ID = it.color == WHITE ? map_white(it.ID) : map_black(it.ID);

                if (length < vertex[ID])
                {
                    vertex[ID] = length;

                    min_heap.push_back({(-1) * length, it.ID, it.color}); //salva negativo para obter um heap mínimo
                    push_heap(min_heap.begin(), min_heap.end());
                }
            }
        }
    }

    if (vertex[map_white(node_max)] == INF)
        cout << -1 << endl;
    else
        cout << vertex[map_white(node_max)] << endl;
}

Shortest_Path::~Shortest_Path()
{
    vertex.clear();
    min_heap.clear();
}