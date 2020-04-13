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
		ll a,b,c,x,y,z,ans=INT_MAX,A,B,C,temp=0;
		cin>>a>>b>>c;
		for(x=1;x<=a+a;x++)
		{
			for(y=x;y<=b+b;y+=x)
			{
				temp=0;
				temp+=abs(a-x);
				temp+=abs(b-y);
				ll l=(c/y)*y;
				ll u=l+y;
				if(l!=0 && c-l < u-c)
					u=l;
				temp+=abs(c-u);		
				if(temp<ans)
				{
					ans=temp;
					A=x;
					B=y;
					C=u;
				}
				//cout<<temp<<"\n"<<x<<" "<<y<<" "<<u<<"\n";


			}
		}
		cout<<ans<<"\n"<<A<<" "<<B<<" "<<C<<"\n";
	}



	return 0;
}