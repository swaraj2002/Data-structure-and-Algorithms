/* CYCLE DETECTION USING DFS */

#include<bits/stdc++.h>

using namespace std;

#define    endl           '\n'       
#define    pb             push_back
#define    pop            pop_back
#define    all(w)         w.begin(),w.end()
#define    sp             ' '
#define    ll             long long int
  

vector<int> adj[5];   // 5 is number of nodes
bool visited[5];     // Here also

bool dfs(int s, int p)  // source node and parent node
{
   visited[s]=true;
   for(auto i: adj[s])
   {
      if(!visited[i])
      {
        if(dfs(i,s))
          return true;
      }
      else
      {
        if(i!=p)
          return true;
      }
   }
   return false;
}


int main()
{
   int n; cin>>n; 
   for(int i=0; i<n; i++)
   {
      int x,y; cin>>x>>y;
      adj[x].pb(y);
      adj[y].pb(x);
   }

   cout<<dfs(0,-1);
  
}

/*

SAMPLE TEST 1
5
1 0
0 2
2 1
0 3
3 4

SAMPLE TEST 2
2
0 1
1 2

*/


