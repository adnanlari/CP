#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
	ll n,m,s=0,ans=0,p=0,x=0;
	cin>>n>>m;
	vector <ll> a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	sort(a.begin(),a.end());
	for(ll i=0;i<n;i++)
	{
		x++;
		if(a[i]>p)
			p++;
	}
	x+=a[n-1]-p;
	ans=s-x;
	cout<<ans<<"\n";
	return 0;
}