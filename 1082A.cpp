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

    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,x,y,d,ans=INT_MAX,flag=0;
    	cin>>n>>x>>y>>d;
    	ll k=x-y;
    	if(k<0)
    		k*=-1;
    	if(k%d==0)
    	{
    		ll a=k/d;
    		ans=min(ans,a);
    		flag=1;
    	}
    		 if((y-1)%d == 0)
    		{ ll a=0;
    			 a+=(x-1)/d;
                 if((x-1)%d>0)
    			a+=1;
    			a+=(y-1)/d;
    			ans=min(ans,a);
    			flag=1;
    		}
    		 if((n-y)%d == 0)
    		{
    			ll a=0;
    			a+=(n-x)/d;
                 if((n-x)%d>0)
                a+=1;
               // cout<<a<<"\n";
    			a+=(n-y)/d;
    				ans=min(ans,a);
    				flag=1;
    			
    		}
    	if(flag == 1)
    		cout<<ans<<"\n";
    	else
    		cout<<"-1\n";
    }
	



	return 0;
}