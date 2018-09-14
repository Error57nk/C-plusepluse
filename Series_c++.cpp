using namespace std;
#include<iostream>
int main()
{
	float a[2000];
	int num=2,n;

	float res,pos;
	cout<<"Enter the position for result \n";
	cin>>n;
	a[0]=0;
	a[1]=0;
	int i=2;
	while(i<=n)
	{
		a[i]=num;
		num=num-1;
		i++;
		a[i]=num;
		num=num+3;
		i++;
	}
	for(i=0;i<=n;i++){
		cout<<a[i]<<"\n ";
	}
	cout<<"\n"<<a[n]<<"  and "<<a[n-1]<<"\n";
	pos=a[n-1]/2;
	cout<<pos;
	res=a[n]/pos;
	cout<<"\n the result is \n"<<res;
}
