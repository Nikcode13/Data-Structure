#include<iostream.h>
#include<conio.h>
int fibo(int i)
{
   if(i<=1)
   {
      return i;
   }
   return fibo(i-1)+fibo(i-2);
}
void main()
{
   clrscr();
   int n,i;
   cout<<"enter number = ";
   cin>>n;
   for(i=0;i<n;i++)
   {
       cout<<fibo(i)<<" ";
   }
   getch();
}