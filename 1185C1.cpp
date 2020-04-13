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
    
	ll n,m;
	cin>>n>>m;
	ll a[n];

	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"0 ";
	int sum=a[0];
	for(ll i=1;i<n;i++)
	{
		sum+=a[i];
		ll ans=0;
		sort(a,a+i);
		if(sum > m)
		{
			int x=sum;
			for(ll j=i-1;j>=0;j--)
			{
				x-=a[j];
				ans++;
				if(x<=m)
					break;
			}

		}
		cout<<ans<<" ";

	}
	cout<<" ";



	return 0;
}