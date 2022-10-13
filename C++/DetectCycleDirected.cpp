#include<iostream>
#include<queue>
#include<map>
#include<list>

using namespace std;

class Graph{
  int V;
  list<int> *adjList;
  bool isCyclicUtil(int v, bool visited[], bool recStack[]);

  public:
  
  Graph(int V);
  void addEdge(int u, int v);
  bool isCyclic();
};

Graph::Graph(int V){
  this->V = V;
  adjList = new list<int>[V];
}

void Graph::addEdge(int u, int v){
  adjList[u].push_back(v);
}

bool Graph::isCyclicUtil(int v, bool visited[], bool recStack[]){
  
  if(!visited[v]){
    visited[v] = true;
    recStack[v] = true;
  }

  for(auto x: adjList[v]){
    if(!visited[x] and isCyclicUtil(x, visited, recStack)){
      return true;
    }else if(recStack[x]){
      return true;
    }
  }
  
  recStack[v] = false;

  return false;
}

bool Graph::isCyclic(){

  bool *visited = new bool[V];
  bool *recStack = new bool[V];

  for(int i = 0; i < V; i++){
    visited[i] = false;
    recStack[i] = false;
  }

  for(int i = 0; i < V; i++){
    if(!visited[i] and isCyclicUtil(i, visited, recStack)){
      return true;
    }
  }

  return false;
}

int main(void){

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if(g.isCyclic())
        cout << "Graph contains cycle" << endl;
    else
        cout << "Graph doesn't contain cycle" << endl;

  return 0;
}
