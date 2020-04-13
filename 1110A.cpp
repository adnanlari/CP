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
    ll b,k,ce=0,co=0;
    cin>>b>>k;
    ll a[k];
    for(ll i=0;i<k;i++)
    {
    	cin>>a[i];
    	if(a[i]%2)
    		co++;
    	else
    		ce++;
    }
    if(b%2==1)
    {
    	co%=2;
    	if(co)
    		cout<<"odd\n";
    	else
    		cout<<"even\n";
    }
    else
    {
    	if(a[k-1]%2==1)
    		cout<<"odd\n";
    	else
    		cout<<"even\n";

    }
	



	return 0;
}