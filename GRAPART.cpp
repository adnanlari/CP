/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;
void dfs(ll visit[],ll color[])
{
	ll x=1;
	visit[x]=1;
	color[x]=1;
	queue <ll> Q;
	Q.push(x);
	while(!Q.empty())
	{
		x=Q.front();
		Q.pop();
		for(ll i=0;i<A[x].size();i++)
		{
			Q.push(A[x][i])
		}
	}

}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector <ll> A[n+1];
		for(ll i=1;i<n;i++)
		{
			ll x,y;
			cin>>x>>y;
			A[x].pb(y);
			A[y].pb(x);

		}
		ll visit[n+1]={0},color[n+1]={0};

		vector <ll> ans1,ans2;


	}



	return 0;
}	