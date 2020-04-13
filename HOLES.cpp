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

    
	map <char,ll> A;
	A['A']=A['D']=A['O']=A['P']=A['Q']=A['R']=1;
	A['B']=2;
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		ll ans=0;
		cin>>s;
		for(ll i=0;s[i]!='\0';i++)
			ans+=A[s[i]];
		cout<<ans<<"\n";
	}


	return 0;
}