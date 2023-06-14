/*
	0	1	2	3	4		n =5
	11	1	22	33	44		
							
max	44	i	a[i]	max<11			
		1	1	11<1			
		2	22	11<22	TRUE	max=22	
		3	33	22<33	TRUE	max=33	
		4	44	33<44	TRUE	max=44	
		*/
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int n=5;
	cout<<"\n Enter the elements  = \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int max = a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
	}
	cout<<"\n Max ele of the array = "<<max;	
}






