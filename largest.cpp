#include <iostream>
using namespace std;
int main() 
{
    int i;
    float arr[100];
    
    for (i = 0; i < 10; ++i) 
	{
        cout<<"Enter number%d: ", i + 1;
        cin>>arr[i];
    }

    for (i = 1; i < 10; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
	cout<<"Largest element:"<<arr[0];

    return 0;
}
