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

ll do(vector<ll> x,ll b,ll e,ll i,ll j,bool f)
{
	if(b>e)
		return 0;
	if(f)
	{
		ll ans=0;
		for(ll k=b;k<=e;k++)
		{
			if(x[k]==j)
				ans++;
		}
		return ans;
	}
	else
	{
		if(x[b]==x[e] && x[e]==i)
			return do(x,b+1,e-1,i,j,false);
		else if(x[b]==x[e] && x[e]==j)
			return max(do(x,b+1,e-1,i,j,true)+2,do(x,b+1,e-1,i,j,false));
		else
		{
			if()
		}
	}

}

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
		ll n,ans=-1;
		cin>>n;
		ll a[n];
		vector <ll> x;
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=1;i<=26;i++)
		{
			for(ll j=i+1;j<=26;j++)
			{
				for(ll k=0;k<n;k++)
				{
					if(a[k]==i || a[k]==j)
						x.pb(a[k]);
				}
				ans=max(ans,do(x,0,x.size()-1,i,j,false));
			}
		}
	}



	return 0;
}