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

    
	ll n;

	cin>>n;
	if( n==1 )
	{
		cout<<-1<<"\n";
		return 0;
	}

	ll x=n/2;
	if(x%2==1)
		x+=1;
	else
		x+=2;
	cout<<x<<" 2\n";




	return 0;
}	