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

int main()
{
	//IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ll q;
	cin>>q;
	while(q--)
	{
	ll l,r,a,b,c,d,ans=0;
	cin>>l>>r;
	if(l%2==1 && r%2==1)
	{
		a=(l+1)/2;
		b=(r-1)/2;
		c=(l-1)/2;
		d=(r-1)/2;
		ans+=(b*(b+1))-((a-1)*a);
		ans-=(d*(d+2))-((c-1)*(c+1));
	}
	else if(l%2==1&& r%2==0)
	{
		a=(l+1)/2;
		b=r/2;
		c=(l-1)/2;
		d=(r-2)/2;
		ans+=(b*(b+1))-((a-1)*a);
		ans-=(d*(d+2))-((c-1)*(c+1));

	}
	else if(l%2==0 && r%2==1)
	{
		a=l/2;
		b=(r-1)/2;
		c=l/2;
		d=(r-1)/2;
		ans+=(b*(b+1))-((a-1)*a);
		ans-=(d*(d+2))-((c-1)*(c+1));

	}
	else if(l%2==0 && r%2==0)
	{
		a=l/2;
		b=r/2;
		c=l/2;
		d=(r-2)/2;
		ans+=(b*(b+1))-((a-1)*a);
		ans-=(d*(d+2))-((c-1)*(c+1));


	}

	cout<<ans<<"\n";
}



	return 0;
}