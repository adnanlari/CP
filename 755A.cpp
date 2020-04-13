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

    
	ll P[1000001]={0};
	for(ll i=2;i*i<=1000000;i++)
	{
		if(!P[i])
		{
			for(ll j=i*i;j<=1000000;j+=i)
				P[j]=1;
		}
	}
	ll n,m;
	cin>>n;
	for(m=1;m<=1000;m++)
	{
		if(P[n*m+1])
			break;
	}
	cout<<m<<"\n";



	return 0;
}