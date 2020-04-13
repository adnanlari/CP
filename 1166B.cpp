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
    
	ll k,n,m;
	cin>>k;
	for(n=5;n*n<=k;n++)
	{
		if(k%n==0)
		{
			ll m=k/n;
			char A[n][m];
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<m;j++)
				{
					if((i+j)%5 == 0)
						cout<<'a';
					if((i+j)%5 == 1)
						cout<<'e';
					if((i+j)%5 == 2)
						cout<<'i';
					if((i+j)%5 == 3)
						cout<<'o';
					if((i+j)%5 == 4)
						cout<<'u';

				}
			}
			cout<<"\n";
			return 0;
		}
	}
	cout<<"-1\n";



	return 0;
}