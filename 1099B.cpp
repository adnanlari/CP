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

    
	ll n,i;
	cin>>n;
	for(i=1;i<=100000;i++)
	{
		if(i*i >= n)
			break;
	}
	if(i*i == n)
		cout<<(i+i)<<"\n";
	else
	{
		n-=(i-1)*(i-1);
		if(n<=i-1)
			cout<<((i-1)+(i-1)+1)<<"\n";
		else
			cout<<((i-1)+(i-1)+2)<<"\n";
	}



	return 0;
}