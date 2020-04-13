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
    
	ll n,b,a,ans=0,x;
	cin>>n>>b>>a;
	ll X[n];
	x=a;
	for(ll i=0;i<n;i++)
		cin>>X[i];
	for(ll i=0;i<n;i++)
	{
		if(X[i])
		{
			if(b && a<x)
			{
				--b;
				a++;
				ans++;
			}
			else if(a)
			{
				--a;
				ans++;
			}
			else
				break;
		}
		else
		{
			if(a)
			{
				--a;
				ans++;
			}
			else if(b)
			{
				--b;
				ans++;
			}
			else
				break;
		}
	}
	cout<<ans<<"\n";
	//cout<<b<<" "<<a;




	return 0;
}