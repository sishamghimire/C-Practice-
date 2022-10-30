#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return (a+b+c);
}
int diff(float a,float b)
{
	return (a-b);
}
int main()
{
	cout<<"The sum:"<<sum(10,23,65)<<endl;
	cout<<"The diffrence:"<<diff(10.0,12.88)<<endl;
	return 0;
	
}
