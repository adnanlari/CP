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

    
	ll n,k,flag=1;
	cin>>n>>k;
	vector <ll> A,B;
	//vector :: iterator <ll> i,j;
	ll a=n,x=1;
	while(a!=0)
	{
		if(a&1)
			A.pb(x);
		x*=2;
		a=a>>1;
	}
	if(A.size()>k)
		flag=0;
	else
	{
		while(A.size()+B.size() != k)
		{
			if(A.empty())
			{
				if(B.size() < k)
					flag=0;
				break;
			}

			ll i=A[A.size()-1];
			A.pop_back();
			if((i) == 1)
			{
				flag=0;
				break;
			}
			if((i) == 2)
			{
				B.pb(1);
				B.pb(1);
			}
			else
			{
				A.pb((i)/2);
				A.pb((i)/2);
			}
		}
	}
	if(flag)
	{
		cout<<"YES\n";
		for(ll z=0;z<B.size();z++)
			cout<<B[z]<<" ";
		for(ll z=0;z<A.size();z++)
			cout<<A[z]<<" ";
		cout<<"\n";
			
	}
	else
		cout<<"NO\n";




	return 0;
}