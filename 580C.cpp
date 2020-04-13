/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,m,ans=0,l;
	cin>>n>>m;
	ll A[n+1],C[n+1];
	vector <ll> V[n+1];
	for(ll i=1;i<=n;i++)
		cin>>C[i];
	for(ll i=1;i<n;i++)
	{
		ll x,y;
		cin>>x>>y;
		V[x].push_back(y);
		V[y].push_back(x);
	}
	queue <ll> Q;
	ll visited[n+1]={0};
	Q.push(1);
	visited[1]=1;
	if(C[1]==1)
		A[1]=1;
	else
		A[1]=0;
	while(!Q.empty())
	{
		ll x=Q.front();
		Q.pop();
		l=0;
		for(ll i=0;i<V[x].size();i++)
		{
			if(!visited[V[x][i]])
			{
				visited[V[x][i]]=1;
				if(C[V[x][i]]==0)
					A[V[x][i]]=0;
				else
					A[V[x][i]]=A[x]+1;
				if(A[V[x][i]]<=m)
					Q.push(V[x][i]);
				l++;
			}
		}
		if(!l)
			ans++;
	}

	cout<<ans<<"\n";



	return 0;
}					