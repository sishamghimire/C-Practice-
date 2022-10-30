#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter a first number:";
	cin>>a;
	cout<<"Enter a second number:";
	cin>>b;
	cout<<"Enter a third number:";
	cin>>c;
	if(a>b&&a>c){
		cout<<"a is greater.";
	}
	else if(b<a&&b>c){
		cout<<"b is greater.";
	}
	else 
	cout<<"c is greater.";
	return 0;
}
