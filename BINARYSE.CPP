#include<iostream.h>
#include<conio.h>
int binarySearch(int arr[],int beg,int end,int value)
{
    int mid;
    if(end>=beg)
    {
       mid=(beg+end)/2;
       if(arr[mid]==value)
       {
	   return mid;
       }
       else if(arr[mid]<value)
       {
	   return binarySearch(arr,mid+1,end,value);
       }
       else
       {
	   return binarySearch(arr,beg,mid-1,value);
       }
    }
    return -1;
}
void main()
{
   int arr[]={22,32,43,45,67,84};
   int size=sizeof(arr)/sizeof(arr[0]);
   clrscr();
   cout<<"array element = ";
   for(int i=0;i<size;i++)
   {
       cout<<arr[i]<<" ";
   }

   int value;
   cout<<"\nenter value to search = ";
   cin>>value;

   int count = binarySearch(arr,0,size-1,value);

   if(count==-1)
   {
       cout<<"element not present in array";
   }
   else
   {
       cout<<"element present at "<<count<<" index in array";
   }
   getch();
}