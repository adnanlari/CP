/*******************************************
* AUTHOR : Adnan Masroor :-)
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
	//the main code starts here
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,x,y,ans=1;
		cin>>n>>m;
		ll a[n+1];
		vector <ll> X[n+1];
		for(int i=0;i<m;i++)
		{
			cin>>x>>y;
			X[x].pb(y);
			X[y].pb(x);
		}
		for(int i=1;i<=n;i++)
			a[i]=1;
		if(m%2)
		{
			for(int i=1;i<=n;i++)
			{
				if(X[i].size()%2)
				{
					a[i]=2;
					ans=2;
					break;
				}
			}
			if(ans!=2)
			{
				ans=3;
				for(int i=1;i<=n;i++)
				{
					if(X[i].size() > 0)
					{
						a[i]=2;
						ll j=0;
						for(j=0;j<X[i].size();j++)
						{
							if(i!=X[i][j])
								break;
						}
						a[X[i][j]]=3;
						break;
					}
				}
			}
		}
		cout<<ans<<"\n";
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}



	return 0;
}