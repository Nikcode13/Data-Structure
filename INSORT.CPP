//program to demonsteat insertion sort
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
    int arr[20],size,i,j,current;
    clrscr();
    cout<<"enter size of an array = ";
    cin>>size;
    cout<<"enter element of array = ";
    for(i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    cout<<"Array before insertion sort = \n";
    printArr(arr,size);

    for(i=1;i<size;i++)
    {
	current=arr[i];
	j=i-1;
	while(j>=0 && current<arr[j])
	{
	    arr[j+1]=arr[j];
	    j--;
	}
	arr[j+1]=current;
    }
    cout<<"\nArray after insertion sort = \n";
    printArr(arr,size);
    getch();

}









