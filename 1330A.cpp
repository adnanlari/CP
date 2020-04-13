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
		ll n,x;
		cin>>n>>x;
		ll a[202]={0};
		ll y;
		for(ll i=0;i<n;i++)
		{
			cin>>y;
			a[y]=1;
		}
		for(ll i=1;i<=201;i++)
		{
			if(!a[i])
			{
				x-=1;
				a[i]=1;
			}
			if(x==0)
				break;
		}
		for(ll i=1;i<=201;i++)
		{
			if(!a[i])
			{
				cout<<(i-1)<<"\n";
				break;
			}
		}
	}



	return 0;
}