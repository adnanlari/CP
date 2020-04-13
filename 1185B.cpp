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
		string a,b;
		cin>>a>>b;
		a=a+" ";
		b=b+" ";
		vector <pair<char,ll>> A,B;
		int count=1;
		for(ll i=0;i<a.length()-1;i++)
		{
			if(a[i]!=a[i+1])
			{
				A.pb(mp(a[i],count));
				count=1;
			}
			else
			{
				count++;
			}
		}
		count=1;
		for(ll i=0;i<b.length()-1;i++)
		{
			if(b[i]!=b[i+1])
			{
				B.pb(mp(b[i],count));
				count=1;
			}
			else
			{
				count++;
			}
		}
		bool f=true;
		if(A.size() == B.size())
		{
			for(int i=0;i<A.size();i++)
			{
				if(A[i].first != B[i].first)
					f=false;
				else
				{
					if(B[i].second < A[i].second)
						f=false;
				}
			}
		}
		else
			f=false;
		if(f)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}



	return 0;
}