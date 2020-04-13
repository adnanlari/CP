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
    
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,ans=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
		{
			ll M[2001]={0};
			multiset <ll> S;
			multiset <ll> :: iterator itr;
			S.insert(a[i]);
			M[a[i]]++;
			itr=S.find(a[i]);
			if(M[M[*itr]])
				ans++;
			ll px=1,x,y;
			for(int j=i+1;j<n;j++)
			{
				y=(k/(j-i+1));
				if(k%(j-i+1))
					y++;
				x=(k/y);
				if(k%y)
					x++;
				S.insert(a[j]);
				M[a[j]]++;
				if(a[j]<(*itr))
					++px;
				if(px<=x)
				{
					while(px!=x)
					{
						++itr;
						++px;
					}
				}
				else
				{
					while(px!=x)
					{
						--itr;
						--px;
					}
				}
				if(M[M[*itr]])
				{
					//cout<<i<<" "<<j<<"\n";
					ans++;
				}

			}



		}
		cout<<ans<<"\n";
	}



	return 0;
}