/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

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
		ll n,c=0,f=0,x;
		cin>>n;
		while(n--)
		{
			cin>>x;
			if(x)
				c++;
			else
				c--;
			if(c<0)
				f=1;
		}
		if(f)
			cout<<"Invalid\n";
		else
			cout<<"Valid\n";

	}



	return 0;
}