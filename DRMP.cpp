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
		ll m;
		cin>>m;
		ll count=0;
		vector <ll> ans;
		for(ll i=1;i<=300000;i++)
		{
			ll x=m%i;
			if((x*x)%i==0 && m>=i)
			{
			// 	ll y=__gcd(m,i);
			// 	ll z=m/y,j=i/y;
			// 	ll p=(m+i)/j;
			// 	p*=z;
				
			// 	if(m+i <= p)
			// 	{
					count++;
					ans.pb(m+i);
					// cout<<m+i<<" "<<p<<"\n";
				// }
			}
		}
		cout<<count<<"\n";
		for(ll i=0;i<count;i++)
			cout<<ans[i]<<"\n";
	}



	return 0;
}
 