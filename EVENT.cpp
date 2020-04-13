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

ll day(string s)
{
	
	
		if(s=="saturday")
			return 0;
		if(s=="sunday")
			return 1;
		if(s=="monday")
			return 2;
		if(s=="tuesday")
			return 3;
		if(s=="wednesday")
			return 4;
		if(s=="thursday")
			return 5;
		if(s=="friday")
			return 6;
	
}

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
    	string s,e;
    	ll l,r,ans=0,count=0;
    	cin>>s>>e>>l>>r;
    	ll k=day(e)-day(s);
    	if(k<0)
    		k+=7;
    	k++;
    	if(k==7)
    		k=0;
    	for(ll i=l;i<=r;i++)
    	{
    		if(i%7==k)
    		{
    			ans=i;
    			count++;
    		}
    	}
    	//cout<<count<<" "<<k<<"\n";
    	if(count==0)
    		cout<<"impossible\n";
    	else if(count ==1)
    		cout<<ans<<"\n";
    	else if(count>1)
    			cout<<"many\n";

    }


	return 0;
}