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
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,ans=0,sum=0,i;
		cin>>n;
		ll a[n];
		for( i=0;i<n;i++)
		{
			cin>>a[i];
			ans+=a[i];
		}
		ll k,x;
		cin>>k;
		cin>>x;
		if(x==0)
		{
			cout<<ans<<"\n";
			continue;
		}
		vector <ll> L,G;
		for(i=0;i<n;i++)
			L.pb((a[i]^x)-a[i]);
		sort(L.begin(),L.end(),greater<ll>());
		for(i=0;i<n;i++)
		{
			if(L[i]>0)
				sum+=L[i];
			else
				break;
		}
		
		
			if(i%2 && (!(k%2)||i<k))
			{
				sum-=L[i-1];
				if(i<n && L[i-1]+L[i] > 0)
					sum+=L[i-1]+L[i];
			}
			ans+=sum;
			//cout<<sum<<"h\n";
		
		cout<<ans<<"\n";

}


	return 0;
}