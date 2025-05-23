#include<iostream>
#include<vector>
using namespace std;

int main(){
    // BY using Matrix
    int n, m;
    cout<<"Enter the number of nodes or edges of matrix :"<<endl;
    cin>>n>>m;

    int adj[n+1][n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; 
    }
    return 0;

    // By using List

    vector<int>adj[n+1];

    for(int i = 0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;

}