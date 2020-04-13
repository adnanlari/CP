/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair

ll MOD=1000000007,MOD1=10000000070000;
ll mod(ll x,ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y&1)
			res=(res*x)%MOD;
		y=y>>1;
		x=(x*x)%MOD;
	}
	return res;
}


int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll T;
	cin>>T;
	while(T--)
	{
		string s;string a;
		cin>>s;
		a=s;
		ll l=s.length();ll m=0,p=1,ans=0;
		ll k=mod(10,l);
		ll k1=mod(10,l-1);
		for(ll i=l-1;i>=0;i--)
		{
			//cout<<i<<" ";
			ll x=((int)a[i])-48;
			//cout<<x<<"\n";
			m=(m+(x*p)%MOD)%MOD;
			p=(p*10)%MOD;

		}

		
		p=1;
		ll p1=1;
		//cout<<m<<" \n";

		for(ll i=0;i<l;i++)
		{
			ans=(ans+(m*mod(k,l-i-1))%MOD)%MOD;
			//cout<<ans<<"\n";

			//cout<<((int)a[i]-48)*k1<<" ";
			m=(m-(((int)a[i]-48)*k1)+(MOD1))%MOD;
			//cout<<m<<" ";
			m=(m*10)%MOD;
			//cout<<m<<" ";
			m=(m+((int)a[i]-48))%MOD;

			//cout<<m<<"\n";

		}
		cout<<ans<<"\n";

	}



	return 0;
}