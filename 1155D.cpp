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
ll maxSubArraySum(ll a[], ll size) 
{ 
    ll max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (ll i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    if(max_so_far<0)
    	return 0;
    else
    	return max_so_far;
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
    
	ll n,x;
	cin>>n>>x;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	if(x>0)
		cout<<x*(maxSubArraySum(a,n))<<"\n";
	else
	{
		ll minhere=INT_MAX,minfar=INT_MAX;
		ll s,e,xe,xs;
		for(ll i=0;i<n;i++)
		{
			if(minhere > 0)
			{
				minhere=a[i];
				xs=xe=i;
			}
			else
			{
				minhere+=a[i];
				xe++;
			}
			if(minhere <= minfar)
			{
				minfar=minhere;
				e=xe;
				s=xs;
			}
		}
		if(minfar>=0)
			cout<<maxSubArraySum(a,n)<<"\n";
		else
		{
			ll q1=0,y=0,q2=0;
			for(ll i=s-1;i>=0;i--)
			{
				y+=a[i];
				q1=max(q1,y);

			}
			y=0;
			for(ll i=e+1;i<n;i++)
			{
				y+=a[i];
				q2=max(q2,y);

			}
			cout<<max(q1+q2+(minfar*x), maxSubArraySum(a,n))<<"\n";

		}




	}



	return 0;
}