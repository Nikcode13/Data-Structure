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
    int arr[20];
    int size,i,j;
    clrscr();

    cout<<"enter size of an array = ";
    cin>>size;
    cout<<"enter element of array = \n";
    for(i=0;i<size;i++)
    {
	cin>>arr[i];
    }

    cout<<"array befor sorting =\n";
    printArr(arr,size);


    for(i=0;i<size-1;i++)
    {
	for(j=0;j<size-i-1;j++)
	{
	     if(arr[j]>arr[j+1])
	     {
		 int temp =arr[j];
		     arr[j]=arr[j+1];
		     arr[j+1]=temp;
	     }
	}
    }
    cout<<"\n array after sort = \n";
    printArr(arr,size);
    getch();
}


Output :

enter size of an array =5
enter element of array =
7 8 3 1 2



































