#ifndef GRAPH_H
#define GRAPH_H

#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
using namespace boost;

typedef adjacency_list<vecS, vecS, bidirectionalS> Graph;

class Erdos_Renyi{
public:
        Erdos_Renyi(int vertices, double p);

public:
        Graph g;
};

#endif // GRAPH_H
