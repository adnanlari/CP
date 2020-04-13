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
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if(n%2 && k/(3*n)!=0)
			a[n/2]=0;
		k%=(3*n);
		for(ll i=0;i<k;i++)
			a[i%n]=a[i%n]^a[n-(i%n)-1];
		for(ll i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";



	}




	return 0;
}