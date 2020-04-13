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
ll M=998244353;

ll power(ll a,ll b)
{
	ll res=1;
	while(b>0)
	{
		if(b&1)
			res=(res*a)%M;
		b=b>>1;
		a=(a*a)%M;
	}
	return res;
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
	while(t--)
	{
		string s;
		ll cnt=0,e=1;
		cin>>s;
		stack <tuple<ll,ll,ll,ll>> X;
		tuple <ll,ll,ll,ll> x,y,z;
		stack <char> op;
		for(ll i=0;s[i]!='\0';i++)
		{
			//cout<<s[i];
			if(s[i]=='#')
			{
				X.push(make_tuple(e,e,e,e));
				cnt++;
			}
			else if(s[i]=='&' || s[i]=='|' || s[i]=='^')
				op.push(s[i]);
			else if(s[i]==')')
			{
				x=X.top();
				X.pop();
				y=X.top();
				X.pop();
				char c=op.top();
				op.pop();
				//cout<<"jkj";
				if(c=='&')
				{
					get<0>(z)=(get<0>(x)*get<0>(y)+get<0>(x)*get<1>(y)+get<0>(x)*get<2>(y)+get<0>(x)*get<3>(y)+get<1>(x)*get<0>(y)+get<2>(x)*get<0>(y)+get<2>(x)*get<3>(y)+get<3>(x)*get<0>(y)+get<3>(x)*get<2>(y))%M;
					get<1>(z)=(get<1>(x)*get<1>(y))%M;
					get<2>(z)=(get<1>(x)*get<2>(y)+get<2>(x)*get<1>(y)+get<2>(x)*get<2>(y))%M;
					get<3>(z)=(get<1>(x)*get<3>(y)+get<3>(x)*get<1>(y)+get<3>(x)*get<3>(y))%M;
				}
				if(c=='|')
				{
					get<0>(z)=(get<0>(x)*get<0>(y))%M;
					get<1>(z)=(get<0>(x)*get<1>(y)+get<1>(x)*get<0>(y)+get<1>(x)*get<1>(y)+get<1>(x)*get<2>(y)+get<1>(x)*get<3>(y)+get<2>(x)*get<1>(y)+get<2>(x)*get<3>(y)+get<3>(x)*get<1>(y)+get<3>(x)*get<2>(y))%M;
					get<2>(z)=(get<0>(x)*get<2>(y)+get<2>(x)*get<0>(y)+get<2>(x)*get<2>(y))%M;
					get<3>(z)=(get<0>(x)*get<3>(y)+get<3>(x)*get<0>(y)+get<3>(x)*get<3>(y))%M;
				}
				if(c=='^')
				{
					get<0>(z)=(get<0>(x)*get<0>(y)+get<1>(x)*get<1>(y)+get<2>(x)*get<2>(y)+get<3>(x)*get<3>(y))%M;
					get<1>(z)=(get<0>(x)*get<1>(y)+get<1>(x)*get<0>(y)+get<2>(x)*get<3>(y)+get<3>(x)*get<2>(y))%M;
					get<2>(z)=(get<0>(x)*get<2>(y)+get<1>(x)*get<3>(y)+get<2>(x)*get<0>(y)+get<3>(x)*get<1>(y))%M;
					get<3>(z)=(get<0>(x)*get<3>(y)+get<1>(x)*get<2>(y)+get<2>(x)*get<1>(y)+get<3>(x)*get<0>(y))%M;
				}

				X.push(z);
			}

		}
		z=X.top();
		X.pop();
		ll den=power(4,cnt);
		//cout<<den<<"\n";
		ll iden=power(den,M-2);
		cout<<((get<0>(z)*iden)%M)<<" ";
		cout<<((get<1>(z)*iden)%M)<<" ";
		cout<<((get<2>(z)*iden)%M)<<" ";
		cout<<((get<3>(z)*iden)%M)<<"\n";



	}



	return 0;
}