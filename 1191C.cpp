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
    
	ll n,m,k,x,page=0,prev=0,next=0,ans=0,count=0;
	cin>>n>>m>>k;
	vector <int> p;
	for(int i=0;i<m;i++)
	{
		cin>>x;
		p.pb(x);
	}
	prev=0;next=1;ans=1;
	count=(p[0]-1)/k;
	for(int i=1;i<m;i++)
	{
		//cout<<prev<<" "<<next<<" ";
		ll o=(p[i]-prev-1)/k,z=(p[i]-next-1)/k;
	//cout<<o<<" "<<z<<" ";
		if(o==z && count==o) {
			next++;
		}
		else
		{
			ans++;
			prev=next;
			next++;
			count=z;
		}
		
		//cout<<p[i]<<" "<<ans<<"\n";
	}
	cout<<ans<<"\n";




	return 0;
}