using namespace std;
#include<iostream>
int main()
{
	int num;
	cout<<"\Enter the number to for check Prime \n";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0 && i!=num)
		{
			cout<<"\n NO!! the number is Not a Prime Number";
			return 0;
		}
	
	}
	cout<<"\n YES!! The Number is a prime Number"<<num;
}
