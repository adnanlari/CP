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
    
	ll n,m,mi=INT_MAX;
	cin>>n>>m;
	ll A[n+1],C[n+1];
	for(ll i=1;i<=n;i++)
		cin>>A[i];
	vector <int> X[100001];
	for(ll i=1;i<=n;i++)
	{
		cin>>C[i];
		mi=min(mi,C[i]);
		X[C[i]].pb(i);
	}
	while(m--)
	{
		ll t,d,ans=0;
		cin>>t>>d;
		if(A[t]>=d)
		{
			A[t]-=d;
			ans+=(d*C[t]);
			d=0;

		}
		else
		{
			ans+=(A[t]*C[t]);
			d-=A[t];
			A[t]=0;

			while(d>0)
			{
				ll i=0;
				for( i=0;i<X[mi].size();i++)
				{
					if(d==0)
						break;
					if(A[X[mi][i]]>=d)
					{
						A[X[mi][i]]-=d;
						ans+=(C[X[mi][i]]*d);
						d=0;
					}
					else
					{
						ans+=A[X[mi][i]]*C[X[mi][i]];
						d-=A[X[mi][i]];
						A[X[mi][i]]=0;
					}
				}
				if(i==X[mi].size() || (i==X[mi].size()-1 && A[X[mi][i]]==0))
					mi++;
			}

		}
		cout<<ans<<"\n";
		for(ll j=1;j<=n;j++)
			cout<<A[j]<<" ";
		cout<<"\n"<<mi<<"\n";
	}




	return 0;
}