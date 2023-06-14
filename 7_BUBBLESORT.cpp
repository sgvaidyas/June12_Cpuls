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
	int temp;
	//bubble sort
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) //ASCENDING
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}		
	cout<<"\n SORTED ARRAY =\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";		
}
