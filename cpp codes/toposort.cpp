#include<iostream>
#include<vector>
using namespace std;

vector<int> topo;
void dfs(vector<vector<int>> adj,int ref,vector<bool> &visit){
    for(int i=0;i<adj[ref].size();i++){
        if(visit[adj[ref][i]]==false){
            visit[adj[ref][i]]=true;
            //cout<<adj[ref][i]<<": going to\n";
            dfs(adj,adj[ref][i],visit);
        }
    }
    //cout<<ref<<" :pushing\n";
    topo.push_back(ref);
}
vector<int> toposort(vector<vector<int>> adj){
    topo.clear();
    vector<bool> visits(adj.size(),false);
    for(int i=0;i<adj.size();i++){
        if(visits[i]==false){
            visits[i]=true;
        dfs(adj,i,visits);}
    }
    return topo;
}
int main(){
    ios::sync_with_stdio(0);
    int n,m;
    std::cin >> n >> m;
  vector<vector<int>> adj(n, vector<int>());
  vector<int> topo;
  for (size_t i = 0; i < m; i++)
  {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
  }
    topo=toposort(adj);
    for(int i=topo.size()-1;i>=0;i--){
        cout<<topo[i]+1<<" ";
    }cout<<"\n";
  return 0;
}