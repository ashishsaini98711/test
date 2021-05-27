#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int smallest, secondSmallest, i, n;
	int a[20];
	cout<<"Enter the number of element you want to enter in the array:-\n";
	cin>>n;
	cout<<"Enter the elements of the array:-\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	smallest=a[i];
	secondSmallest=a[i];

	for(i=0;i<n;i++)
	{
		if(a[i]<smallest)
		{
			smallest=a[i];
		}
	}

	for(i=0;i<n;i++)
	{
		if(a[i]<secondSmallest && a[i]!=smallest)
		{
			secondSmallest=a[i];
		}
	}
	cout<<"\nTHe smallest element in array;-"<<smallest;
	cout<<"\nTHe second smallest element in array:-"<<secondSmallest;

	getch();


}