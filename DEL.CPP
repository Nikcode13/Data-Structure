// program to Delet element in an array

#include<iostream.h>
#include<conio.h>
void main()
{
    int arr[20],size,i,j,elem;
    clrscr();

    cout<<"enter size of an array =";
    cin>>size;
    cout<<"enter element of an array ="<<endl;
    for(i=0;i<size;i++)
    {
	cin>>arr[i];
    }

    cout<<"enter element you want to delet = ";
    cin>>elem;

    for(i=0;i<size;i++)
    {
	if(arr[i]==elem)
	{
	    for(j=i;j<size-1;j++)
	    {
		arr[j]=arr[j+1];
	    }
	}
    }

    cout<<"element in arry ="<<endl;
    for(i=0;i<size-1;i++)
    {
	cout<<arr[i]<<" ";
    }
    getch();
}



























































