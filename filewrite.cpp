#include<iostream>
#include<fstream>
using namespace std;
int main()
{  
ofstream fwrite;
 fwrite.open("myfile1.txt");
 fwrite<<"This is Texas College of Management and IT";
 fwrite<<"\nShifal, Kathmandu";
 fwrite.close();
 }

