#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000009
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ll long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
ll size;

using namespace std;

vector<int> ar[100001];
int vis[100001];

void dfs(int node)
{
	vis[node] = 1;
	size++;
	
	for(int i : ar[node])
	if(vis[i]==0)
	dfs(i);
	
}


int main()
{
	int t;
	int n , m , a , b;
	cin>>t;
	while(t--)
	{
		REP(i,n) ar[i].clear(),vis[i]=0;
	
	cin>>n>>m;
	
	for(int i=1;i<=m;i++)
	cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
	
	int cc = 0;
	ll res=1;
	for(int i=1;i<=n;i++)
	if(vis[i]==0)
	{
		size=0;
		dfs(i) , cc++;
		res=(res*size)%mod;
	}
	
	cout<<cc<<" "<<res<<endl;
	}
}
