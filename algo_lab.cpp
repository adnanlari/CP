
/**************************************************************
* Name: Adnan Masroor
* Roll: 17CS8053
* Problem 2;
**************************************************************/
#include <bits/stdc++.h>
using namespace std;

int isPalin(string s)
{
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]!=s[n-i-1])
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	cout<<"n = ";
	cin>>n;
	string s,x="",y;
	cout<<"S = ";
	cin>>s;
	x+=s[0];
	for(int i=1;i<n;i++)
	{
		if(s[i]!=x[x.length()-1])
			x+=s[i];
	}
	//the above loop elimintes the the repeating alphabets hence the subsequence obtained is the largest possible
	cout<<"Part I: "<<x<<'\n';
	vector <string> ans;
	for(int i=0;i<n;)
	{
		string x;
		for(int j=1;j<=n-i;j++)
		{
			if(isPalin(s.substr(i,j)))
				x=s.substr(i,j);
		}
		ans.push_back(x);
		i+=x.length();
	}
	cout<<"Part II: "<<ans.size()<<" substrings: ";
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<"\n";

	return 0;
}