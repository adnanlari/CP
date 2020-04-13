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

map <char,ll> x;


ll convert(int b, string s)
{
	//cout<<s<<"fg\n";
	ll ans=0,l=s.length(),y=1;
	for(int i=l-1;i>=0;i--)
	{
		ans+=y*x[s[i]];
		if(ans>1000000000000)
			return -1;
		y*=b;
	}
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
    
	ll t;
	cin>>t;
	for(int i=48;i<58;i++)
		x[(char)i]=i-48;
	for(int i=65;i<91;i++)
		x[(char)i]=i-55;
	//cout<<x['A']<<'\n';
	while(t--)
	{
		ll n,k=0,z;
		cin>>n;
		ll b;
		string y;
		map <ll,ll> A;
		for(int i=0;i<n;i++)
		{
			cin>>b>>y;
			if(b!=-1)
			{
				z=convert(b,y);
				if(z!=-1)
					A[z]++;
			}
			else
			{
				k=0;
				for(int j=0;y[j]!='\0';j++)
				{
					if(x[y[j]]>k)
						k=x[y[j]];
				}
				//cout<<k<<"\n";
				for(int j=k+1;j<=36;j++)
				{
					z=convert(j,y);
					if(z!=-1)
						A[z]++;
				}
				
			}
		}
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<A[i].size();j++)
		// 		cout<<A[i][j]<<" ";
		// 	cout<<"\n";
		// }
		
		map <ll,ll> :: iterator itr;
		ll ans=-1;
		for (itr = A.begin(); itr != A.end(); ++itr)
			{
				if(itr->second == n)
				{
					ans=itr->first;
					break;
				}
			}

			cout<<ans<<"\n";


	}



	return 0;
}