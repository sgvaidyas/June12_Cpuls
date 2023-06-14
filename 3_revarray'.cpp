#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5];
	int n=5;
	cout<<"\n Enter the elements  = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=0,j=n-1; i<n;j--,i++)
	{
		b[i] = a[j];
	}
	
	cout<<"\nArray A= ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<"\nArray B= ";
	for(int i=0;i<n;i++)
		cout<<b[i]<<"\t";
}
