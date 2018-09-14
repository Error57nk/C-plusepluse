#include<iostream>
using namespace std;
void prime(int x,int p[]);
void fibo(int y,int f[]);
int main()
{	int n,i=0,p[100],f[100],a[200],x=0,y=0;
	cout<<"Enter the limit of Series.. \n";
	cin>>n;
	prime((n/2)+1,p);
	cout<<"\n";
	fibo((n/2)+1,f);
	while(i<n)
	{
		a[i]=f[x];
		i++;
		x++;
		a[i]=p[y];
		i++;
		y++;
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<a[i];
	}
	cout<<"\n THE OUTPUT IS :-  "<<a[n-1];
}
void prime(int x,int p[])
{	int v=0,i=2;
	while(v<x)
	{
		int k=0;
		
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k++;
				break;
			}
			
		}
		if(k<1)
		{
			
			p[v]=i;
			v++;
			cout<<"	"<<i;
		}
		i++;
		
	}
}
void fibo(int n,int f[])
{
	int a=1,next,b=1;
	f[0]=1;
	f[1]=1;
	for(int i=2;i<n;i++)
	{
		next=a+b;
		a=b;
		b=next;
		f[i]=next;
		cout<<"	"<<next;
	}
}

