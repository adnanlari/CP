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
		ll n,j;
		cin>>n;
		j=n;
		ll X[26]={0};
		while(j--)
		{
			string s;
			cin>>s;
			ll A[26]={0};
			for(ll i=0;s[i]!='\0';i++)
			{
				if(!A[s[i]-97])
				{
					A[s[i]-97]=1;
					X[s[i]-97]++;
				}
			}
		}
		ll ans=0;
		for(ll i=0;i<26;i++)
		{
			if(X[i]==n)
				ans++;
		}
		cout<<ans<<"\n";

	}



	return 0;
}