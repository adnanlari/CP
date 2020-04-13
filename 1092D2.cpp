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
	ll A[n+1];
	for(ll i=1;i<=n;i++)
		cin>>A[i];
	if(n%2==0)
	{
		ll f=0;
		for(ll i=1;i<=n/2;i+=2)
		{
			else if(A[i]<A[i+1])
			{
				f=1;
				break;
			}
			else
			{
				if(A[i+1]!=A[i+2] || A[i]!=A[i+3])
				{
					f=1;
					break;
				}
				else
					i+=2;
			}
		}
	}
	



	return 0;
}