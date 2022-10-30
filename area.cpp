#include<iostream>
using namespace std;
float area(float l,float b)
{
	return(l*b);
}
int main()
{
	float l,b,a;
	cout<<"Enter a length%d:"<<l;
	cin>>l;
	cout<<"Enter a breadth%d:"<<b;
	cin>>b;
	a=area(l,b);
	cout<<"The area of rectriangle:"<<a;
	return 0;
}
	


