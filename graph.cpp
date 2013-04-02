#include<graph.h>
#include<utility>
#include<time.h>
#include<cmath>

Erdos_Renyi::Erdos_Renyi(int vertices, double p)
{
        int num_vertices=vertices;
        typedef std::pair<int,int> Edge;
        Graph g(num_vertices);
        for(int i=0;i<num_vertices;i++)
        {
                for(int j=0;j<num_vertices;j++)
                {
                        if(j!=i)
                        {
                                srand(time(NULL));
                                int a=rand();
                                                                if(a/RAND_MAX <p)
                                                                {
                                        Edge edge(i,j);
                                                add_edge(edge.first,edge.second,g);
                                                                }
                        }

                }
        }
}
/*
void Erdos_Renyi::printVertices()
{
        typedef property_name<Graph, vertex_index_t>::type IndexMap;

}
*/
