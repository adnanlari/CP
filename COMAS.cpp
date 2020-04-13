/*******************************************
* AUTHOR : Adnan Masroor
* NICK : adnanlari
* COintEGE : NIT Durgapur
********************************************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define IOS ios::sync_with_stdio(0); cin.tie(0);

int main()
{
	IOS
	/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/
    
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,ans;
		cin>>n;
		set < int> s;
		set < int > :: iterator itr,itr1;
		for(int i=1;i<=n;i++)
			s.insert(i);
		if(n>6)
		{
			cout<<"? 1 2 3 4 5"<<endl;
			cout.flush();
			cin>>a>>b;
			cout.flush();
			s.erase(a);
			s.erase(b);
			for(int i=1;i<(n-5)/2;i++)
			{
				cout<<"? ";
				int count=0;
				for( itr=s.begin();itr!=s.end();++itr)
				{
					cout<<*itr<<" ";
					count++;
					if(count==5)
						break;
				}
				cout<<endl;
				cout.flush();
				cin>>a>>b;
				cout.flush();
				s.erase(a);
				s.erase(b);
			}
		
		if(s.size()==5)
			s.insert(a);
		}
		int x[7][8],m=1,o=1;
		for( itr=s.begin();itr!=s.end();++itr)
		{
			o=1;
			for(itr1=s.begin();itr1!=s.end();++itr1)
			{
				if(*itr != *itr1)
					{x[m][o]=*itr1;o++;}
			}
			m++;
		}
		int h1[101]={0};
		int h2[101]={0};
		for(int i=1;i<=6;i++)
		{
			cout<<"? ";
			for(int j=1;j<=5;j++)
				cout<<x[i][j]<<" ";
			cout<<endl;
			cout.flush();
			cin>>x[i][6];
			cin>>x[i][7];
			h1[x[i][6]]++;
			h1[x[i][7]]++;

		}
		for(int i=1;i<101;i++)
		{
			if(h1[i]==5)
				a=i;
			if(h1[i]==4)
				b=i;
		}
		for(int i=1;i<=6;i++)
		{
			if(x[i][6]==a && x[i][7]==b)
			{
				for(int j=1;j<=5;j++)
				{
					if(x[i][j]!=a && x[i][j]!=b)
						h2[x[i][j]]++;
				}
			}
		}
		for(int i=1;i<101;i++)
		{
			if(h2[i]==3)
				ans=i;
		}
		cout<<"! "<<ans<<endl;
		cout.flush();




	}



	return 0;
}