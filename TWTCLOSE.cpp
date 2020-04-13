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

    
	ll n,k,ans=0;
	cin>>n>>k;
	ll a[n+1]={0};
	while(k--)
	{
		string s;
		cin>>s;
		if(s[2]=='O')
		{
			
			for(ll i=1;i<=n;i++)
				a[i]=0;
			cout<<"0\n";
			ans=0;
		}
		else if(s[2]=='I')
		{
			ll j;
			cin>>j;
			if(a[j]==0)
			{
				a[j]=1;
				ans+=1;
			}
			else if(a[j]==1)
			{
				a[j]=0;
				ans-=1;
			}
			cout<<ans<<"\n";
		}
	}



	return 0;
}