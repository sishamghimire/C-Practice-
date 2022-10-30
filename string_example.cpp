#include<iostream>
using namespace std;
int main()
{
	string fullname, firstname, lastname;
	cout<<"Enter first name of user:";
	cin>>firstname;
	cout<<"Enter last name of user:";
	cin>>lastname;
	fullname=firstname.append(lastname);
	cout<<"The name of user is:"<<fullname;
	return 0;

}
