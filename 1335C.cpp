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
		ll n,x;
		cin>>n;
		ll a[n+1]={0};
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			a[x]+=1;
		}
		ll rep=0,dis=0;
		for(ll i=1;i<=n;i++)
		{
			rep=max(rep,a[i]);
			if(a[i]>0)
				dis++;
		}
		dis-=1;
		if(rep-dis>=2)
		{
			rep-=1;
			dis+=1;
		}
		cout<<(min(rep,dis))<<"\n";

	}



	return 0;
}	