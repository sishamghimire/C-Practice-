#include<iostream>
using namespace std;
int main()
{
	int i;
	int sum=0;
	float a[100];
	cout<<"Enter the elements:";
	for(i=1;i<10;i++)
	{
		cin>>a[i];
		
	}
	for(i=1;i<10;i++)
	{
		sum=sum+a[i];
	}
	cout<<"the sum is:"<<sum;
}
