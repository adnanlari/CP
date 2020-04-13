/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,ans=1;
		cin>>n>>k;
		n=n-1;
		k=k-1;
		if(k>(n/2))
			k=n-k;
			//cout<<k<<"\n";
		for(ll i=0;i<k;i++)
		{
			ans*=(n-i);
			ans/=(i+1);
		}
		
		cout<<ans<<"\n";




	}




	return 0;
}