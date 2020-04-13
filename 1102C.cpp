/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

    
	ll n,x,y,m,cnt=0,z;
	cin>>n>>x>>y;
	z=n;
	while(n--)
	{
		cin>>m;
		if(m<=x)
			cnt++;
	}
	if(x<=y)
		z=(cnt+1)/2;
	cout<<z<<"\n";







	return 0;
}