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
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		vector <ll> X;
		X.pb(0);
		for(ll i=1;i<n;i++)
		{
			if(s[0]==s[i])
				X.pb(i);
		}
		ll flag=0,count=1;
		for(ll i=1;i<n;i++)
		{
			for(ll j=0;j<X.size();j++)
			{
				if(s[i]!=s[X[j]+i] || (X[j]+i)>=n)
					flag=1;

			}
			if(flag)
				break;
			count++;
		}
		cout<<s.substr(0,count)<<"\n";
	}



	return 0;
}