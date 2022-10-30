#include<iostream>
using namespace std;
int main()
{
	int i,j;
	j=0;
	cout<<"Enter a number:";
	cin>>i;
	for(int count=1;count<=i;++count){
		j+=count;
	}
	cout<<"Sum="<<j<<endl;
	return 0;
}
