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

    ll A[500000],B[500000];
	ll q,k,b,C,c,d,ans=0,l=-1,u=-1;
	cin>>q>>k;
	while(q--)
	{
		cin>>b>>C;
		c=C^ans;
		if(b==1)
		{
			cin>>d;
			if(l==-1)
			{
				l=200000;
				u=200000;
			}
			else
			{
				l-=1;
			}
			A[l]=c;
			B[l]=d;


		}
		if(b==2)
		{
			cin>>d;
			if(l==-1)
			{
				l=200000;
				u=200000;
			}
			else
			{
				u+=1;
			}
			A[u]=c;
			B[u]=d;


		}
		if(b==3)
		{
			ll c1=c-k,c2=c+k,m1=0,m2=0;
			for(ll i=l;i<=u;i++)
			{
				if(A[i]>=c1 && A[i]<=c2)
				{
					m1+=B[i];
					if(m1<0) m1=0;
					else if(m2<m1) m2=m1;

				}
			}
			ans=m2;
			cout<<ans<<"\n";

		}
	}



	return 0;
}