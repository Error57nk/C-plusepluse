#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=0;
	cout<<"Find prime no. b/w 0 to....?\n";
	cin>>n;
	for(i=2;i<n;i++)
	{
		k=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				k++;
			}
			
		}
		if(k<1)
		{
			cout<<"	"<<i;
		}
		
		
	}
}
