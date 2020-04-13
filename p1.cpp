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
    
	ll n,i,j,k=10000000,l,m=0;
	map<ll,ll> ma,mb,mc;
	map<ll,ll>::iterator mi,mj;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>l;
		k=10000000;
		m=0;
		while(l--)
		{
			cin>>j;
			k=min(j,k);
			m=max(j,m);

		}
		//cout<<k<<" "<<m<<endl;

		ma[-k]++;
		mb[-m]++;

	}
	k=0;
	for(mi=mb.begin();mi!=mb.end();mi++)
	{
		//cout<<mi->first<<" "<<mi->second<<endl;
		mc[mi->first]=mi->second;
		mi->second+=k;
		k=mi->second;
	}
	ll ans=0;
	for(mi=ma.begin();mi!=ma.end();mi++)
	{
		mj=mb.lower_bound(mi->first);
		if(mj==mb.end())
		{
			ans+=(n*mi->second);
			continue;
		}
		k=mj->second;
		k-=(mc[mj->first]);
		ans+=(k*mi->second);
		//cout<<mi->first<<" "<<mi->second<<" "<<ans<<endl;
	}
	cout<<ans<<endl;




	return 0;
}