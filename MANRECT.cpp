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
	/*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif*/
	//the main code starts here
    
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d,x1,x2,y1,y2,k,h;
		cout<<"Q 0 0"<<endl;
		cout.flush();
		cin>>a;
		cout.flush();
		//cout<<a<<endl;
		cout<<"Q 0 1000000000"<<endl;
		cout.flush();
		cin>>b;
		cout.flush();
		//cout<<a<<b<<endl;
		cout<<"Q 1000000000 0"<<endl;
		cout.flush();
		cin>>c;
		cout.flush();
		//cout<<a<<b<<c<<endl;
		cout<<"Q 1000000000 1000000000"<<endl;
		cout.flush();
		cin>>d;
		cout.flush();
		//cout<<a<<b<<c<<d<<endl;
		h=(a-c+1000000000)/2;
		cout<<"Q "<<h<<" 0\n";

		cout.flush();
		cin>>k;
		cout.flush();
				//cout<<a<<b<<c<<d<<k<<"\n";

		
		y1=k;
		x1=a-y1;
		y2=x1+1000000000-b;
		x2=1000000000+y1-c;
		cout<<"A "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n";
		cout.flush();
		cin>>h;
		cout.flush();
		if(h!=1)
			break;


	}



	return 0;
}