#include<iostream>
using namespace std;
int main()
{
	char a[10]={'a','2','c','4','5','w','9','p','u','\0'};
	char c[5],n[5];
	int i=0,c1=0,n1=0;
	for(i=0;i<=5;i++)
	{
		c[i]='\0';
		n[i]='\0';
	}
	i=0;
	while(a[i]!='\0')
	{
		if((int)a[i]>=97 && (int)a[i]<=122)
		{
			c[c1]=a[i];
			c1++;
			
		}
		else if((int)a[i]>=48 && (int)a[i]<=57)
		{
			n[n1]=a[i];
			n1++;
		}
		i++;
	}
	cout<<"Char are \n";
	for(i=0;c[i]!='\0';i++)
	{
		cout<<c[i];
	}
	cout<<"\n Num are \n";
	for(i=0;n[i]!='\0';i++)
	{
		cout<<n[i];
	}
	
}
