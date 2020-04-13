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

    
	ll n,x;
	cin>>n;
	if(n%2==0)
	{
		x=n/2;
		x*=(n+1);

	}
	else
	{
		x=(n+1)/2;
		x*=n;
	}
	if(x%2==1)
		cout<<"1\n";
	else
		cout<<"0\n";



	return 0;
}