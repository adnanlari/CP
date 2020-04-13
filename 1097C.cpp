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

    
	ll n,ans=0;
	cin>>n;
	string s[n];
	ll Y[n];
	vector <ll> X[1000000];
	for(ll i=0;i<n;i++)
	{
		cin>>s;
		ll c=0,j;
		for() j=0;s[j]!='\0';j++)
		{
			if(s[j]=='(')
				c++;
			if(s[j]==')')
				c--;
		}
		Y[i]=c;
		X[c+500000].pb(i);
	}
	for(ll i=0;i<n;i++)
	{
		ll x=Y[i];
		ll y=x*-1;
		for(ll j=0;j<X[y+500000].size();j++)
		{
			if(s[i]=='(' && )
		}

	}



	return 0;
}