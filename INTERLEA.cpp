/*******************************************
* AUTHOR : Adnan Masroor :-)
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
	//the main code starts here
    
	ll n,t=0;
	cin>>n;
	string s[n];
	vector <ll> X[10];
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
		t+=s[i].length();
		X[s[i][0]-48].pb(i);
	}
	ll in[n]={0};
	for(ll i=0;i<t;i++)
	{
		ll x;
		for(ll j=9;j>=0;j--)
		{
			if(X[j].size())
			{
				x=X[j][X[j].size()-1];
				X[j].pop_back();
				break;
			}
		}
		cout<<x+1<<" ";
		in[x]++;
		if(in[x]<s[x].length())
			X[s[x][in[x]]-48].pb(x);
	}
	cout<<"\n";





	return 0;
}