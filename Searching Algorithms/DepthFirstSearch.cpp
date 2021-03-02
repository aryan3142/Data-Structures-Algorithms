#include <bits/stdc++.h>

using namespace std;


//defined a class graph

class graph{
//private member functions

//an int V describing the number of vertices
    int V;
//a pointer pointing to an array of adjacency lists   
    list<int> *adj;
//a fucntion used for calculating dfs   
    void dfsutil(int v,bool visited[]);
    
//public member functions
public:
//constructor function that will be called itself as soon as the object of the class has been instantiated
    graph(int V);
//a fucntion to add edges to the graph
    void addedge(int u,int v);
//a function for calculating dfs   
    void dfs(int v);

};

//accessing the constructor outside the class and modifying it, V is the number of vertices and the object of the class
//will be a dynamic array of lists or say adjacency lists

graph::graph(int V){
    this -> V = V;
    adj = new list<int>[V];
}

void graph::addedge(int u,int v){
    adj[u].pus_back(v);
    
}

void graph::dfsutil(int v,bool visited[]){
    
    visited[v] = true
    
    cout<<v<<" ";
    
    list<int>::iterator i;
    for( i = adj.begin(); i != adj.end; i++ ){
        if (visited[*i]==false)
        dfsutil(*i,visited);
    }
}

void graph::dfs(int v){
    
    bool *visited = new bool[V];
    
    for( int i = 0; i < V; ++i)
    visited[i] = false;
    
    dfsutil(v,visited);
        
    
}




