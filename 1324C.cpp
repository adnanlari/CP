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
		ll n,ans=0,x=0;
		string s;
		cin>>s;
		s=s+"R";
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='L')
				x++;
			else if(s[i]=='R')
			{
				ans=max(x,ans);
				x=0;
			}
		}
		cout<<(ans+1)<<"\n";
	}



	return 0;
}