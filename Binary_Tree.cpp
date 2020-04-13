/*************************************************************
* Name : Adnan Masroor 
* Roll : 17CS8053
* Implementation of binary search tree using class and objects.
*************************************************************/


#include <bits/stdc++.h>
using namespace std;

class BSTN
{
public:
	int v;
	BSTN* l;
	BSTN* r;

	BSTN()
	{
		v=0;
		l=r=NULL;
	}
	BSTN(int x)
	{
		v=x;
		l=r=NULL;
	}
};

class BST
{
public:
	BSTN *root;
	int cn,tc;
	BST()
	{
		root=NULL;
		tc=cn=0;
	}
	BSTN* insert(BSTN* temp,int x);
	int search(int x);
	void preorder(BSTN *temp);
	void postorder(BSTN *temp);
	void inorder(BSTN *temp);
	int avg_search(BSTN* temp);
	~BST()
	{
		root=NULL;
	}
};

BSTN* BST::insert(BSTN* temp,int x)
{
	if(temp== NULL) return (new BSTN(x));
	if(x<(*temp).v)
		temp->l=insert(temp->l,x);
	else
		temp->r=insert(temp->r,x);

	return temp;
}


int BST::search(int x)
{
	BSTN *temp=root;
	int cc=1;
	while(temp!=NULL)
	{
		if((*temp).v == x)
			return cc;
		else if((*temp).v < x)
			temp=temp->r;
		else if((*temp).v > x)
			temp=temp->l;
		cc++;
	}
	return 0;
}

void BST::preorder(BSTN* temp)
{
	if(temp!=NULL)
	{
		cout<<(*temp).v<<" ";
		preorder(temp->l);
		preorder(temp->r);
	}
}

void BST::inorder(BSTN* temp)
{
	if(temp!=NULL)
	{
		inorder(temp->l);
		cout<<(*temp).v<<" ";
		inorder(temp->r);
	}
}

void BST::postorder(BSTN* temp)
{
	if(temp!=NULL)
	{
		postorder(temp->l);
		postorder(temp->r);
		cout<<(*temp).v<<" ";
	}
}

int BST::avg_search(BSTN* temp)
{
	int t=0;
	if(temp!=NULL)\
	{
		t=search((*temp).v);
		t+=avg_search(temp->l);
		t+=avg_search(temp->r);
	}

	return t;
}


int main()
{
	srand(time(0));
	BST myBST;
	vector <int> V;
	int x;
	while(V.size()<10)
	{
		x=rand()%50;
		int flag=0;
		for(int i=0;i<V.size();i++)
		{
			if(V[i]==x)
				flag=1;
		}
		if(!flag)
		{
			V.push_back(x);
		}
	}
	for(int i=0;i<10;i++)
	{
		myBST.root=myBST.insert(myBST.root,V[i]);
	}
	cout<<"Preorder : ";
	myBST.preorder(myBST.root);
	cout<<"\n";
	cout<<"Inorder : ";
	myBST.inorder(myBST.root);
	cout<<"\n";
	cout<<"Postorder : ";
	myBST.postorder(myBST.root);
	cout<<"\n";
	//cout<<myBST.cn<<"\n";
	while(1)
	{
		cout<<"Enter the element to search(-1 to terminate) : ";
		cin>>x;
		if(x==-1)
			break;
		int q=myBST.search(x);
		if(q)
			cout<<"Successful!\n";
		else
			cout<<"Unsuccessful!\n";
	}

	cout<<"Average Comparison : "<<myBST.avg_search(myBST.root)/10<<"\n";


}
