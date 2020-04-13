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
		ll n,k,ans=0;
		string s;
		int x[26];
		cin>>n>>k>>s;
		int r=n/k;
		for(int i=0;i<k/2;i++)
		{
			for(int j=0;j<26;j++)
				x[j]=0;
			for(int j=0;j<r;j++)
			{
				x[s[j*k+i]-97]++;
				x[s[j*k+k-1-i]-97]++;
			}
			int tot=0,ma=-1;
			for(int i=0;i<26;i++)
			{
				tot+=x[i];
				ma=max(ma,x[i]);
			}
			ans+=tot-ma;
			//cout<<tot<<ma;
		}
		if(k%2)
		{
			for(int j=0;j<26;j++)
				x[j]=0;
			for(int j=0;j<r;j++)
			{
				x[s[j*k+k/2]-97]++;
				// x[s[j*k+k-1-i]-97]++;
			}
			int tot=0,ma=-1;
			for(int i=0;i<26;i++)
			{
				tot+=x[i];
				ma=max(ma,x[i]);
			}
			ans+=tot-ma;
		}
		cout<<ans<<"\n";

	}



	return 0;
}