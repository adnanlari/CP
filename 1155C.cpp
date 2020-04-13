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
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0]; 
    for (ll i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
}
bool binarySearch(ll X[],ll n,ll x)
{
	ll l=0,r=n-1;
	while(r>=l)
	{

		ll mid=l+(r-l)/2;
		// cout<<"aa"<<mid<<x<<"\n";
		if(X[mid]==x)
			return true;
		else if(X[mid]>x)
			r=mid-1;
		else
			l=mid+1;
	}
	return false;


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
    
	ll n,m;
	cin>>n>>m;
	ll a[n],b[m],A[n-1];
	cin>>a[0];
	for(ll i=1;i<n;i++)
	{
		cin>>a[i];
		A[i-1]=a[i]-a[i-1];
	}
	for(ll i=0;i<m;i++)
		cin>>b[i];
	// for(ll i=0;i<m;i++)
		// cout<<b[i]<<" ";
	ll x=findGCD(A,n-1);
	// cout<<x<<"\n";
	for(ll i=0;i<m;i++)
	{
		if(x%b[i]==0)
		{
			cout<<"YES\n"<<a[0]<<" "<<i+1<<"\n";
			return 0;
		}
	}
	cout<<"NO";






	return 0;
}