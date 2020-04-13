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
    
	ll n,l,r,a=0,b=0,c=0;
	cin>>n>>l>>r;
	while(r%3 != (l-1)%3)
	{
		if(r%3==0)
			a++;
		else if(r%3==1)
			b++;
		else
			c++;
		r--;
	}
	ll x=(r-l+1)/3;
	a+=x;
	b+=x;
	c+=x;
	
	//cout<<a<<b<<c;
	ll A[n+1][3];
	A[1][0]=a;
	A[1][1]=b;
	A[1][2]=c;
	for(ll i=2;i<=n;i++)
	{
		A[i][0]=((A[i-1][0]*a)%MOD+(A[i-1][1]*c)%MOD+(A[i-1][2]*b)%MOD)%MOD;
		A[i][1]=((A[i-1][0]*b)%MOD+(A[i-1][1]*a)%MOD+(A[i-1][2]*c)%MOD)%MOD;
		A[i][2]=((A[i-1][0]*c)%MOD+(A[i-1][1]*b)%MOD+(A[i-1][2]*a)%MOD)%MOD;
	}
	cout<<A[n][0]<<"\n";




	return 0;
}