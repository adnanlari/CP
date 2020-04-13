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

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,c=0;
		cin>>n>>k;
		ll A[n+1];
		for(ll i=1;i<=n;i++)
			cin>>A[i];
		sort(A+1,A+n+1);
		
		for(ll i=n;i>0;i--)
		{
			if(A[i]>=A[n-k+1])
				c++;
		}
		cout<<c<<"\n";
	}



	return 0;
}