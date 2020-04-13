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
	ll A[26]={0};
	while(n--)
	{
		string s;
		cin>>s;
		A[s[0]-97]++;
	}
	ll ans=0;
	for(ll i=0;i<26;i++)
	{
		ll x=A[i]/2;
		ans+=(x*(x-1)/2);
		if(A[i]%2)
			x++;
		ans+=(x*(x-1)/2);
	}
	cout<<ans<<"\n";



	return 0;
}