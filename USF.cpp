/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    bool prime[100001]; 
    memset(prime, true, sizeof(prime)); 
    prime[1]=false;
  
    for (ll p=2; p*p<=100000; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=100000; i += p) 
                prime[i] = false; 
        } 
    } 
	ll t;
	cin>>t;
	while(t--)
	{
		ll a[100001]={0};
		ll n,ans=0,m=0;
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			a[x]++;
		}
		for(ll i=1;i<=100000;i++)
		{
			if(a[i] > 0)
			{
				if((prime[i]==false))
					ans+=a[i];
				else
					m=max(a[i],m);
			}

		}
		if(m==0)
			cout<<"0\n";
		else
			cout<<ans+m<<"\n";

	}



	return 0;
}