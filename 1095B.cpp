/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair
ll MOD=1000000007,BMOD=100000000700000;

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	cout<<min(A[n-1]-A[1],A[n-2]-A[0])<<"\n";


	return 0;
}