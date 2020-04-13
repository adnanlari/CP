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

    
	string s;
	cin>>s;
	ll f=0;
	string a;
	for(ll i=0;i<5;i++)
	{
		cin>>a;
		if(s[0]==a[0] || s[1]==a[1])
			f=1;
	}
	if(f)
		cout<<"YES\n";
	else
		cout<<"NO\n";




	return 0;
}