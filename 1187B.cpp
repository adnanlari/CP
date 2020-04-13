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
    
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll a[26]={0};
	vector <ll> v[26];
	for(int i=0;s[i]!='\0';i++)
	{
		a[s[i]-97]++;
		for(int j=0;j<26;j++)
			v[j].pb(a[j]);
	}
	ll m;
	cin>>m;
	while(m--)
	{
		string t;
		cin>>t;
		ll b[26]={0};
		for(int i=0;t[i]!='\0';i++)
			b[t[i]-97]++;
		ll ans=0;
		for(int i=0;i<26;i++)
		{
			ll x=lower_bound(v[i].begin(),v[i].end(),b[i])-v[i].begin();
			ans=max(ans,x+1);
		}
		cout<<ans<<"\n";
	}



	return 0;
}