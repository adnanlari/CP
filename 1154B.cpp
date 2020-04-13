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
	set <ll> X;
	set <ll> :: iterator itr,itr1;
	for(ll i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		X.insert(x);
	}
	if(X.size()==1)
		cout<<"0\n";
	else if(X.size()==2)
	{
		itr=X.begin();
		ll a=*itr;
		ll b=*(++itr);
		b=b-a;
		if(b%2)
			cout<<b<<"\n";
		else
			cout<<b/2<<"\n";
	}
	else if(X.size()==3)
	{
		itr=X.begin();
		ll a=*itr;
		ll b=*(++itr);
		ll c=*(++itr);
		if(c-b == b-a)
			cout<<b-a<<"\n";
		else
			cout<<"-1\n";
	}
	else
		cout<<"-1\n";



	return 0;
}