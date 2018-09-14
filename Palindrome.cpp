using namespace std;
#include<iostream>
int main()
{
	int num,temp,rev=0;
	cout<<"enter to chech palindrom no \n";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
	rev=rev*10;
	rev=rev+(temp%10);
	temp=temp/10;	
	}
	if(num==rev)
	{
		cout<<"\n YES!! The number is a Palindrom Number"<<rev;
	}
	else
	{
		cout<<"\n NO!! The number is not a Palindrome number "<<rev;
	}
}
