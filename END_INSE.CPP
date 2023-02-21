//Program to demonstrate insert an element in array at last position
//(24-1-2023)(Rollno=>04)

#include<conio.h>
#include<iostream.h>
void main()
{
    int arr[20],i,size,elem;
    clrscr();

    cout<<"enter size of array =";
    cin>>size;
    cout<<"enter element of an array =\n";

    for(i=0;i<size;i++)
    {
	cin>>arr[i];
    }

    cout<<"array before insertion =\n";
    for(i=0;i<size;i++)
    {
	cout<<arr[i]<<" ";
    }

    cout<<"\nenter element to insert in array =";
    cin>>elem;

    arr[i]=elem;

    cout<<"array after insertion =\n";

    for(i=0;i<size+1;i++)
    {
	cout<<arr[i]<<" ";
    }
    getch();
}


/*output :-

enter size of aan arrry =5
enter arry element =
1 2 3 4 5
array befor insertion =
1 2 3 4 5
enter element to insert = 6
array after insertion =
1 2 3 4 5 6
*/
