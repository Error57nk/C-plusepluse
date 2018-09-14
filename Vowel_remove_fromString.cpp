#include<iostream>
using namespace std;
int main()
{
	char a[20];
	int i;
	cout<<"Enter the Word to extract vowel and replace it with * \n";
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' ||a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			a[i]='*';
		}
	}
	cout<<"\n"<<a;
}
