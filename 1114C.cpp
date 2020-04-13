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
    
	ll n,b,ans=INT_MAX,flag=0;
	cin>>n>>b;
	ll P[1000001]={0};
	vector <ll> prime;
	for(ll i=2;i*i<=1000000;i++)
	{
		if(!P[i])
		{
			for(ll j=i*i;j<=1000000;j+=i)
				if(!P[j])
					P[j]=1;
		}
	}
	for(int i=2;i<=1000000;i++)
	{
		if(!P[i])
			prime.pb(i);
	}
	for(int i=0;i<prime.size();i++)
	{
		if(b%prime[i]==0 && prime[i]<=n && b!=0)
		{
			flag=1;
			ll x=prime[i],y=0,z=0,w=b;
			while(w%x==0)
			{
				z++;
				w/=x;
			}
			while(x<=n)
			{
				y+=(n/x);
				x*=x;
			}
			cout<<prime[i]<<" "<<y<<" "<<z<<"\n";
			ans=min(ans,y/z);

		}


	}
	if(!flag)
	{
		ll x=b;
		while(x<=n)
		{
			ans+=(n/x);
			x*=x;
		}

	}
	cout<<ans<<"\n";



	return 0;
}