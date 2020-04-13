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

    
	ll t;
	cin>>t;
	
	while(t--)
	{
		
		string s;
		cin>>s;
		ll x[26]={0};
		ll l=s.length(),i;

		vector <char> ans;
		for( i=0;s[i]!='\0';i++)
			x[(int)s[i]-97]++;
		for(i=0;i<=25;i++)
		{
			if(x[i]==l)
			{
				cout<<"-1\n";
				break;
			}
			else
			{
				while(x[i]--)
					ans.push_back((char)(i+97));
			}
		}
		if(i==26){
		for( ll j=0;j<l;j++)
			cout<<ans[j];
		cout<<"\n";
	}
	}



	return 0;
}