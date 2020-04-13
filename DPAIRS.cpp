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

    
	ll n,m,cnt=0,x=-1,y=-1,a=INT_MAX,b=INT_MIN;
	cin>>n>>m;
	ll A;
	for(ll i=0;i<n;i++)
	{
		cin>>A;
		if(A<=a)
		{
			a=A;
			x=i;
		}
	}
	for(ll i=0;i<m;i++)
	{
		cin>>A;
		if(A>=b)
		{
			b=A;
			y=i;
		}
	}
	for(ll i=0;i<m;i++)
		cout<<x<<" "<<i<<"\n";
	for(ll i=0;i<n;i++)
	{
		if(i!=x)
			cout<<i<<" "<<y<<"\n";
	}
		
	



	return 0;
	
}