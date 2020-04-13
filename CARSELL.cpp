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

bool sortdec(ll a,ll b)
{
	if(a>=b)
		return true;
	return false;
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
		ll n,sum=0,x=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,greater<ll>());
		
			for(ll i=0;i<n;i++)
			{
				//cout<<a[i]<<" ";
				x=a[i]-i;
				if(x<0)
					x=0;
				sum=(sum+x)%MOD;
				
			}
		
		cout<<(sum%MOD)<<"\n";

	}



	return 0;
}