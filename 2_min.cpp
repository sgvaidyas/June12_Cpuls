
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int n=5;
	cout<<"\n Enter the elements  = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int min = a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
	}
	cout<<"\n Min ele of the array = "<<min;	
}






