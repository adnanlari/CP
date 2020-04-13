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

string convert(int i)
{
	string a="";
	while(i!=0)
	{
		if(i&1)
			a="1"+a;
		else
			a="0"+a;
		i/=2;
	}
	int x=a.length();
	for(int j=1;j<=5-x;j++)
		a="0"+a;
	return a;
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
		ll n;
		cin>>n;
		map <string,ll> X;
		string s[n];
		for(ll i=0;i<n;i++)
		{
			cin>>s[i];
			map <char,int> hash;
			for(int j=0;s[i][j]!='\0';j++)
				hash[s[i][j]]=1;
			string key="";
			if(hash['a'])
				key+="1";
			else
				key+="0";
			if(hash['e'])
				key+="1";
			else
				key+="0";
			if(hash['i'])
				key+="1";
			else
				key+="0";
			if(hash['o'])
				key+="1";
			else
				key+="0";
			if(hash['u'])
				key+="1";
			else
				key+="0";
			s[i]=key;
			X[key]++;
		}
		ll ans=0,f1;
		for(int i=0;i<32;i++)
		{
			string b=convert(i);
			if(X[b])
			{
				for(int j=0;j<32;j++)
				{
					string a=convert(j);
					//cout<<a<<"\n";
					int flag=0;
					for(int x=0;x<5;x++)
					{
						if(b[x]=='0' && a[x]=='0')
							flag=1;
					}
					if(!flag)
					{
						//cout<<a<<" "<<i<<" "<<X[a]<<"\n";
						
						if(a=="11111" && b=="11111")
							ans+=(X[a]*(X[b]-1))/2;
						else
							ans+=X[a]*X[b];

						f1=1;
					}
				}
					X[b]=0;
			}
		}
		/*ans+=X["a"]*(X["eiou"]+X["aeiou"]);
		ans+=X["e"]*(X["aiou"]+X["aeiou"]);
		ans+=X["i"]*(X["aeou"]+X["aeiou"]);
		ans+=X["o"]*(X["aeiu"]+X["aeiou"]);
		ans+=X["u"]*(X["aeio"]+X["aeiou"]);
		ans+=X["ae"]*(X["iou"]+X["aiou"]+X["eiou"]+X["aeiou"]);
		ans+=X["ai"]*(X["eou"]+X["aeou"]+X["eiou"]+X["aeiou"]);
		ans+=X["ao"]*(X["eiu"]+X["aeiu"]+X["eiou"]+X["aeiou"]);
		ans+=X["au"]*(X["eio"]+X["aeio"]+X["eiou"]+X["aeiou"]);
		ans+=X["ei"]*(X["aou"]+X["aeou"]+X["aiou"]+X["aeiou"]);
		ans+=X["eo"]*(X["aiu"]+X["aeiu"]+X["aiou"]+X["aeiou"]);
		ans+=X["eu"]*(X["aio"]+X["aeio"]+X["aiou"]+X["aeiou"]);
		ans+=X["io"]*(X["aeu"]+X["aeiu"]+X["aeou"]+X["aeiou"]);
		ans+=X["iu"]*(X["aeo"]+X["aeou"]+X["aeio"]+X["aeiou"]);
		ans+=X["ou"]*(X["aei"]+X["aeio"]+X["aeiu"]+X["aeiou"]);
		ans+=X["aei"]*(X["aou"]+X["eou"]+X["iou"]+X["aiou"]+X["aeou"]+X["eiou"]+X["aeiou"]);
		ans+=X["aeo"]*(X["aiu"]+X["eiu"]+X["iou"]+X["aeiu"]+X["aiou"]+X["eiou"]+X["aeiou"]);
		ans+=X["aeu"]*(X["aio"]+X["eio"]+X["iou"]+X["aeio"]+X["aiou"]+X["eiou"]+X["aeiou"]);
		ans+=X["aio"]*(X["eiu"]+X["eou"]+X["aeiu"]+X["aeou"]+X["eiou"]+X["aeiou"]);
		ans+=X["aiu"]*(X["eiu"]+X["eou"]+X["aeio"]+X["aeou"]+X["eiou"]+X["aeiou"]);
		ans+=X["aou"]*(X["eio"]+X["eiu"]+X["aeio"]+X["aeiu"]+X["eiou"]+X["aeiou"]);
		ans+=X["eio"]*(X["aeiu"]+X["aiou"]+X["aeou"]+X["aeiou"]);
		ans+=X["eiu"]*(X["aeio"]+X["aiou"]+X["aeou"]+X["aeiou"]);
		ans+=X["eou"]*(X["aeio"]+X["aeiu"]+X["aiou"]+X["aeiou"]);
		ans+=X["iou"]*(X["aeio"]+X["aeiu"]+X["aeou"]+X["aeiou"]);
		ll total=X["aeio"]+X["aeiu"]+X["aiou"]+X["aeou"]+X["eiou"]+X["aeiou"];
		ans+=X["aeio"]*(total-X["aeio"]);
		ans+=X["aeiu"]*(total-X["aeiu"]);
		ans+=X["aiou"]*(total-X["aiou"]);
		ans+=X["aeou"]*(total-X["aeou"]);
		ans+=X["eiou"]*(total-X["eiou"]);
		ans+=(X["aeiou"]*(X["aeiou"]-1))/2;*/
		cout<<ans<<"\n";


	}



	return 0;
}	