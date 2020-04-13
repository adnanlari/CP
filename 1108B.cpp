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
    
	ll n,f=0;
	cin>>n;
	ll A[n];
	for(ll i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	cout<<A[n-1]<<" ";
	vector <ll> X;
	X.pb(A[n-1]);
	for(ll i=n-2;i>=0 && !f;i--)
	{
		if(A[n-1]%A[i]!=0)
		{
			cout<<A[i]<<"\n";
			f=1;
		}
		else
		{
			if(A[i]!=X[X.size()-1])
				X.pb(A[i]);
			else
			{
				cout<<A[i]<<"\n";
				f=1;
			}
		}
	}



	return 0;
}	