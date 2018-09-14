#include<iostream>
using namespace std;
int main()
{
	int i=2,j,n,k=0,p=0,prim[50];
	cout<<"Enter the total no of Prime you want";
	cin>>n;
	while(p<n)
	{
		k=0;
		
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k++;
				break;
			}
			
		}
		if(k<1)
		{
			
			prim[p]=i;
			p++;
		}
		i++;
		
	}
	p=0;
	while(p<n)
	{
		cout<<"	"<<prim[p];
		p++;
	}
}
