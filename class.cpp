#include<iostream>
using namespace std;
class sum{
	private:
		int a,b;
		public:
			void getinput(){
				cout<<"Enter a number:";
				cin>>a;
				cout<<"Enter a second number:";
				cin>>b;
			}
			void display(){
				cout<<"sum is"<< a+b;
			}
	
	
};
int main(){
	sum s1;
	s1.getinput();
	s1.display();
	
}
