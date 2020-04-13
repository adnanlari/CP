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

ll s[50001];

void four(ll i)
{
	ll a,b,c,d;
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
	cout.flush();
	cin>>a;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+4<<endl;
	cout.flush();
	cin>>b;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+3<<" "<<i+4<<endl;
	cout.flush();
	cin>>c;
	cout.flush();
	cout<<"1 "<<i+2<<" "<<i+3<<" "<<i+4<<endl;
	cout.flush();
	cin>>d;
	cout.flush();
	s[i+1]=a^b^c;
	s[i+2]=a^b^d;
	s[i+3]=a^c^d;
	s[i+4]=b^c^d;
}

void five(ll i)
{
	ll a,b,c,d,e;
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
	cout.flush();
	cin>>a;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+4<<endl;
	cout.flush();
	cin>>b;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+3<<" "<<i+5<<endl;
	cout.flush();
	cin>>c;
	cout.flush();
	cout<<"1 "<<i+5<<" "<<i+3<<" "<<i+4<<endl;
	cout.flush();
	cin>>d;
	cout.flush();
	cout<<"1 "<<i+5<<" "<<i+2<<" "<<i+4<<endl;
	cout.flush();
	cin>>e;
	cout.flush();
	s[i+1]=a^d^e;
	s[i+2]=b^c^d;
	s[i+3]=b^c^e;
	s[i+4]=a^c^e;
	s[i+5]=a^b^d;
}

void six(ll i)
{
	ll a,b,c,d,e,f;
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
	cout.flush();
	cin>>a;
	cout.flush();
	cout<<"1 "<<i+2<<" "<<i+4<<" "<<i+5<<endl;
	cout.flush();
	cin>>b;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+2<<" "<<i+6<<endl;
	cout.flush();
	cin>>c;
	cout.flush();
	cout<<"1 "<<i+3<<" "<<i+4<<" "<<i+6<<endl;
	cout.flush();
	cin>>d;
	cout.flush();
	cout<<"1 "<<i+1<<" "<<i+5<<" "<<i+4<<endl;
	cout.flush();
	cin>>e;
	cout.flush();
	cout<<"1 "<<i+3<<" "<<i+6<<" "<<i+5<<endl;
	cout.flush();
	cin>>f;
	cout.flush();
	s[i+1]=d^e^f;
	s[i+2]=b^d^f;
	s[i+3]=a^b^e;
	s[i+4]=a^c^d;
	s[i+5]=a^c^f;
	s[i+6]=b^c^e;
}

int main()
{
	IOS
	/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    int t;
    cin>>t;
    cout.flush();
    while(t--)
    {
    	ll n,flag=0,i=0,j,k;
    	cin>>n;
    	cout.flush();
    	j=n;
    	flag=n%4;
    	if(flag==3)
    		n-=11;
    	if(flag==2)
    		n-=6;
    	if(flag==1)
    		n-=5;
    	while(i!=n)
    	{
    		four(i);
    		i+=4;
    	}
    	if(flag==3)
    	{
    		five(i);
    		i+=5;
    		six(i);
    		i+=6;
    	}
    	if(flag==2)
    	{
    		six(i);
    		i+=6;
    	}
    	if(flag==1)
    	{
    		five(i);
    		i+=5;
    	}
    	cout<<"2 ";
    	for(k=1;k<=j;k++)
    		cout<<s[k]<<" ";
    	cout.flush();
    	cin>>k;
    	if(k==-1)
    		break;

    }

    
	



	return 0;
}