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

    
	ll n,m,k,ans=INT_MAX,i;
	cin>>n>>m>>k;
	ll A[n+1],X[m+1],Y[m+1],L[m+1],B[n+1]={0};
	for( i=1;i<=n;i++)
		A[i]=INT_MAX;
	i=1;
	while(i<=m)
	{
		cin>>X[i]>>Y[i]>>L[i];
		i++;
	}
	i=1;
	while(i<=k)
	{
		ll x;
		cin>>x;
		B[x]=1;
		i++;
	}
	i=1;
	while(i<=m)
	{
		if(B[X[i]]==0 || B[Y[i]]==0 )
		{
			A[Y[i]]=min(A[Y[i]],L[i]);
			A[X[i]]=min(A[X[i]],L[i]);
		}
		i++;
	}
	i=1;
	while(i<=n)
	{
		if(B[i])
			ans=min(A[i],ans);
		i++;
	}




	if(ans==INT_MAX)
		ans=-1;
	cout<<ans<<"\n";




	return 0;
}