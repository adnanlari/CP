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
#define pb push_back
#define mp make_pair

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
		ll tr,dr,ts,ds,flag=0;
		map <ll,ll> Rt,Rd;
		cin>>tr;
		while(tr--)
		{
			ll x;
			cin>>x;
			Rt[x]=1;
		}
		cin>>dr;
		while(dr--)
		{
			ll x;
			cin>>x;
			Rd[x]=1;
		}
		cin>>ts;
		while(ts--)
		{
			ll x;
			cin>>x;
			if(!Rt[x])
				flag=1;
		}
		cin>>ds;
		while(ds--)
		{
			ll x;
			cin>>x;
			if(!Rd[x])
				flag=1;
		}
		if(!flag)
			cout<<"yes\n";
		else
			cout<<"no\n";

	}



	return 0;
}