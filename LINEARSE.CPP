#include<iostream.h>
#include<conio.h>
void main()
{
     int arr[]={8,7,3,1,2};
     int size=sizeof(arr)/sizeof(arr[0]);
     int ele,count=0;
     clrscr();
     cout<<"enter the element which have to find = ";
     cin>>ele;
     for(int i=0;i<size;i++)
     {
       if(arr[i]==ele)
       {
	  count++;
       }
     }
     if(count==0)
     {
	  cout<<"element is not present";
     }
     else
     {
	  cout<<"element is present";
     }
   getch();

}
























































