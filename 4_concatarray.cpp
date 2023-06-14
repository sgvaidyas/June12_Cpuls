#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"\n How many elements do u want to enter for a = ";
	cin>>n1;
	cout<<"\n How many elements do u want to enter for b = ";
	cin>>n2;
	n3=n1+n2;
	int a[n1],b[n2],c[n3];
	
	cout<<"\n Enter the elements  array A = \n";
	for(int i=0;i<n1;i++)
		cin>>a[i];
	
	cout<<"\n Enter the elements  array B = \n";
	for(int i=0;i<n2;i++)
		cin>>b[i];
	
	for(int i=0;i<n1;i++)
		c[i]=a[i];
		
	for(int i=0,j=n1;i<n2;j++,i++)
		c[j]=b[i];
	
	cout<<"\n Array elements of C = \n";
	for(int i=0;i<n3;i++)
		cout<<c[i]<<"\t";
	
}
