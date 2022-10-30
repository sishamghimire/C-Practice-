#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter a number from 1 to 7:";
	cin>>i;
	switch(i){
		case 1:
			cout<<"Sunday"<<endl;
			break;
		case 2:
			cout<<"Monday"<<endl;
			break;
		case 3:
			cout<<"Tuesday"<<endl;
			break;
		case 4:
			cout<<"Wednesday"<<endl;
			break;
		case 5:
			cout<<"Thuresday"<<endl;
			break;
		case 6:
			cout<<"Friday"<<endl;
			break;
		case 7:
			cout<<"Saturday"<<endl;
			break;
		  default:
		  	cout<<"The given value is dafault.";
		  	

	}
	
}
