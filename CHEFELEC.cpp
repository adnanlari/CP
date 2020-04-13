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
		string s;
		cin>>s;
		ll A[n+1];
		vector <ll> ones;
		for(ll i=0;i<n;i++)
		{
			cin>>A[i];
			if(s[i]=='1')
				ones.pb(i);
		}
		if(ones.empty())
		{
			cout<<"0\n";
			continue;
		}
		ll f=ones[0],b,ans=0;
		for(ll i=1;i<ones.size();i++)

		{
			b=ones[i];
			ll w=-90;
			for(ll j=f+1;j<=b;j++)
			{
				ll x=A[j]-A[j-1];
				w=max(w,x);

			}
			ans+=(A[b]-A[f]-w);
			f=b;

		}
		if(ones[0]!=0)
			ans+=A[ones[0]]-A[0];
		if(ones[ones.size()-1]!=n-1)
			ans+=A[n-1]-A[ones[ones.size()-1]];
		cout<<ans<<"\n";
	}



	return 0;
}	