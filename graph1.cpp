/*   It counts the connected components of a graph and print nodes in the connected components  */

#include<bits/stdc++.h>

using namespace std;

#define    endl           '\n'       
#define    pb             push_back
#define    pop            pop_back
#define    all(w)         w.begin(),w.end()
#define    sp             ' '
#define    ll             long long int
  
const unsigned int m = 1e9+7;
const unsigned int MAX=1e9;

vector<bool> visited(7);
vector<vector<int>> adj(7); // adjacency list
vector<int> nodes(7);  // nodes in a connected component

void dfs(int s) // dfs function
{
    visited[s]=true;
    nodes.pb(s);
    for(auto i: adj[s])
    {
        if(!visited[i])
          dfs(i);
    }
}

int main()
{
    int n,e;  cin>>n>>e;  // number of nodes and edges
    for(int i=0; i<e; i++)
    {
        int x,y; cin>>x>>y;
        adj[y].pb(x);
        adj[x].pb(y);
    }

    int cnt=0; // counter variable to count connected components

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            nodes.clear();
            cnt++;
            dfs(i);
            cout<<"Connected nodes are : ";
            for(int i=0; i<nodes.size(); i++)
            {
                cout<<nodes[i]<<sp;
            }
            cout<<endl;
        }
    }

    cout<<"Number of connected components : "<<cnt;
    
}

/*
SAMPLE TEST
7 4
1 0
2 0
3 4
5 6 
*/
