
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20];
	int j,i,n;
	double median;
	cout<<"How many elements you want in ARRAY:-\n";
	cin>>n;
	cout<<"Enter the elements of ARRAY:-\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"THE ARRAY YOU ENTER IS: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	int temp=0;
	for(i=1;i<n;++i)
	{
		for (j=0;j<(n-i);++j)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\nTHE ARRAY YOU ENTER AFTER SORTING: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	if(n%2==0)
	{
		median=(a[(n-1)/2]+a[n/2])/2;
	}
	else
	{
		median=a[n/2];
	}
	cout<<"\nThe MEDIAN of the array is:-"<<median;
	getch();





}
