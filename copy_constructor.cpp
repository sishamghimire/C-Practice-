#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		char name[];
		int age;
		int roll;
	public:
		student(char n[],int a,int r)
		{
			strcpy(n,"name");
			age=a;
			roll=r;
		}
	student(student&h)	
	{
		strcpy(name,h.name);
		roll=h.roll;
		age=h.age;
		
	}
	void display()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Roll No:"<<roll<<endl;
		cout<<"Age"<<age<<endl;	
	}
};
int main()
{
	cout<<"This is my file."<<endl;
	student s1("SISHAM",20,22);
	s1.display();
	cout<<"This is my copy."<<endl;
	student s2(s1);
	s2.display();
	
	}
