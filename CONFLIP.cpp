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

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll g;
		cin>>g;
		while(g--)
		{
			ll i,n,q;
			cin>>i>>n>>q;
			if(n%2 ==0)
				cout<<n/2<<"\n";
			else
			{
				if(i==q)
					cout<<n/2<<"\n";
				else
					cout<<n/2+1<<"\n";
			}
		}
	}



	return 0;
}