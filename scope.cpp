#include<iostream>
using namespace std;
int my_var=0;
int main()
{
	int my_var=0;
	::my_var=1;
	my_var=2;
	cout<<::my_var<<" ,  "<<my_var;
	return 0;
}
