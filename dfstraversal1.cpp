#include<bits/stdc++.h>
using namespace std;
class Graph
{
    int v;
    list<int>*adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int v);
    void addedge(int v, int w);
    void dfs(int v);



};
Graph:: Graph(int v){
   this->v=v;
   adj= new list<int>[v];


}
void Graph::addedge(int v, int w){
     adj[v].push_back(w);



}
void  Graph::DFSUtil(int v, bool visited[]){
       visited[v]=true;
       cout<<v<<" ";
       list <int> :: iterator i;
       for( i=adj[v].begin();i!=adj[v].end();++i){
          if(!visited[*i]){
            DFSUtil(*i,visited);

          }

       }




}
void Graph::dfs(int v){
   bool*visited= new bool[v];
   for(int i=0;i<v;i++){
    visited[i]=false;

   }
   DFSUtil(v,visited);



}
int main(){
    Graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    g.dfs(2);




}

