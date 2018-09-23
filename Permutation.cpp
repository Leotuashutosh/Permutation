#include<iostream>
using namespace std;
void perm(int a[],int k,int n)
{
	int t=0;
	if(k==n)
	{
		for(int i=0;i<n;i++)
		cout<<a[i];
		cout<<endl;
	}
	else
	{ 
	
		for(int i=k;i<n;i++)
		{ 
			t=a[k];a[k]=a[i];a[i]=t;
			perm(a,k+1,n);
			t=a[k];a[k]=a[i];a[i]=t;
		}
	}
}
int main()
{
	int a[20],n;
	cout<<" length of number";
	cin>>n;
	cout<<"enter digits of number whose permutation to be done";
	for(int i=0;i<n;i++)
	cin>>a[i];
	perm(a,0,n);
	return 0;
}
