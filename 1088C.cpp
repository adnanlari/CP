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

    
	ll n,flag=0,c=0;
	cin>>n;
	ll a[n],b[n]={0};
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=1;i<n;i++)
	{
		if(a[i]<=a[i-1])
			flag=1;
	}
	if(flag==0)
	{
		cout<<"0\n";
		return 0;
	}
	ll sum=0,m=0,x=0;
	for(ll i=n-1;i>=0;i--)
	{
		m=(a[i]+sum)%n;
		if(i>=m)
			x=i-m;
		else if(i<m)
			x=i-m+n;
		if(x!=0)
		{
			c++;
			b[i]=x;
		}
		sum+=x;
	}
	cout<<c+1<<"\n";
	for(ll i=n-1;i>=0;i--)
	{
		if(b[i]!=0)
			cout<<"1 "<<i+1<<" "<<b[i]<<"\n";
	}
	cout<<"2 "<<n<<" "<<n<<"\n";





	return 0;
}	