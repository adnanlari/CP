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

    
	ll n,p=1,k=1;
	cin>>n;
	ll A[1000000];

	A[1]=0;
	while(n--)
	{
		ll x;
		cin>>x;
		for(ll i=1;i<=p;i++)
		{
			A[k*2]=A[k]+x;
			if(A[k*2]>=360)
				A[k*2]-=360;
			A[k*2+1]=A[k]-x;
			if(A[k*2+1]<=-360)
				A[k*2+1]+=360;
			k++;
		}
		p*=2;
	}
	for(ll i=k;i<2*k;i++)
	{
		//cout<<A[i]<<" ";
		if(A[i]==0)
		{
			cout<<"YES\n";
			return 0;
		}
	}

	cout<<"NO\n";




	return 0;
}