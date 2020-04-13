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

ll n,c,y,x,l,u,m=1000,i,j,k,a;
void divide_by_1()
{
	y=l;
	while(1)
	{
		y=y+1;
		/*if(y>n)
		{
			divide_by_100();
			return;
		}*/
		cout<<"1 "<<y<<endl;
		m-=1;
		cout.flush();
		cin>>a;
		cout.flush();
		if(a==0)
			l=y;
		else if(a==1)
		{
			u=y;
			cout<<"2"<<endl;
			m-=150;
			cout<<"3 "<<y<<endl;
			cout.flush();
			return;
		}


	}
}

void divide_by_10()
{
	y=l;
	while(1)
	{
		y=y+10;
		if(y>n)
		{
			divide_by_1();
			return;
		}
		cout<<"1 "<<y<<endl;
		m-=1;
		cout.flush();
		cin>>a;
		cout.flush();
		if(a==0)
			l=y;
		else if(a==1)
		{
			u=y;
			cout<<"2"<<endl;
			m-=150;
			divide_by_1();
			return;
		}


	}
}

void divide_by_100()
{
	y=l;
	while(1)
	{
		y=y+100;
		if(y>n)
		{
			divide_by_10();
			return;
		}
		cout<<"1 "<<y<<endl;
		m-=1;
		cout.flush();
		cin>>a;
		cout.flush();
		if(a==0)
			l=y;
		else if(a==1)
		{
			u=y;
			cout<<"2"<<endl;
			m-=150;
			divide_by_10();
			return;
		}


	}
}





void divide_by_1000()
{
	y=l;
	while(1)
	{
		y=y+1000;
		if(y>n)
		{
			divide_by_100();
			return;
		}
		cout<<"1 "<<y<<endl;
		m-=1;
		cout.flush();
		cin>>a;
		cout.flush();
		if(a==0)
			l=y;
		else if(a==1)
		{
			u=y;
			cout<<"2"<<endl;
			m-=150;
			divide_by_100();
			return;
		}


	}
}





int main()
{
	IOS
	/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/

    cin>>n>>c;
    cout.flush();
    l=0;u=n;
    divide_by_1000();


	



	return 0;
}