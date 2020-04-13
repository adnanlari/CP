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
		ll n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		ll ans=1;
		for(int i=1;i<n;i++)
		{
			int flag=0;
			for(int j=1;j<=5;j++)
			{
				if(i-j < 0)
					break;
				else
				{
					if(a[i]>=a[i-j])
						flag=1;
				}
			}
			if(flag==0)
				ans++;
		}
		cout<<ans<<"\n";
	}



	return 0;
}