#include <bits/stdc++.h>

using namespace std;

class graph{
    
    int V;
    
    list<int> *adj;
    
public:
    
    graph(int V);
    
    def addedge(int s, int w);
    
    def bfs(int S);

};

graph::graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void addege(int s,int w){
    
    adj[u].push_back(w);
}


void bfs(int S){
    
    bool *visited = new bool[V];
    for(int i = 0; i<V; ++i){
        visited[i] = false;
    }
    
    visited[S] = true;
    
    list<int> queue;
    
    queue.push_back(S);
    
    while (!queue.empty()){
        
        int a = queue.popfront();
        
        cout<<a<<" ";
        
        list<int>::iterator i;
        for( i == adj[a].begin(); i != adj[a].end; ++i)
            if(!visited[*i])
                visited[*i] = true;
                queue.pushback(*i);
        
    }
    
    
    
}

    
    
    
    
}