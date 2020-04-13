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

    
	ll n,q;
	cin>>n>>q;
	map <string,string> M;
	while(n--)
	{
		string a,b;
		cin>>a>>b;
		M[a]=b;
	}
	while(q--)
	{
		string a;
		cin>>a;
		ll i,l=a.length();
		for( i=l-1;i>=0;i--)
		{
			if(a[i]=='.')
				break;
		}
		string b=a.substr(i+1);
		if(b!=a)
		{
			if(M[b]!="\0")
				cout<<M[b]<<"\n";
			else
				cout<<"unknown\n";
		}
		else
			cout<<"unknown\n";
	}



	return 0;
}