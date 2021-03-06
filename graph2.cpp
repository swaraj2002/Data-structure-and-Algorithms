/* Height of the tree */

#include<bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define    endl           '\n'       
#define    pb             push_back
#define    pop            pop_back
#define    all(w)         w.begin(),w.end()
#define    sp             ' '
#define    ll             long long int
  
const unsigned int m = 1e9+7;
const unsigned int MAX=1e9;

bool is_prime(int n) {for(int i=2; i*i<=n; i++) {if(n%i==0) return false;} return true;}

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

