#include<iostream.h>
#include<conio.h>
void reverse(int arr[],int start,int end)
{
    if(start<=end)
    {
	int temp=arr[start];
	    arr[start]=arr[end];
	    arr[end]=temp;

	    reverse(arr,start+1,end-1);
    }
    return;
}
void main()
{
    clrscr();
    int arr[]={1,2,3,4,5};
    int n=5,i;
    cout<<"element in array = ";
    for(i=0;i<n;i++)
    {
	cout<<arr[i]<<" ";
    }
    reverse(arr,0,n-1);
    cout<<"\nReverse of an array = ";
    for(i=0;i<n;i++)
    {
	cout<<arr[i]<<" ";
    }
    getch();
}