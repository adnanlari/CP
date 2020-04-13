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
		ll n,k;
		cin>>n>>k;
		ll mi=INT_MAX,ma=INT_MIN,x;
		for(ll i=0;i<n;i++)
		{	
			cin>>x;
			mi=min(x,mi);
			ma=max(x,ma);
		}
		if(ma-mi <= 2*k)
			cout<<mi+k<<"\n";
		else
			cout<<"-1\n";
	}



	return 0;
}