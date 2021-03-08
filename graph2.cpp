/* Height of the tree */

#include<bits/stdc++.h>

using namespace std;


#define    endl           '\n'       
#define    pb             push_back
#define    pop            pop_back
#define    all(w)         w.begin(),w.end()
#define    sp             ' '
#define    ll             long long int
  
vector<int> adj[5];
bool visited[5];


int dfs(int a)
{
	int d=0;
	visited[a]=true;
	for(auto i: adj[a])
	{
		if(!visited[i]) d=max(d,dfs(i));
	}
	return (d+1);
}


int main()
{
    int e; cin>>e;
    for(int i=0; i<e; i++)
    {
    	 int x,y; cin>>x>>y;
    	 adj[x].pb(y);
    	 adj[y].pb(x);
    }

    cout<<dfs(0);
	
}

/* 
SAMPLE INPUT
4
0 1
0 2
1 3
1 4
*/

