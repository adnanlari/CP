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

    
	ll n,p=0;
	string s;
	cin>>n>>s;
	for(ll i=1;(i*(i+1))/2 <= n;i++)
	{
		cout<<s[p];
		p+=i;
	}
	cout<<"\n";



	return 0;
}