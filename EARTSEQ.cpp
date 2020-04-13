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

    ll p[1000001]={0};
    vector <ll> P;
    for(ll i=2;i*i<=1000000;i++)
    {
    	if(!p[i])
    	{
	    	for(ll j=i*i;j<=1000000;j+=i)
	    		p[j]=1;
		}
    }
    for(ll i=2;i<=1000000;i++)
    {
    	if(!p[i])
    		P.pb(i);
    }

   	ll t;
   	cin>>t;
   	while(t--)
   	{
   		ll n;
   		cin>>n;

   		if(n<=3333)
   		{
	   		cout<<P[0]*P[1]*P[n]<<" ";
	   		for(ll i=1;i<n;i++)
	   			cout<<P[i]*P[i+1]<<" ";
	   		cout<<"\n";
	   	}
	   	else
	   	{
	   		vector <ll> A(n);
	   		A[0]=6;
	   		A[1]=10;
	   		A[2]=15;
	   		ll y=n%3;
	   		ll x=n-y;
	   		//cout<<y<<" "<<x<<"\n";
	   		for(ll i=3;i<x;i++)
	   		{
	   			if(i%3==0)
	   				A[i]=6;
	   			if(i%3==1)
	   				A[i]=10;
	   			if(i%3==2)
	   				A[i]=15;
	   			A[i]*=P[i+2];
	   		}
	   		if(y==1)
	   		{
	   			A[x]=P[x-1+2]*7;
	   			A[0]*=7;
	   		}
	   		else if(y==2)
	   		{
	   			A[x]=P[x-1+2]*7;
	   			A[x+1]=7*11;
	   			A[0]*=11;
	   		}
	   		for(ll i=0;i<n;i++)
	   			cout<<A[i]<<" ";
	   		cout<<"\n";
	   	}


   	}
	



	return 0;
}