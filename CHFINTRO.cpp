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

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
	ll n,r,R;
	cin>>n>>r;
	while(n--)
	{
		cin>>R;
		if(R>=r)
			cout<<"Good boi\n";
		else
			cout<<"Bad boi\n";
	}



	return 0;
}