#include<iostream>
#include<fstream>
using namespace std;
class student{
	int roll;
	char name[100];
	char add[100];
	public:
		void displaydata()
		{
			cout<<"Roll no:"<<roll;
			cout<<"Address:"<<add;
			cout<<"Name:"<<name;
			
		}
};
int main()
{
	student s;fstream fread;
	fread.open("stuent1.data",ios::in);
	fread.read((char*)&s,sizeof(s));
	while(fread)
	{
		s.displaydata();
		fread.read((char*)&s,sizeof(s));
		
	}
fread.close();
	
}
