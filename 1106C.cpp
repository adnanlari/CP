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
    
	ll n;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	ll ans=0;
	for(ll i=0;i<n/2;i++)
	{
		ans+=(A[i]+A[n-i-1])*(A[i]+A[n-i-1]);
	}
	cout<<ans<<"\n";



	return 0;
}