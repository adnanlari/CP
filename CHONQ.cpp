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
	/*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif*/
	//the main code starts here
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll an=n+1,sump=0;
		for(ll i=0;i<n;i++)
		{
			sump=0;
			for(ll j=i;j<n;j++)
				sump+=a[j]/(j-i+1);
			//cout<<i<<" "<<sump<<"\n";
			if(sump<=k)
				an=min(an,i+1);
		}
		cout<<an<<"\n";
	}



	return 0;
}