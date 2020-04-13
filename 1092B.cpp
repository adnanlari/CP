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

    
	ll n;
	cin>>n;
	ll m=n,s1=0,s2=0,c=1;
	ll A[101]={0};
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		A[x]++;
		if(A[x]==2)
			A[x]=0;

	}
	for(ll x=1;x<=100;x++)
	{
		if(A[x])
		{
			if(c==1)
			{
				s1+=x;
				c=2;
			}
			else if(c==2)
			{
				s2+=x;
				c=1;
			}
		}
	}
	cout<<abs(s2-s1)<<"\n";






	return 0;
}