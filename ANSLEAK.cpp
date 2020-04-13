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
		ll n,m,k,x;
		cin>>n>>m>>k;
		vector <ll> ans;
		ll h[m+1];
		for(ll i=0;i<n;i++)
		{
			for(ll j=1;j<=m;j++)
				h[j]=0;
			for(ll j=0;j<k;j++)
			{
				cin>>x;
				h[x]++;
			}
			x=1;
			for(ll j=2;j<=m;j++)
			{
				if(h[j]>h[x])
					x=j;
			}
			ans.pb(x);
		}
		for(ll i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}



	return 0;
}