#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph
{
    private:
        // int _adjMatrix[5][5];
        vector< vector< int > > _adjMatrix;
        vector< bool > _visited;
        void explore(int v);
        
    public:
        Graph(int);
        void addEdge(int u, int v, int w);
        friend ostream& operator<<(ostream& os, const Graph& g1);
        void dfs(int v);
        // friend ostream &operator<<(ostream &, const List<T2> &)
};

int main(int argc, char* argv[])
{
    Graph g1(7);

    g1.addEdge(0, 1, 1);
    g1.addEdge(0, 2, 1);
    g1.addEdge(0, 3, 1);
    g1.addEdge(1, 3, 1);
    g1.addEdge(1, 4, 1);
    g1.addEdge(3, 4, 1);
    g1.addEdge(5, 6, 1);

    cout << g1 << endl;

    cout << "DFS: ";
    g1.dfs(6);

    return 0;
}

void Graph::explore(int v)
{
    _visited.at(v) = true;
    cout << v << " ";
    for(size_t i = 0; i < _visited.size(); i++)
    {
        // _adjMatrix.at(v).at(i)
        // _adjMatrix[v][i]
        if(_adjMatrix.at(v).at(i) == 1 && !_visited.at(i))
        {
            explore(i);
        }
    }
}

void Graph::dfs(int v)
{
    //explore v
    explore(v);
    for(size_t i = 0; i < _visited.size(); i++)
    {
        if(_visited.at(i) != true)
        {
            cout << "New unconnected component" << endl;
            explore(i);
        }
    }
    cout << endl;
}

ostream& operator<<(ostream& os, const Graph& g1)
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            os << g1._adjMatrix[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

void Graph::addEdge(int u, int v, int w)
{
    _adjMatrix[u][v] = w;
    _adjMatrix[v][u] = w;
}

Graph::Graph(int n)
{
    _adjMatrix = vector< vector< int > >(n, vector< int >(n, 0));
    _visited = vector< bool >(n, false);
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //     {
    //         _adjMatrix[i][j] = 0;
    //     }
    // }
}