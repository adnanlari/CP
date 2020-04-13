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
    
	ll n,check=0;
	cin>>n;
	vector <ll> a;
	for(ll i=0;i<n;i++)
	{
		ll m;
		cin>>m;
		a.pb(m);
		if(!a[i])
			check=1;
	}
	ll x=0,y=-1,z=0;
	if(!check)
		cout<<n<<"\n";
	else
	{
		for(int i=0;a[i];i++)
			a.pb(a[i]);
		a.pb(0);
		for(int i=0;i<a.size();i++)
		{
			if(a[i])
				x++;
			else
			{
				y=max(y,x);
				x=0;
			}
		}
		cout<<y<<"\n";
	}

	return 0;
}