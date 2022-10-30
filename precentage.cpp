#include<iostream>
using namespace std;
int main()
{
	float p;
	int eng,math,comp,eph,sci;
	cout<<"Enter the marks of English:";
	cin>>eng;
	cout<<"Enter the marks of Math:";
	cin>>math;
	cout<<"Enter the marks of Computer:";
	cin>>comp;
	cout<<"Enter the marks of EPH:";
	cin>>eph;
	cout<<"Enter the marks of Science:";
	cin>>sci;
	p=(eng+math+comp+eph+sci)/5;
	if(p>=90){
		cout<<"A";
	}
	else if(p>=80){
		cout<<"B";
	}
	else if(p>=70){
		cout<<"C";
	}
	else if(p>=60){
		cout<<"D";
}
else 
cout<<"E";
return 0;
}
