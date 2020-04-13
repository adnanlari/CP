/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back

vector <ll> A[300001];
ll P[300001];
ll a,b;
ll visit[300001],J[300001];
void power()
{
	P[0]=1;
	for(ll i=1;i<=300000;i++)
		P[i]=(P[i-1]*2)%MOD;
}

bool Dfs(ll v)
{
	
	//ll J[300001]={0};
	a=0,b=0;
	queue <ll> Q;
	Q.push(v);
	visit[v]=1;
	J[v]=1;
	a++;
	while(!Q.empty())
	{
		ll x=Q.front();
		Q.pop();
		for(ll i=0;i<A[x].size();i++)
		{
			if(visit[A[x][i]]==1 && J[A[x][i]]==J[x])
				return false;
			else if(visit[A[x][i]]==0)
			{
				visit[A[x][i]]=1;
				Q.push(A[x][i]);
				if(J[x]==1)
				{
					J[A[x][i]]=2;
					b++;
				}
				else if(J[x]==2)
				{
					J[A[x][i]]=1;
					a++;
				}
			}
		}
	}
	return true;
}

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    power();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m,ans=1,i,flag=0;
    	cin>>n>>m;
    	for( i=1;i<=n;i++)
    		A[i].clear();
    	for(i=1;i<=m;i++)
    	{
    		ll x,y;
    		cin>>x>>y;
    		A[x].pb(y);
    		A[y].pb(x);
    	}
    	//ll visit[300001]={0};
    	//ll J[3000001]={0};
    	for(i=1;i<=n;i++)
    	{
    		visit[i]=0;
    		J[i]=0;
    	}
    	for( i=1;i<=n;i++)
    	{
    		if(visit[i]==0)
    		{
    			bool f=Dfs(i);
    			if(f)
    			{
    				ans=(ans*(P[a]+P[b])%MOD)%MOD;
    			}
    			else
    			{
    				flag=1;
    			}

    		}
    	}
    	if(flag==0)
    		cout<<ans<<"\n";
    	else
    		cout<<"0\n";
    }
	



	return 0;
}