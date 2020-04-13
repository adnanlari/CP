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
    
	ll n,m;
	cin>>n>>m;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	ll rec[101]={0};
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		sum+=a[i];
		ll req=sum-m,ans=0;
		if(req<=0)
			cout<<"0 ";
		else
		{
			for(ll j=100;j>0;j--)
			{
				if(rec[j]>0 && req>0)
				{
					if(j*rec[j] <= req)
					{
						ans+=rec[j];
						req-=j*rec[j];
					}
					else 
					{
						ll c=req/j;
						if(req%j !=0)
							c+=1;
						ans+=c;
						req-=c*j;
					}
					// else if(req/j ==0)
					// {
					// 	ans++;
					// 	req=0;
					// }
				}
				
			}
			cout<<ans<<" ";
		}
		rec[a[i]]++;
	}
	cout<<"\n";


	return 0;
}