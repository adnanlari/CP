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

ll C(ll x)
{
	if(x==0 || x==1)
		return 0;
	return ((x*(x-1))/2);
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
    
	ll n,total=0;
	cin>>n;
	int a[n+1]={0},b[n+1]={0},x[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		a[x[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=C(a[i]);
		total+=b[i];
		//cout<<a[i]<<" "<<b[i]<<"\n";
	}
	for(int i=0;i<n;i++)
	{
		cout<<(total-a[x[i]]+1)<<"\n";
	}




	return 0;
}