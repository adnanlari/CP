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
#define pb push_back
#define mp make_pair

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
    	ll D,req,dead,d,p,Q;
    	cin>>D;
    	ll A[32]={0};
    	for(ll i=0;i<D;i++)
    	{
    		cin>>d>>p;
    		A[d]=p;

    	}
    	for(ll i=1;i<=31;i++)
    	{
    		A[i]=A[i]+A[i-1];
    	}
    	cin>>Q;
    	while(Q--)
    	{
    		cin>>dead>>req;
    		if(A[dead]>=req)
    			cout<<"Go Camp\n";
    		else
    			cout<<"Go Sleep\n";
    	}
    }
	



	return 0;
}