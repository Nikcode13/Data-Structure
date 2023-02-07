//program to demonstreat selection sort
#include<iostream.h>
#include<conio.h>
void printArr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}
void main()
{
     int arr[20],size,i,j,temp;
     clrscr();
     cout<<"enter size of an array = ";
     cin>>size;
     cout<<"enter element of array =\n";
     for(i=0;i<size;i++)
     {
	cin>>arr[i];
     }
     cout<<"Array befor selection sorting= \n";
     printArr(arr,size);

     for(i=0;i<size-1;i++)
     {
	 int small=i;
	 for(j=i+1;j<size;j++)
	 {
	     if(arr[small] > arr[j])
	     {
		 small=j;
	     }
	 }
	 temp=arr[i];
	 arr[i]=arr[small];
	 arr[small]=temp;
     }
     cout<<"\n Array after selection sorting = \n";
     printArr(arr,size);
     getch();
}











