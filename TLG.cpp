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
    
    

    ll n,w=0,l=0,s=0,t=0;
    cin>>n;
    while(n--)
    {
    	ll x,y,tw=0,tl=0;
    	cin>>x>>y;
    	s+=x;
    	t+=y;
    	if(s>t)
    		tw=1;
    	else
    		tw=2;
    	ll q=abs(s-t);
    	if(q>l)
    	{
    		w=tw;
    		l=q;
    	}

//cout<<s<<" "<<t<<" "<<tw<<" "<<q<<"\n";
    }
    cout<<w<<" "<<l<<"\n";

	



	return 0;
}