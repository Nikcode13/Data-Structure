#include<iostream.h>
#include<conio.h>
void mergeSort(int arr[],int si,int mid,int ei)
{
    int n=ei-si+1;
    int merged[n];

    int idx1,idx2,x;
     idx1=si;
     idx2=mid+1;
     x=0;

    while(idx1<=mid && idx2<=ei)
    {
	if(arr[idx1]<arr[idx2])
	{
	     merged[x++]=arr[idx1++];
	}
	else
	{
	     merged[x++]=arr[idx2++];
	}
    }
    while(idx1<=mid)
    {
      merged[x++]=arr[idx1++];
    }
    while(idx2<=ei)
    {
      merged[x++]=arr[idx2++];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<size;i++)
    {
	arr[i]=merged[i];
    }

}
void devide(int arr[],int si,int ei)
{
    if(si>ei){
       return;
    }
    int mid=(si+ei)/2;
    devide(arr,si,mid);
    devide(arr,mid+1,ei);
    mergeSort(arr,si,mid,ei);
}
void print(int arr[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
void main()
{
   int arr[20],size,i;
   clrscr();
   cout<<"enter size of an array = ";
   cin>>size;
   cout<<"enter element in array = \n";
   for(i=0;i<size;i++)
   {
       cin>>arr[i];
   }
   cout<<"array befor sorting = \n";
   print(arr,size);
   devide(arr,0,size-1);

   cout<<"array after sorting = \n";
   print(arr,size);

   getch();
}









































