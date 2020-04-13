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
    
	ll n,ans=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i+=2)
	{
		if(s[i]==s[i+1])
		{
			ans++;
			if(s[i]=='a')
				s[i]='b';
			else
				s[i]='a';
		}
	}
	cout<<ans<<"\n"<<s<<"\n";



	return 0;
}