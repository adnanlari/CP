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
    
	ll a,b,c,ans=0;
	cin>>a>>b>>c;
	ll q=a,w=b,e=c;
	ll X[]={1,2,3,1,3,2,1};
	for(ll i=0;i<7;i++)
	{
		ll x=0;
		a=q;b=w;c=e;
		for(ll j=i;j<7;j++)
		{
			if(X[j]==1 && a)
				--a;
			else if(X[j]==2 && b)
				--b;
			else if(X[j]==3 && c)
				--c;
			else
				break;
			++x;
		}
		ll aa=a/3,bb=b/2,cc=c/2;
		ll y=min(aa,bb);
		y=min(y,cc);
		a-=(y*3);
		b-=(y*2);
		c-=(y*2);
		x+=y*7;
		for(ll j=0;j<7;j++)
		{
			if(X[j]==1 && a)
				--a;
			else if(X[j]==2 && b)
				--b;
			else if(X[j]==3 && c)
				--c;
			else
				break;
			++x;
		}
		ans=max(x,ans);

	}
	cout<<ans<<"\n";



	return 0;
}