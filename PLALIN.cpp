/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COLLEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
		int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int j=0;
		while(s[j]=='0'){ j++;} s=s.substr(j);
		
		int l=s.length(),test;
		if(l==0) { cout<<"1"<<endl; continue;}
		if(l==1){ if(s[0]=='9') cout<<"11"<<endl; else cout<<char(s[0]+1)<<endl; continue;}
		if(l%2==0)
		{
			test=0;
			 int left=l/2-1,right=l/2;
			for(int i=0;i<l/2;i++)
			{
				if(s[left-i]==s[right+i])
				    continue;
			    if(s[right+i]<s[left-i]){ test=1; break;}
			    if(s[right+i]>s[left-i]){ test=0; break;}
			}
			if(test==1)
			{
				for(int i=0;i<=left;i++) cout<<s[i];
				for(int i=left;i>=0;i--) cout<<s[i];
				cout<<endl;
			}
			if(test==0)
			{
				int x=left;
				while(s[x]=='9' ){ s[x]='0';x--;if(x==-1) break;}
				if(x==-1) { cout<<"1";} else { s[x]=(char)(s[x]+1);}
				for(int i=0;i<=left;i++) cout<<s[i];if(x==-1) left--;
				for(int i=left;i>=0;i--) cout<<s[i];
				if(x==-1) { cout<<"1";}
				cout<<endl;
			}
		}
		else if(l%2==1)
		{
			test=0;
			int mid=(l-1)/2;
			int left=mid-1,right=mid+1;
			for(int i=0;i<mid;i++)
			{
				if(s[left-i]==s[right+i])
				    continue;
			    if(s[right+i]<s[left-i]){ test=1; break;}
			    if(s[right+i]>s[left-i]){ test=0; break;}
			}
			if(test==1)
			{
				for(int i=0;i<=mid;i++) cout<<s[i];
				for(int i=left;i>=0;i--) cout<<s[i];
				cout<<endl;
			}
			if(test==0)
			{
				int x=mid;
				while(s[x]=='9' ){ s[x]='0';x--;if(x==-1) break;}
				if(x==-1) { cout<<"1";} else { s[x]=(char)(s[x]+1);}
				for(int i=0;i<=mid;i++) cout<<s[i];if(x==-1) left--;
				for(int i=left;i>=0;i--) cout<<s[i];
				if(x==-1) { cout<<"1";}
				cout<<endl;
			}
		}
		
			
	}



	return 0;
}