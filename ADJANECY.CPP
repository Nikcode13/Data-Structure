//program to implement Adjancy of Matrix
#include<iostream.h>
#include<conio.h>
int vertarr[20][20];
void display(int v)
{
    for(int i=0;i<v;i++)
    {
	 for(int j=0;j<v;j++)
	 {
	     cout<<vertarr[i][j]<<" ";
	 }
	 cout<<endl;
    }
}
void add_edge(int u,int v)    //function to add edge
{
    vertarr[u][v]=1;
    vertarr[v][u]=1;
}
void main()
{
   clrscr();
   int v = 6;
   //cout<<"enter number of vertices = ";
   //cin>>v;
   add_edge(0,4);
   add_edge(0,3);
   add_edge(1,2);
   add_edge(1,4);
   add_edge(1,5);
   add_edge(2,3);
   add_edge(2,5);
   add_edge(5,3);
   add_edge(5,4);
   display(v);
   getch();
}
