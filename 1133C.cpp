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
    
	ll n;
	cin>>n;
	vector <ll> a(n);
	vector <ll> :: iterator itr,i1;
	for(ll i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	ll d[n];
	d[0]=0;
	for(ll i=1;i<n;i++)
		d[i]=a[i]-a[i-1];
	ll x=0,ans=0,m=0;
	//itr=lower_bound(a.begin(),a.end(),16);
	//cout<<*itr<<"\n";
	for( i1=a.begin();i1!=a.end();i1++)
	{
		if(*i1 - a[m] <=5)
		{
			x++;
			ans=max(ans,x);
		}
		else
		{
			x++;
			while(*i1-a[m] > 5)
			{
				m++;
				x--;
				ans=max(ans,x);
			}
		}
		//cout<<m<<" ";


	}
	//cout<<"\n";
	cout<<ans<<"\n";



	return 0;
}