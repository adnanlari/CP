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

ll convert(string x)
{
	ll k=0,l=x.length()-1,p=1;
	while(l>=0)
	{
		k+=(((int)x[l]-48)*p);
		p*=10;
		l--;

	}
	return k;


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
		cin>>s;
		s+="=";
		ll A[4],i=0,j=0,p=0;
		char B[4];
		for(ll a=0;s[a]!='\0';a++)
		{
			if(s[a]=='+' || s[a]=='-' || s[a]=='=')
			{
				string x=s.substr(p,a-p);
				//cout<<x<<"\n";
				A[i]=convert(x);
				B[i]=s[a];
				i++;
				p=a+1;
			}
		}
		ll ans=0;
		//cout<<B[0]<<" "<<B[1]<<" "<<B[2]<<" "<<B[3]<<"\n";
		//cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<"\n";
		if(B[0]=='+')
			ans=A[0]+A[1];
		else
			ans=A[0]-A[1];
		if(B[1]=='+')
			ans+=A[2];
		else
			ans-=A[2];
		if(ans==A[3])
			cout<<"Valid Equation\n";
		else
			cout<<"Invalid Equation\n";


	}



	return 0;
}