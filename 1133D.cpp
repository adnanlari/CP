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
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
ll findlcm(ll arr[], ll n) 
{  
    ll ans = arr[0];  
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 

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
	ll a[n],b[n],neg[n]={0};
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
			neg[i]^=1;
		a[i]=abs(a[i]);
	}
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
		if(b[i]<0)
			neg[i]^=1;
		b[i]=abs(b[i]);
	}
	ll l=findlcm(b,n);
	for(ll i=0;i<n;i++)
	{
		a[i]*=(l/b[i]);
		if(neg[i])
			a[i]*=-1;
	}
	sort(a,a+n);
	int s=-1,ans=0;
	for(ll i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			s=i;
			break;
		}
	}
	if(s!=-1)
	{
		for(int i=0;i<n;i++)
		{
			
		}
	}



	return 0;
}