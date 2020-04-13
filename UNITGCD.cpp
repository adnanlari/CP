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

	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(n==1)
			cout<<"1\n";
		else
			cout<<(n/2)<<"\n";
		if(n<=3)
		{
			cout<<n<<" ";
			for(int i=1;i<=n;i++)
				cout<<i<<" ";
			cout<<"\n";
		}
		else
		{
			cout<<"3 1 2 3\n";
			for(int i=4;i<=n;i+=2)
			{
				if(i+1 <= n)
					cout<<"2 "<<i<<" "<<(i+1)<<"\n";
				else
					cout<<"1 "<<i<<"\n";

			}
		}
	}



	return 0;
}