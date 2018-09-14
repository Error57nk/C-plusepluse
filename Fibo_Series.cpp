#include<iostream>
using namespace std;
int main()
{
	int fibo[100],n,next=0;
	cout<<"Enter the Toltal no of elements of Fibonaci series \n";
	cin>>n;
	int a=1;
	int b=1;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
		next=1;	
		}
		else
		{
			next=a+b;
			a=b;
			b=next;
		}
		fibo[i]=next;
		cout<<"\n"<<next;
	}
}
