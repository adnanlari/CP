#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,m=INT_MAX,k,ans=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m=min(a[i],m);
		}
		for(int i=0;i<n;i++)
		{
			if(a[i] > k+m)
				ans+=a[i]-(k+m);
		}
		cout<<ans<<"\n";
	}
}