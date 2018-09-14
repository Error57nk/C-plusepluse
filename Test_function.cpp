#include<iostream>
using namespace std;
void xy(int x,int a[]);
int main()
{
	int a[100],n=10;
	xy(n,a);
	for(int i=0;i<n;i++)
	{
		cout<<"	"<<a[i];
	}
}
void xy(int x,int a[])
{	int p=0;

	for(int i=0;p<x;i++)
	{
		if(i%2==0)
		{
			a[p]=i;
			p++;
		}
	}
}
