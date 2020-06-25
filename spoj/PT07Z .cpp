#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

vector<int> ar[100001];
int vis[100001];
int maxd,maxn;

void dfs(int node,int d)
{
	vis[node] = 1;
	if(d>maxd)
	maxd=d ,maxn=node;
	
	for(int i : ar[node])
	if(vis[i]==0)
	dfs(i,d+1);
	
}


int main()
{
	int n , m , a , b;
	cin>>n;
	
	for(int i=1;i<=n-1;i++)
	cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
	maxd=-1;
	dfs(1,0);
	REP(i,n)  vis[i]=0;
	maxd=-1;
	dfs(maxn,0);

	
	cout<<maxd;
}
