/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 100000000
//#define IOS ios_base::sync_with_studio(false); cin.tie(NULL);
ll count_white(ll a,ll b,ll c,ll d)
{
	
		n=c-a+1;
		m=d-b+1;
		ll ans=(n*m)/2;
		if((a+b)%2==0 && n%2==1 && m%2==1)
			++ans;
		return ans;
}
ll count_black(ll a,ll b,ll c,ll d)
{
	
		n=c-a+1;
		m=d-b+1;
		ll ans=(n*m)/2;
		if((a+b)%2==1 && n%2==1 && m%2==1)
			++ans;
		return ans;
}


int main()
{
	//IOS
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,x1,x2,x3,x4,y1,y2,y3,y4;
		cin>>n>>m>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		ll w,b;
		w=count_white(1,1,m,n);
		b=count_black(1,1,m,n);
		ll w1=count_white(x1,y1,x2,y2);
		ll b1=count_black(x1,y1,x2,y2);
		w+=b1;
		b-=b1;
		ll w2=count_white(x3,y3,x4,y4);
		ll b2=count_black(x3,y3,x4,y4);
		if(x3<x1)
		{
			if(x4<x1)
			{
				w-=w2;
				b+=w2;
			}
			
		}

	}
	



	return 0;
}