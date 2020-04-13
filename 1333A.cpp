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
    
	ll n,x,count=0,ans;
	cin>>n;
	ans=(n*(n+1))/2;
	ll a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[i]=x+a[i-1];
	}
	sort(a,a+n+1);
	count=1;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
		if(a[i]==a[i-1])
			count++;
		else
		{
			ans-=(count*count-count)/2;
			count=1;
		}
		cout<<ans<<"\n";
	}
	ans-=(count*count-count)/2;
	cout<<ans<<"\n";



	return 0;
}