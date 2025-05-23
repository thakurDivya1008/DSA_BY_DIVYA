
#include <bits/stdc++.h>

using namespace std;

vector<int>bfs(vector<int>adj[], int V){

    int vis[V] = {0};
    vis[0] = 1;
    queue<int>q;
    q.push(0);
    vector<int>bfsOfGraph;
    while(!q.empty()){

        int node = q.front();
        bfsOfGraph.push_back(node);
        q.pop();

        for(auto it : adj[node]){

            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }

    }

   return bfsOfGraph;

}
void addEdge(vector<int>adj[], int u, int v){
   adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int>arr){

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

     vector <int> adj[6];
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    vector<int>ans = bfs(adj,5);

    print(ans);
    return 0;


}