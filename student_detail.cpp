#include<iostream>
using namespace std;
int main(){
class student
{
	private:
		int roll;
		char name[20];
	public:
		void input(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter roll no:";
			cin>>roll;
			
		}
		void display(){
			cout<<"\n Name:"<<name;
			cout<<"\n Roll no:"<<roll;
			
		};
		int main(){
			student s1;
			s1.input();
			s1.display();
		}
}
}
