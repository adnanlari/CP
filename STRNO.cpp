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
		ll x,y=0,k,a;
		cin>>x>>k;
		a=x;
		while(x%2==0)
		{
			y++;
			x/=2;
		}
		for(ll i=3;i*i<=a;i+=2)
		{
			while(x%i==0)
			{
				y++;
				x/=i;
			}
		}
		if(x>2)
			y++;
		if(y>=k)
			cout<<"1\n";
		else
			cout<<"0\n";
	}



	return 0;
}