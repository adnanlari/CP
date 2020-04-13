/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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

    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,f=0;
    	cin>>n;
    	ll A[n];
    	for(ll i=0;i<n;i++)
    		cin>>A[i];
    	sort(A,A+n);
    	for(ll i=1;i<n;i++)
    	{
    		if(A[i]==A[i-1])
    		{
    			f=1;
    			break;
    		}

    	}
    	if(f)
    		cout<<"yes\n";
    	else
    		cout<<"no\n";
    }
	



	return 0;
}