//Function overloading 
#include <iostream>
using namespace std;
int sum(int a){
	return a;
}
int sum(int a,int b){
	return a+b;
}
int sum(int a,int b,int c){
	return a+b+c;
}
int main(){
	cout<<"sum is:"<<sum(5)<<endl;
	cout<<"sum is:"<<sum(5,6)<<endl;
	cout<<"sum is:"<<sum(5,6,4);
	return 0;
}
