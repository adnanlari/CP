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

ll nC2(ll x)
{
	return (x*(x-1))/2;
}
		


int main()
{
	IOS
	/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ce=0,co=0,ans=0;
		cin>>n;
		ll freq[1000001]={0};ll visit[1000001]={0};
		ll A[n+1];
		for(ll i=1;i<=n;i++)
		{
			cin>>A[i];
			if(A[i]&1)
				co++;
			else
				ce++;
			freq[A[i]]++;
		}
		ans=nC2(co)+nC2(ce);
		for(ll i=1;i<=1000000;i++)
		{
			ans-=nC2(freq[i]);
			if(!visit[i])
			{
				ll x=i^2;
				if((!visit[x]) && freq[x])
					ans-=(freq[i] * freq[x]);
				visit[i]=1;
				visit[x]=1;
			}
		}
		cout<<ans<<"\n";


	}




	return 0;
}