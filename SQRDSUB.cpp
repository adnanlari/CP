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
ll M=998244353;

ll f2(ll x)
{
	int ans=0;
	while(x%2==0 && x!=0)
	{
		ans++;
		x/=2;
	}
	return ans;
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
		ll n,ans=0;
		cin>>n;
		vector <ll> a,b;
		a.pb(0);
		b.pb(0);
		vector <ll> z;
		z.pb(0);
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			x=abs(x);
			if(x==0)
				z.pb(i);
			a.pb(f2(x));
			//cout<<a[i]<<" ";
		}
		//cout<<"\n";
		for(ll i=1;i<=n;i++)
		{
			b.pb(a[i]+b[i-1]);
			//cout<<b[i]<<" ";
		}
		//cout<<"\n";
		z.pb(n+1);
		for(ll i=0;i<z.size()-1;i++)
		{
			ll c0=0;
			//cout<<z[i]<<" "<<z[i+1]<< " ";
			for(ll j=z[i]+1;j<z[i+1];j++)
			{
				ll test=b[j],pos=j;
				if(a[j]==0)
				{
					test=b[j]+2;
					c0++;
					pos=lower_bound(b.begin(),b.end(),test)-b.begin();
				}
				else if(a[j]==1)
				{
					test=b[j]+1;
					pos=lower_bound(b.begin(),b.end(),test)-b.begin();
				}
				else if(a[j]>=2)
				{
					pos=j;
				}
				//cout<<test<<'o'<<pos<<"\n";
				if(pos<z[i+1])
				{
					ans+=z[i+1]-pos;
				}
				if(a[j]>0)
				{
					ans+=(c0*(c0+1 ))/2;
					c0=0;
				}
				
			}
			ans+=(z[i+1]-z[i])*z[i];
			ans+=(c0*(c0+1))/2;
		}
		cout<<ans<<"\n";
	}



	return 0;
}