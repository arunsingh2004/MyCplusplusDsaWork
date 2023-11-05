#include <bits/stdc++.h>
using namespace std;

class Graph
{
      int V;
      list<int> *l;

public:
      Graph(int V)
      {
            this->V = V;
            l = new list<int>[V];
      }
      void addEdge(int x, int y)
      {
            // directed graph
            l[x].push_back(y);
      }
      // complete this method
      void topological_sort()
      {
            vector<int> indegree(V, 0);
            // Iterate over all the edges to find the right indegree

            for (int i = 0; i < V; i++)
            {
                  for (auto nbr : l[i])
                  {

                        indegree[i]++;
                  }
            }

            // bfs
            queue<int> q;
            // init the q with node having 0 degree
            for (int i = 0; i < V; i++)
            {
                  if (indegree[i] == 0)
                  {
                        q.push(i);
                  }
            }

            // start poping
            while (!q.empty())
            {
                  int node = q.front();
                  cout << node << " ";
                  q.pop();

                  // Iterate over the nbrs of this node and reduce their indegree by 1
                  for (auto nbr : l[node])
                  {
                        indegree[nbr]--;
                        if (indegree[nbr] == 0)
                        {
                              q.push(nbr);
                        }
                  }
            }
      }
};
int main()
{
      Graph g(6);
      g.addEdge(0, 2);
      g.addEdge(2, 3);
      g.addEdge(3, 5);
      g.addEdge(4, 5);
      g.addEdge(1, 4);
      g.addEdge(1, 2);
      g.topological_sort();

      return 0;
}