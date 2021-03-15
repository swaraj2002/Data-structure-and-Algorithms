/* single source shortest path (sssp) on tree using dfs */

#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001]; 
int dist[1001];

void dfs(int x, int d)
{
	visited[x]=true;
	dist[x]=d;
	for(auto i : adj[x])
	 if(!visited[i])
	   dfs(i, dist[x]+1 );	
}


int main()
{
	int n, a, b; cin>>n;
    
    for(int i=1; i<=(n-1); i++)
    cin>>a>>b , adj[a].push_back(b) , adj[b].push_back(a);

    dfs(1,0);	

    for(int i=1; i<=n; i++)
    {
		cout<<i<<' '<<dist[i]<<endl;       
    }
}


/*
SAMPLE TEST
6
1 2
1 3
1 4
2 5
2 6
*/

