//program to demostrate multiplication of matrix

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int a[10][10],b[10][10],mul[10][10];
   int i,j,k,r,c;
   cout<<"enter number of row = ";
   cin>>r;
   cout<<"enter number of column = ";
   cin>>c;
   cout<<"enter the frist matrix element= \n";
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
	  cin>>a[i][j];
       }
   }
    cout<<"enter the second matrix element= \n";
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
	  cin>>b[i][j];
       }
   }
   cout<<"multiply of two matrix = \n";
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
	   mul[i][j]=0;
	   for(k=0;k<c;k++)
	   {
		mul[i][j]+=a[i][k]*b[k][j];
	   }
       }
   }
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
	   cout<<mul[i][j]<<" ";
       }
       cout<<"\n";
   }
   getch();

}























































