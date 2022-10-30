#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
	return (a+b+c);

}
int sum(int d,int e)
{
	return (d+e);
}
int sum(int f)
{
	return (f);
}
int main()
{
	cout<<"Sum of three number:"<<sum(10,23,33)<<endl;
	cout<<"Sum of two number:"<<sum(55,22)<<endl;
	cout<<"Sum of one number:"<<sum(11);
}
