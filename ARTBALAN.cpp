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
		string s;
		cin>>s;
		vector <ll> X(27),Y(27);
		for(ll f=0;f<27;f++)
			X[f]=0;
		X[0]=0;
		ll n=s.length(),ans=INT_MAX,flag=0;
		for(ll i=0;i<n;i++)
			X[s[i]-'A'+1]++;
		sort(X.begin(),X.end());
		/*for(ll f=1;f<=26;f++)
			cout<<X[f]<<"
		cout<<"\n";*/
		Y[0]=0;
		for(int i=1;i<=26;i++)
		{
			for(ll j=1;j<=26;j++)
				Y[j]=X[j];
			ll a,ans1=0;
			if(n%i)
				continue;
			else
				a=n/i;
			ll x,y,z;
			for(x=26;x>0;x--)
			{
				if(X[x]<a)
					break;
			}
			if(x==0)
				continue;
			for(y=26;y>0;y--)
			{
				if(X[y-1]==0)
					break;
			}
			//cout<<x<<"q"<<y<<" "<<a<<"r 1 ";
			for(z=26;z>(26-i);z--)
			{
				if(Y[z]==a)
					continue;
				else if(Y[z]>a)
				{
					ll c=Y[z]-a;
					//cout<<c<<" ";
					
					while(c!=0)
					{
						ll d=min(c,abs(a-Y[x]));
						ans1+=d;
						c-=d;
						Y[z]=Y[z]-d;
						Y[x]=Y[x]+d;
						if(Y[x]==a)	
							x-=1;
					}
				}
				else if(Y[z]<a)
				{
					ll c=a-Y[z];
					//cout<<c<<" ";
					while(c!=0)
					{
						ll d=min(c,Y[y]);
						ans1+=d;
						c-=d;
						Y[z]=Y[z]+d;
						Y[y]=Y[y]-d;
						if(Y[y]==0)
							y+=1;
					}
					//cout<<"q"<<y<<" ";
				}
			}
			ans=min(ans,ans1);
			/*cout<<"aa"<<ans1<<"\n";
			for(ll f=1;f<=26;f++)
				cout<<Y[f]<<" ";
			cout<<"\n";*/

		}
		cout<<ans<<"\n";



	}



	return 0;
}