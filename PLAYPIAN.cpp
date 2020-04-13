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
#define pb push_back
#define mp make_pair

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll i,l=s.length();
		for(i=0;i<l;i+=2)
		{
			if(s[i]==s[i+1])
				break;

		}
		if(i==l)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}



	return 0;
}			