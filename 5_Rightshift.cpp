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
	//right shift
	int temp = a[n-1];
	for(int i=n-1;i>=1;i--)
		a[i] = a[i-1];		
	a[0]=temp;	
	
	cout<<"\n RIGHT SHIFT =\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";		
}
