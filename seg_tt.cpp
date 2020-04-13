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

int build(int tree[],int node,int a[],int start,int end)
{
	if(start == end)
		tree[node]=a[start];
	else
	{
		int mid=(start+end)/2;
		build(tree,2*node,a,start,mid);
		build(tree,2*node+1,a,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
		if(a[mid] && a[mid+1])
			tree[node]-=1;
	}
}
int query(int tree[],int node,int a[],int start,int end,int l,int r)
{
	if(r<start || l>end)
		return -1;
	if(l<=start && r>=end)
		return tree[node];
	int mid=(start+end)/2;
	int p1=query(tree,2*node,a,start,mid,l,r);
	int p2=query(tree,2*node+1,a,mid+1,end,l,r);
	if(a[mid] && a[mid+1] && p1!=-1 && p2!=-1)
		return p1+p2-1;
	if(p1==-1)
		return p2;
	if(p2==-1)
		return p1;
	return p1+p2;
}
void update(int tree[],int node,int a[],int start,int end,int ind)
{
	if(start==end)
	{
		if(a[start])
		{
			a[start]=0;
			tree[node]=0;
		}
		else
		{
			a[start]=1;
			tree[node]=1;
		}
		return;
	}
	int mid=(start+end)/2;
	if(ind>=start && ind<=mid)
		update(tree,2*node,a,start,mid,ind);
	else
		update(tree,2*node+1,a,mid+1,end,ind);
	tree[node]=tree[2*node]+tree[2*node+1];
	if(a[mid] && a[mid+1])
		tree[node]-=1;
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
    int n,q;
    cin>>n>>q;
    int a[n+1],tree[3*n+5];
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    build(tree,1,a,1,n);
    // for(int i=1;i<=9;i++)
    // 	cout<<tree[i]<<" ";
    // cout<<"\n";
    while(q--)
    {
    	int c,x,y;
    	cin>>c;
    	if(c==1)
    	{
    		cin>>x;
    		update(tree,1,a,1,n,x);
    		// for(int i=1;i<=9;i++)
    		// 	cout<<tree[i]<<" ";
    		// cout<<"\n";
    		// for(int i=1;i<=n;i++)
    		// 	cout<<a[i]<<" ";
    		// cout<<"\n";
    	}
    	else if(c==2)
    	{
    		cin>>x>>y;
    		cout<<query(tree,1,a,1,n,x,y)<<"\n";
    	}

    }
	



	return 0;
}