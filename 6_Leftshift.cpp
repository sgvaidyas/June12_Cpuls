#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n How many elements do u want to enter for a = ";
	cin>>n;	
	int a[n];	
	cout<<"\n Enter the array ele =";
	for(int i=0;i<n;i++)
		cin>>a[i];	
	
	cout<<"\n ARRAY =\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	//left shift
	int temp = a[0];
	for(int i=0;i<n-1;i++)
		a[i] = a[i+1];		
	a[n-1]=temp;	
	
	cout<<"\n RIGHT SHIFT =\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";		
}
