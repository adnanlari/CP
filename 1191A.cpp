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
	ll x=n%4;
	if(x==0)
		cout<<"1 A\n";
	else if(x==1)
		cout<<"0 A\n";
	else if(x==2)
		cout<<"1 B\n";
	else
		cout<<"2 A\n";



	return 0;
}