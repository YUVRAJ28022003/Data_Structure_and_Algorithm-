#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(int v,vector<int>adj[]){
    int vis[n] = (0);
    vis[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push(node);

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    int n,m;
    cout<<"ENTER NUMBER OF NODES AND EDGES :"<<endl;
    cin>>n>>m;
    
    vector<int> adj[n+1];
    
    for(int i =0;i<m;i++){
        int u,v;
        cout<<"enter the node : ";
        cin>>u;
        cout<<"enter the node which is directed to : ";
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(m,adj);
    return 0;
}