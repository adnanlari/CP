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
    
	ll q;
	cin>>q;
	while(q--)
	{
		string s;
		cin>>s;
		s="0"+s;
		int i,j;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='2')
			{
				for(j=i;j>=0;j--)
				{
					if(s[j]=='0')
						break;
				}
				break;
			}
		}
		s[j]='1';
		for(i=j+1;s[i]!='\0';i++)
			s[i]=
	}



	return 0;
}