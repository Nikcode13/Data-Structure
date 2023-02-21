//Program to demonstrate insert an element in array
//(24-1-2023)(Rollno=>04)


#include<iostream.h>
#include<conio.h>
void main()
{
    int arr[15],i,size,pos,n;
    clrscr();

    cout<<"enter size of an arrry =";
    cin>>size;
    cout<<"enter arry element =\n";
    for(i=0;i<size;i++)
    {
	cin>>arr[i];
    }

    cout<<"array befor insertion =\n";
    for(i=0;i<size;i++)
    {
	cout<<arr[i]<<" ";
    }

    cout<<"\nenter element to insert = ";
    cin>>n;
    cout<<"\nenter position =";
    cin>>pos;

    for(i=size;i>=pos;i--)
    {
	arr[i]=arr[i-1];
    }
    arr[pos-1]=n;

    cout<<"\narray after insertion =\n";
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

enter position =3

array after insertion =
1 2 3 6 4 5
*/
