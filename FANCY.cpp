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

    
	ll t,j=0;
	cin>>t;
	string s[t];
	while(t--)
	{
		
		getline(cin,s[j]);
		
		ll f=0,l=s[j].length();
		for(ll i=0;i<l-2;i++)
		{
			cout<<s[j].substr(i,3)<<"\n";
			if(s[j].substr(i,3)=="not")
				f=1;
		}
		if(f)
			cout<<"Real Fancy\n";
		else
			cout<<"regularly fancy\n";
		j++;
	}



	return 0;
}